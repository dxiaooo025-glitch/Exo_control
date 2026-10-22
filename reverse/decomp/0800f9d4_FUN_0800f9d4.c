
undefined4 FUN_0800f9d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
  if (*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) == 0) {
    uVar2 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_08011430(param_1,*DAT_0800fa3c,*(undefined4 *)(iVar1 + 0x204),0x200);
    }
    else {
      FUN_08011430(param_1,*DAT_0800fa3c,*(undefined4 *)(iVar1 + 0x204),0x40);
    }
    uVar2 = 0;
  }
  return uVar2;
}


