
undefined4 FUN_08009a2c(int *param_1,uint param_2,char param_3,uint param_4,int param_5)

{
  int iVar1;
  
  while( true ) {
    if ((param_2 == (param_2 & *(uint *)(*param_1 + 0x18))) != (bool)param_3) {
      return 0;
    }
    iVar1 = FUN_08009bf4(param_1,param_4,param_5);
    if (iVar1 != 0) break;
    if ((param_4 != 0xffffffff) &&
       (((iVar1 = FUN_080092a0(), param_4 < (uint)(iVar1 - param_5) || (param_4 == 0)) &&
        ((param_2 == (param_2 & *(uint *)(*param_1 + 0x18))) == (bool)param_3)))) {
      param_1[0x11] = param_1[0x11] | 0x20;
      *(undefined1 *)((int)param_1 + 0x41) = 0x20;
      *(undefined1 *)((int)param_1 + 0x42) = 0;
      *(undefined1 *)(param_1 + 0x10) = 0;
      return 1;
    }
  }
  return 1;
}


