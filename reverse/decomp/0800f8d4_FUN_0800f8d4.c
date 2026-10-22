
undefined4 FUN_0800f8d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    *(undefined4 *)(iVar1 + 0x208) = param_2;
    *(undefined4 *)(iVar1 + 0x210) = param_3;
    uVar2 = 0;
  }
  return uVar2;
}


