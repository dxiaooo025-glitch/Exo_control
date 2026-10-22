# DOFC 固件逆向分析（Ghidra 版）

目标：`firmware.bin`（STM32H723VGT6，版本 `DOFC_PHASE0_FIX2_20260926`）
工具：Ghidra 12.2 headless，`ARM:LE:32:Cortex`，基址 0x08000000
结果：**625 个函数全部反编译成功，0 失败**，输出在 `decomp/` 目录

---

## 0. 一句话结论

这套代码不是"限位 + 限流 + 限扭矩"三件套，而是：

- **位置**：只做 ±180° 回绕（wrap），没有硬限位
- **扭矩/电流**：`tanh` **软饱和**（不是硬钳位），外加发送前 ±5 A 硬检查
- **DOFC**：延迟线 + 一阶低通 + **两关节正弦差** 的相位助力

---

## 1. DOFC 核心：`FUN_080158A8`

这是 `DELAY_ASSIST` 模式调用的算法入口（调用点 `FUN_08017BE0` 第 1975 行）。

还原后的 C：

```c
void dofc_update(float ramp, ctx_t *p, leg_t *L, leg_t *R, dofc_log_t *out)
{
    uint idx = p->wr;  if (idx > 63) idx = 0;      // 写指针
    uint rd  = p->rd;  if (rd  > 63) rd  = 63;     // 读指针

    /* ① 低通系数，夹在 [0.001, 1.0] */
    float alpha = clamp(p->alpha_cfg, 0.001f, 1.0f);

    /* ② 关节角：度→弧度，减零点；右腿取反（镜像安装） */
    float aL = deg2rad(L->pos_deg) - p->zero_L;
    float aR = -(deg2rad(R->pos_deg) - p->zero_R);

    /* ③ 一阶低通：y = y*alpha + (1-alpha)*x */
    p->fL = p->fL * alpha + (1.0f - alpha) * aL;
    p->fR = p->fR * alpha + (1.0f - alpha) * aR;

    /* ④ 64 点环形延迟线 */
    p->bufL[idx] = p->fL;
    p->bufR[idx] = p->fR;
    uint d = (idx - rd) & 0x3F;                    // 延迟深度 = 读写指针差
    float dL = p->bufL[d];
    float dR = p->bufR[d];

    /* ⑤ DOFC 信号 = 增益 × (sin(右延迟角) − sin(左延迟角)) */
    float sig = p->gain * (sinf(dR) - sinf(dL));

    /* ⑥ 软启动斜坡 0→1 */
    sig = p->gain2 * sig * clamp(ramp, 0.0f, 1.0f);

    /* ⑦ 输出前软饱和（tanh），限值 p->limit */
    L->cmd = soft_sat(L->k * sig, p->limit);
    R->cmd = soft_sat(R->k * sig, p->limit);

    p->wr = (idx + 1) & 0x3F;
}
```

### 这段代码在干什么

`sin(θR) − sin(θL)` 是**左右关节角的相位差**：两腿反相摆动（正常步态）时最大，
同相（站立/静止）时为零。再经过延迟线 `d` 和低通 `alpha`，实现：

- `gain`  —— 助力强度
- `delay_samples` —— 相位补偿（延迟多少拍），对应 `p->rd` 与 `p->wr` 的差
- `filter_alpha` —— 平滑度，越小越平滑但越滞后

所以它不是"扰动观测器"，更像是**基于步态相位的延迟助力曲线**——
DOFC 在这里应该是 "Delay-Offset Feedback Control" 之类的自造缩写。

### 参考：伪代码对应的关键函数

| 函数 | 作用 | 确认依据 |
|---|---|---|
| `FUN_080158A8` | DOFC 更新 | 上述结构 |
| `FUN_08014804(x,lo,hi)` | `clamp(x,lo,hi)` | 三分支比较，返回夹紧值 |
| `FUN_08014858(x,lim)` | `tanh(x/lim)*lim` | 调 `FUN_0802141C`（tanhf），再 clamp |
| `FUN_0802141C` | `tanhf` | exp 实现 + 溢出分支 |
| `FUN_08021780` | `sinf` | 多项式 + 区间归约 |
| `FUN_080149C4` | `deg2rad`（×0.0174533） | 常量池 0x3C8EFA35 |
| `FUN_080149EC` | `rad2deg`（×57.2958） | 常量池 0x42652EE0 |

---

## 2. 限位：±180° 回绕，没有硬限位

`FUN_08014950`：

```c
float wrap_deg(float a) {
    while (a >  180.0f) a -= 360.0f;
    while (a < -180.0f) a += 360.0f;
    return a;
}
```

`FUN_08014B0C` 是同款弧度版（±π）。

