
undefined4 FUN_08001f9c(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xf;
  param_1[uVar1 * 9 + 8] = param_3;
  param_1[uVar1 * 9 + 9] = param_4;
  param_1[uVar1 * 9 + 10] = 0;
  *(undefined1 *)((int)param_1 + uVar1 * 0x24 + 0x15) = 1;
  *(byte *)(param_1 + uVar1 * 9 + 5) = param_2 & 0xf;
  if (*(char *)((int)param_1 + 6) == '\x01') {
    param_1[uVar1 * 9 + 0xc] = param_3;
  }
  FUN_0800302c(*param_1,param_1 + uVar1 * 9 + 5,*(undefined1 *)((int)param_1 + 6));
  return 0;
}


