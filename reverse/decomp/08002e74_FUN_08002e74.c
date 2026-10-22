
undefined4 FUN_08002e74(int param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_2;
  if (param_2[1] == 1) {
    if ((*(uint *)(param_1 + uVar1 * 0x20 + 0x900) & 0x80000000) == 0x80000000) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x8000000;
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x40000000;
    }
    *(uint *)(param_1 + 0x83c) = ~(1 << (*param_2 & 0xf) & 0xffffU) & *(uint *)(param_1 + 0x83c);
    *(uint *)(param_1 + 0x81c) = ~(1 << (*param_2 & 0xf) & 0xffffU) & *(uint *)(param_1 + 0x81c);
    *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
         DAT_08003024 & *(uint *)(param_1 + uVar1 * 0x20 + 0x900);
  }
  else {
    if ((*(uint *)(param_1 + uVar1 * 0x20 + 0xb00) & 0x80000000) == 0x80000000) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x8000000;
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x40000000;
    }
    *(uint *)(param_1 + 0x83c) = ~((1 << (*param_2 & 0xf)) << 0x10) & *(uint *)(param_1 + 0x83c);
    *(uint *)(param_1 + 0x81c) = ~((1 << (*param_2 & 0xf)) << 0x10) & *(uint *)(param_1 + 0x81c);
    *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
         DAT_08003028 & *(uint *)(param_1 + uVar1 * 0x20 + 0xb00);
  }
  return 0;
}