**没有找到对关节位置的 min/max 钳位。** 这套固件不靠限位保护执行器，
位置只做回绕防止数值发散；真正兜底的是下面的扭矩软饱和 + 电流硬检查 + 故障检测。

---

## 3. 限扭矩：`tanh` 软饱和

`FUN_08014858`：

```c
float soft_sat(float x, float lim) {
    if (lim <= 0.0f) return 0.0f;
    return clamp(tanhf(x / lim) * lim, -lim, lim);
}
```

注意这是**软限幅**：`x` 接近 `lim` 时曲线逐渐压平，不会像 `if (x>lim) x=lim`
那样在边界产生导数突变，对力控/助力场景更友好。

DOFC 输出就直接走这一步（第 ⑦ 步）。

---

## 4. 限电流：发送前 ±5 A 硬检查

`FUN_080131D8`（把电流指令打成 CAN 帧发出去）：

```c
uint send_current(float amp, can_handle_t *h) {
    if (h == NULL || h->id == 0) return 1;          // 句柄无效
    if (amp > 5.0f || amp < -5.0f) return 1;        // ★ 硬限幅 ±5 A
    int32_t mA = (int32_t)(amp * 1000.0f + (amp < 0 ? -0.5f : 0.5f));  // A→mA，四舍五入
    uint8_t frame[5] = { 0xC0, mA&0xFF, (mA>>8)&0xFF, (mA>>16)&0xFF, (mA>>24)&0xFF };
    return can_send(h, frame, 5);                   // FUN_08012E90
}
```

要点：

- **5.0 A 是硬编码常量**（`0x080132B0 = 1000.0`，5.0 内联在代码里），不是配置项
- 超过 ±5 A 直接**拒绝发送**并返回错误码，会体现在 `ACK,ERR` / fault 计数里
- 单位换算：A × 1000 → mA，再小端打包进 `0xC0` 命令帧

---

## 5. 软启动斜坡

调用 DOFC 前（`FUN_08017BE0` 第 1972-1974 行）：

```c
float ramp = clamp((float)counter / 1500.0f, 0.0f, 1.0f);
```

1500 拍内从 0 线性升到 1，避免模式切换瞬间助力突变。这个 `ramp` 会乘进
DOFC 输出。

---

## 6. 数据记录（为什么固件自带 CSV 表头）

- `FUN_0802096C`：把 0x74 字节的样本推进 64 槽环形缓冲（`ctx + i*0x74`）
- `FUN_0801F684`：从环形缓冲取一条样本
- `FUN_0802102C`：DOFC 日志任务，按 `DOFC_CONFIG` / `DOFC_HEADER` / `DOFC_SAMPLE` 输出
- `FUN_080206F4`：`DOFC_Reset(cfg*)`，`memcpy(&ctx.cfg, cfg, 0x30)` 并清计数器

这套日志就是作者自带的示波器，`DOFC_SAMPLE` 的每一列都能和上面伪代码的变量对上。

---

## 7. 配置结构体（32 字节）

```c
struct dofc_cfg {                      // ctx + 0x3A04
    uint32_t sample_period_ms;         // +0x00
    uint32_t target_hz;                // +0x04
    float    gain;                     // +0x08
    uint32_t delay_samples;            // +0x0C
    float    filter_alpha;             // +0x10
    float    torque_to_current;        // +0x14
    float    left_initial_angle_rad;   // +0x18
    float    right_initial_angle_rad;  // +0x1C
    float    torque_limit_Nm;          // +0x20
    int32_t  left_direction_sign;      // +0x24
    int32_t  right_direction_sign;     // +0x28
};
```

运行时通过 USB 命令（`MOTOR_CONFIG`/`ILIM`/`LIMIT` 等）修改。

---

## 8. 复刻时的注意事项

1. **限幅是软的**。直接照抄 `if (x > lim) x = lim` 会得到不一样的动态响应，
   尤其是接近饱和区的时候。
2. **延迟线深度是 64**，不是任意值；`delay_samples` 实际是读写指针的环差。
3. **右腿的符号是反的**（`-(...)`），因为电机镜像安装；移植时容易漏。
4. **±5 A 是硬编码**，如果换电机需要改代码，不是改配置。
5. `sinf` 用的不是标准库实现，是作者自己的一套多项式（`FUN_08021780`），
   精度和 libm 可能有细微差别，但行为一致。

---

## 9. 产物

| 文件 | 内容 |
|---|---|
| `firmware.bin` | 1MB Flash 镜像 |
| `decomp/*.c` | 625 个函数的伪 C（Ghidra 输出） |
| `decomp/index.tsv` | 函数地址 / 名称 / 大小 / 伪代码长度 |
| `dofc_analysis.md` | 本文 |
| `strings.txt` | 1949 条字符串（带地址） |
