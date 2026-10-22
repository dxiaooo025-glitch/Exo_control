
int FUN_08024b74(void)

{
  int iVar1;
  int extraout_r1;
  
  FUN_08024f8c(6);
  FUN_08012b08(1);
  iVar1 = *(int *)(extraout_r1 + -4) + -4;
  if (*(int *)(extraout_r1 + -4) < 0) {
    iVar1 = iVar1 + *(int *)(extraout_r1 + iVar1);
  }
  return iVar1;
}


