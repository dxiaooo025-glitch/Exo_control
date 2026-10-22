# exo-h723

达妙 STM32H723VGT6 外骨骼控制板 —— 固件逆向、分析与改造。

## 背景

- 硬件：达妙科技 H723 控制板（STM32H723VGT6，双路 FDCAN、USB CDC、SBUS）
- 原固件版本：`DOFC_PHASE0_FIX2_20260926`
- 原作者未提供源码，本仓库保存从 Flash 读出的镜像和反编译结果

## 目录

| 路径 | 内容 |
|---|---|
| `firmware/firmware.bin` | 1MB Flash 镜像（0x08000000 起），MD5 见同目录 |
| `firmware/firmware.md5` | 校验值 |
| `reverse/decomp/` | Ghidra 反编译出的 625 个函数（伪 C） |
| `reverse/index.tsv` | 函数地址 / 名称 / 大小索引 |
| `reverse/strings.txt` | 1949 条字符串（带 Flash 地址） |
| `docs/dofc_analysis.md` | 控制算法与限幅机制分析 |
| `tools/` | 逆向辅助脚本（Capstone / Ghidra 导出） |

## 关键函数地址

| 地址 | 功能 |
|---|---|
| `0x080158A8` | DOFC 核心（滤波 + 延迟 + 正弦差） |
| `0x08014804` | `clamp(x, lo, hi)` |
| `0x08014858` | `tanh` 软饱和（扭矩限幅） |
| `0x080131D8` | 电流下发（±5A 硬检查，A→mA） |
| `0x08014950` | `wrap_deg`（±180° 回绕） |
| `0x08017BE0` | 主控制 / 模式调度 |
| `0x0801F9BC` | DOFC 配置输出 |
| `0x0801FDCC` | DOFC 采样输出（CSV） |
| `0x080206F4` | `DOFC_Reset(cfg)` |

## 复现

读固件（USB DFU）：

```
STM32_Programmer_CLI -c port=USB1 -u 0x08000000 0x100000 firmware.bin
```

反编译（Ghidra 12.2 + JDK 25）：

```
analyzeHeadless D:\software\ghidra_proj STM32H723 ^
  -import firmware.bin -processor ARM:LE:32:Cortex ^
  -loader BinaryLoader -loader-baseAddr 0x08000000 ^
  -scriptPath tools\ghidra_scripts -postScript DumpDecomp.java reverse\decomp
```

## 已知问题

1. 控制律 `tau = g * sin(theta(t-T))` 只有位置项，没有阻尼项，
   小延迟下呈现负刚度，增益调大后自激发散。
2. 扭矩限值 24 Nm × 0.30 A/Nm = 7.2 A，超过固件硬编码的 ±5 A；
   超限时指令被**丢弃**而不是钳位，造成助力断续。
3. 角度只做 ±180° 回绕，没有硬限位。

## 后续

- [ ] 注入式替换 `0x080158A8`，加入阻尼项验证
- [ ] 评估是否全量重写应用层
