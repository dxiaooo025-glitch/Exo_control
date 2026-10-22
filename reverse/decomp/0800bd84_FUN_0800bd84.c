
undefined4 FUN_0800bd84(int *param_1,uint param_2,char param_3,uint param_4,int param_5)

{
  int iVar1;
  
  do {
    if ((param_2 == (param_2 & *(uint *)(*param_1 + 0x14))) != (bool)param_3) {
      return 0;
    }
    iVar1 = FUN_080092a0();
  } while ((((uint)(iVar1 - param_5) < param_4) || (param_4 == 0xffffffff)) && (param_4 != 0));
  return 3;
}


