
undefined4 FUN_08009e18(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 0x41) == ' ') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar1 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined1 *)((int)param_1 + 0x41) = 0x24;
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      *(uint *)*param_1 = *(uint *)*param_1 & 0xffffefff;
      *(uint *)*param_1 = param_2 | *(uint *)*param_1;
      *(uint *)*param_1 = *(uint *)*param_1 | 1;
      *(undefined1 *)((int)param_1 + 0x41) = 0x20;
      *(undefined1 *)(param_1 + 0x10) = 0;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}


