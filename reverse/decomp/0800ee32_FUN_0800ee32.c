
void FUN_0800ee32(undefined1 *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = FUN_0800e28e(param_2 + 2);
  *(undefined2 *)(param_1 + 2) = uVar1;
  uVar1 = FUN_0800e28e(param_2 + 4);
  *(undefined2 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_0800e28e(param_2 + 6);
  *(undefined2 *)(param_1 + 6) = uVar1;
  return;
}


