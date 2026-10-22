
undefined4 FUN_08009ade(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  
  while( true ) {
    if ((*(uint *)(*param_1 + 0x18) & 2) == 2) {
      return 0;
    }
    iVar1 = FUN_08009bf4(param_1,param_2,param_3);
    if (iVar1 != 0) break;
    if ((param_2 != 0xffffffff) &&
       (((iVar1 = FUN_080092a0(), param_2 < (uint)(iVar1 - param_3) || (param_2 == 0)) &&
        ((*(uint *)(*param_1 + 0x18) & 2) != 2)))) {
      param_1[0x11] = param_1[0x11] | 0x20;
      *(undefined1 *)((int)param_1 + 0x41) = 0x20;
      *(undefined1 *)((int)param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      return 1;
    }
  }
  return 1;
}


