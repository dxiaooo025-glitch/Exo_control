
int FUN_08024af4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_08023834(param_1,param_3);
    return iVar1;
  }
  if (param_3 == 0) {
    FUN_080230ec();
  }
  else {
    uVar2 = FUN_08024b82();
    if ((param_3 <= uVar2) && (uVar2 >> 1 < param_3)) {
      return param_2;
    }
    iVar1 = FUN_08023834(param_1,param_3);
    if (iVar1 != 0) {
      if (uVar2 <= param_3) {
        param_3 = uVar2;
      }
      FUN_080230b2(iVar1,param_2,param_3);
      FUN_080230ec(param_1,param_2);
      return iVar1;
    }
  }
  return 0;
}


