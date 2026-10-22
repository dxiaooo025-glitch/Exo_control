
undefined4 FUN_0801f574(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*DAT_0801f628 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = (((param_1 >> 0x1b) - (uint)(param_1 * 0x20 < param_1)) * 0x200 | param_1 * 0x1f >> 0x17
            ) + (uint)CARRY4(param_1 * 0x3e00,param_1);
    uVar1 = FUN_08000904(param_1 * 1000000,
                         (((iVar2 * 0x40 | param_1 * 0x3e01 >> 0x1a) - iVar2) -
                         (uint)(param_1 * 0xf8040 < param_1 * 0x3e01)) +
                         (uint)CARRY4(param_1 * 999999,param_1),*DAT_0801f628,0);
  }
  return uVar1;
}


