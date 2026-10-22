
undefined1 FUN_08011358(int param_1,byte param_2)

{
  undefined1 uVar1;
  
  if ((char)param_2 < '\0') {
    uVar1 = *(undefined1 *)((param_2 & 0x7f) * 0x24 + *(int *)(param_1 + 0x2c8) + 0x16);
  }
  else {
    uVar1 = *(undefined1 *)((param_2 & 0x7f) * 0x24 + *(int *)(param_1 + 0x2c8) + 0x256);
  }
  return uVar1;
}


