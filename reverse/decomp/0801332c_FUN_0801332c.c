
undefined4 FUN_0801332c(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_08012d82(param_1,DAT_0801336c);
    uVar1 = FUN_08012fd2(param_2,0xc1,uVar1);
  }
  return uVar1;
}


