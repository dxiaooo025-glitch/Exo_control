
undefined1 FUN_08011a74(undefined4 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(DAT_08011ac4 + 700) == 0) {
    uVar1 = 3;
  }
  else if (*(int *)(*(int *)(DAT_08011ac4 + 700) + 0x214) == 0) {
    FUN_0800f8d4(DAT_08011ac4,param_1,param_2);
    uVar1 = FUN_0800f954(DAT_08011ac4);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


