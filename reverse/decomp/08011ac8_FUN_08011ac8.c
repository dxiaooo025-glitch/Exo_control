
undefined4 FUN_08011ac8(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_08011afc + 700) == 0) {
    uVar1 = 0;
  }
  else if (*(int *)(*(int *)(DAT_08011afc + 700) + 0x214) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


