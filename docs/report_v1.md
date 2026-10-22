# STM32H723VGT6 固件读取报告

生成时间：2026-10-22 21:5x
目标板：达妙科技 (DAMIAO) STM32H723VGT6 控制板

## 1. 镜像基本信息

| 项目 | 值 |
|---|---|
| 文件 | `firmware.bin` |
| 大小 | 1,048,576 字节 (1 MB，整片 Flash) |
| MD5 | `62cfed4940a3f969b56c72058919b4f4` |
| 实际占用 | 158,164 字节 (0x26A00，15.1%) |
| 末字节地址 | 0x080269D3 |
| 初始 SP | 0x20020000 (DTCM RAM) |
| 复位向量 | 0x08012BF9 (Thumb) |
| Boot 地址 | 0x08000000 (无 bootloader，应用直接在 0x08000000) |
| RDP | Level 0 (无读保护) |
| 写保护 | 无 |

读取方式：USB DFU，`STM32_Programmer_CLI -c port=USB1 -u 0x08000000 0x100000`

## 2. 固件身份

- **版本字符串**：`DOFC_PHASE0_FIX2_20260926`（位于 0x08025C60）
- USB 枚举为 **CDC 虚拟串口**：`STM32 Virtual ComPort` / `STMicroelectronics`
- 工具链：arm-none-eabi GCC 12.3（CubeIDE 1.17 / newlib 12.3）

## 3. 软件结构（从字符串还原）

### FreeRTOS 任务
- `NMotor_Task` — 电机控制主任务
- `NExo_Task` — 外骨骼/助力逻辑
- `NVofa_Task` — VOFA+ 上位机波形数据流
- `NLed_Task` — 状态灯
- `NDOFC_ValidationLogger_Task` — DOFC 验证日志（含 deadline 统计）

### 控制模式
`CURRENT` / `SPEED` / `SINE_SPEED` / `SINE_POS` / `TRACK` / `ASSIST` / `DELAY_ASSIST`

### 运行状态机
`BOOT` → `READY` → `ARMED` → `RUNNING` / `FAULT`

### 电机接口
- 两路电机 M1 / M2，CAN 总线（FDCAN）连接达妙电机
- CAN 帧计数器：`A4TX/A3TX/AETX/CFTX/C0TX`（DAMIAO 协议帧 ID）
- 错误统计：`LEC/TEC/REC/BO/TEC`、Bus-Off 恢复（`BOR_ACTIVE/BOR_COUNT/BOR_OK`）

### 文本协议（USB CDC，ASCII 行）
命令：`START` `STOP` `ZERO` `REBOOT` `CLEAR_FAULT` `MOTORS` `MOTOR_MODE`
`MOTOR_CONFIG` `ASSIST_DIR` `HIGH` `ILIM` `LIMIT` `LOAD` `PROFILE` `BIAS` `DUR_MS`

遥测：`DATA` / `SENSOR` / `TRACK` / `STATUS` / `DOFC_CONFIG` / `DOFC_SAMPLE`
`DOFC_HEADER` / `LOG_SUMMARY` / `DEADLINE_DIAG` / `FIRMWARE_VERSION`

应答：`ACK,OK,...` / `ACK,ERR,...`（如 `MOTOR_OFFLINE`、`WAIT_FEEDBACK`、`NO_A3_POSITION`）

### DOFC 控制参数（可从字符串看出算法结构）
`sample_period_ms` `target_hz` `gain` `delay_samples` `filter_alpha`
`torque_to_current` `left/right_initial_angle_rad` `torque_limit_Nm`
`left/right_direction_sign` — 带延迟补偿的扰动观测/助力控制。

## 4. 结论

- **C 源码无法从芯片里恢复**：Flash 里只有机器码，没有符号表、没有调试信息。
- **但这份 1MB 镜像是完整、可用的**：可以直接 `-d firmware.bin 0x08000000` 原样烧回。
- 逆向可行：用 Ghidra / IDA 加载（基址 0x08000000，Cortex-M7）能看到汇编和伪 C，但要还原成可编译工程不现实。
- `strings.txt` 已导出全部 1,949 条字符串（带 Flash 地址），可直接当作逆向索引。

## 5. 附：本次读取环境的坑

- 中途 `pnputil /restart-device` 把 USB 设备节点搞进了 "pending reboot"，导致连 SYSTEM 都无法打开设备句柄（Win32 error 5）。
- 这个状态重启电脑也不一定清，最后是 GUI 重新连接后才恢复正常。
- **教训**：以后读 DFU 设备不要用 pnputil 折腾设备节点，直接 `STM32_Programmer_CLI` 或 GUI 即可。
