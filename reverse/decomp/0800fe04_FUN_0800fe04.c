
void FUN_0800fe04(int param_1)

{
  FUN_08010d48();
  *DAT_0800febc = *DAT_0800febc + 1;
  if (*DAT_0800fec0 == 0) {
    *DAT_0800fec0 = param_1;
    if (*DAT_0800febc == 1) {
      FUN_080103bc();
    }
  }
  else if ((*DAT_0800fec4 == 0) && (*(uint *)(*DAT_0800fec0 + 0x2c) <= *(uint *)(param_1 + 0x2c))) {
    *DAT_0800fec0 = param_1;
  }
  *DAT_0800fec8 = *DAT_0800fec8 + 1;
  *DAT_0800fecc = *DAT_0800fecc | 1 << (*(uint *)(param_1 + 0x2c) & 0xff);
  FUN_0800fa9a(DAT_0800fed0 + *(int *)(param_1 + 0x2c) * 0x14,param_1 + 4);
  FUN_08010dac();
  if ((*DAT_0800fec4 != 0) && (*(uint *)(*DAT_0800fec0 + 0x2c) < *(uint *)(param_1 + 0x2c))) {
    *DAT_0800fed4 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


