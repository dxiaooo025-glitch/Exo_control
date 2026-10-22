
void FUN_08023bf4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_08023970(param_1,1);
  if (iVar1 == 0) {
    iVar1 = FUN_08024a80(DAT_08023c1c,0x145,0,DAT_08023c18);
  }
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = 1;
  return;
}


