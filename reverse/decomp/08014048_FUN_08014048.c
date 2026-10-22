
void FUN_08014048(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 auStack_24 [6];
  byte local_9;
  
  iVar1 = FUN_08013f68();
  if ((iVar1 != 0) && (9 < (uint)(param_1 - *DAT_08014114))) {
    *DAT_08014114 = param_1;
    iVar1 = FUN_08013e90(auStack_24 + 3,auStack_24);
    if (iVar1 != 0) {
      for (local_9 = 0; local_9 < 3; local_9 = local_9 + 1) {
        *(undefined4 *)((local_9 + 4) * 4 + DAT_08014118) = auStack_24[local_9 + 3];
        *(undefined4 *)((local_9 + 6) * 4 + DAT_08014118 + 4) = auStack_24[local_9];
      }
      *(int *)(DAT_08014118 + 0x38) = param_1;
      *(int *)(DAT_08014118 + 0x3c) = *(int *)(DAT_08014118 + 0x3c) + 1;
    }
  }
  if ((*(int *)(DAT_08014118 + 0x3c) == 0) ||
     (500 < (uint)(param_1 - *(int *)(DAT_08014118 + 0x38)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(DAT_08014118 + 0xc) = uVar2;
  return;
}


