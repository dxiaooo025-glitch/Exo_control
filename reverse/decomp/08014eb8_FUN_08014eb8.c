
undefined4 FUN_08014eb8(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int local_10 [2];
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    local_10[0] = 0;
    uVar1 = FUN_08022a80(param_1,local_10);
    if (param_1 == local_10[0]) {
      uVar1 = 0;
    }
    else {
      *param_2 = uVar1;
      uVar1 = 1;
    }
  }
  return uVar1;
}


