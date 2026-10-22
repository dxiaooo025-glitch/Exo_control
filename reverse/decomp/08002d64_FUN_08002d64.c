
undefined4 FUN_08002d64(int param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_2;
  if (param_2[1] == 1) {
    *(uint *)(param_1 + 0x81c) = 1 << (*param_2 & 0xf) & 0xffffU | *(uint *)(param_1 + 0x81c);
    if ((*(uint *)(param_1 + uVar1 * 0x20 + 0x900) & 0x8000) == 0) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           DAT_08002e70 |
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) |
           uVar1 << 0x16 | *(uint *)(param_2 + 8) & 0x7ff | (uint)param_2[4] << 0x12;
    }
  }
  else {
    *(uint *)(param_1 + 0x81c) = (1 << (*param_2 & 0xf)) << 0x10 | *(uint *)(param_1 + 0x81c);
    if ((*(uint *)(param_1 + uVar1 * 0x20 + 0xb00) & 0x8000) == 0) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
           DAT_08002e70 |
           *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) |
           (uint)param_2[4] << 0x12 | *(uint *)(param_2 + 8) & 0x7ff;
    }
  }
  return 0;
}


