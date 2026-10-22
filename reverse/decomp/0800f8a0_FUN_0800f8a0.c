
undefined4 FUN_0800f8a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 3;
  }
  else {
    *(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}


