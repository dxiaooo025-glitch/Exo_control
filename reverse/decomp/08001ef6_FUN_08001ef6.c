
undefined4 FUN_08001ef6(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xf;
  param_1[uVar1 * 9 + 0x98] = param_3;
  param_1[uVar1 * 9 + 0x99] = param_4;
  param_1[uVar1 * 9 + 0x9a] = 0;
  *(undefined1 *)((int)param_1 + uVar1 * 0x24 + 0x255) = 0;
  *(byte *)(param_1 + uVar1 * 9 + 0x95) = param_2 & 0xf;
  if (*(char *)((int)param_1 + 6) == '\x01') {
    param_1[uVar1 * 9 + 0x9c] = param_3;
  }
  FUN_0800302c(*param_1,param_1 + uVar1 * 9 + 0x95,*(undefined1 *)((int)param_1 + 6));
  return 0;
}


