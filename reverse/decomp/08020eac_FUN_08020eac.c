
void FUN_08020eac(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_0801f4f4();
  uVar5 = iVar2 - *(int *)(DAT_08020f70 + 0x46a0);
  *(int *)(DAT_08020f70 + 0x3a50) = *(int *)(DAT_08020f70 + 0x3a50) + 1;
  iVar2 = DAT_08020f70;
  uVar4 = *(uint *)(DAT_08020f70 + 0x3a58);
  piVar1 = (int *)(DAT_08020f70 + 0x3a5c);
  *(uint *)(DAT_08020f70 + 0x3a58) = uVar4 + uVar5;
  *(uint *)(iVar2 + 0x3a5c) = *piVar1 + (uint)CARRY4(uVar4,uVar5);
  if (*(uint *)(DAT_08020f70 + 0x3a60) < uVar5) {
    *(uint *)(DAT_08020f70 + 0x3a60) = uVar5;
  }
  if (*(char *)(DAT_08020f70 + 0x46a8) != '\0') {
    iVar2 = *(int *)(DAT_08020f70 + 0x46a4);
    uVar3 = FUN_0801f574(uVar5);
    *(undefined4 *)(DAT_08020f70 + iVar2 * 0x18 + 0x3a88) = uVar3;
    *(undefined1 *)(DAT_08020f70 + 0x46a8) = 0;
  }
  return;
}


