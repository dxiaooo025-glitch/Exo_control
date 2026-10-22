
int FUN_08023f38(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r2;
  int extraout_r3;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  bool bVar16;
  
  iVar1 = FUN_08023f00(param_2,param_3,param_3,param_4,param_1,param_2,param_3);
  bVar16 = iVar1 < 0;
  if (iVar1 == 0) {
    iVar2 = FUN_08023970(param_1,0);
    uVar6 = 0;
    iVar1 = iVar2;
    if (iVar2 != 0) goto LAB_08023f66;
    uVar4 = 0x237;
  }
  else {
    iVar2 = param_2;
    iVar1 = extraout_r3;
    if (bVar16) {
      iVar2 = param_3;
      iVar1 = param_2;
    }
    if (!bVar16) {
      iVar1 = param_3;
    }
    uVar6 = (uint)bVar16;
    iVar3 = FUN_08023970(param_1,*(undefined4 *)(iVar2 + 4));
    if (iVar3 != 0) {
      iVar13 = *(int *)(iVar2 + 0x10);
      iVar11 = *(int *)(iVar1 + 0x10);
      *(uint *)(iVar3 + 0xc) = uVar6;
      puVar5 = (uint *)(iVar2 + 0x10);
      puVar14 = (uint *)(iVar2 + 0x14 + iVar13 * 4);
      puVar10 = (uint *)(iVar1 + 0x14) + iVar11;
      iVar11 = 0;
      puVar12 = (uint *)(iVar3 + 0x14);
      puVar8 = (uint *)(iVar1 + 0x14);
      do {
        puVar15 = puVar8 + 1;
        puVar5 = puVar5 + 1;
        uVar6 = ((*puVar5 & 0xffff) - (*puVar8 & 0xffff)) + iVar11;
        iVar11 = ((*puVar5 >> 0x10) - (*puVar8 >> 0x10)) + ((int)uVar6 >> 0x10);
        *puVar12 = uVar6 & 0xffff | iVar11 * 0x10000;
        iVar11 = iVar11 >> 0x10;
        puVar12 = puVar12 + 1;
        puVar8 = puVar15;
      } while (puVar15 < puVar10);
      iVar7 = ((int)puVar10 + (-0x15 - iVar1) & 0xfffffffcU) + 4;
      if (puVar10 < (uint *)(iVar1 + 0x15)) {
        iVar7 = 4;
      }
      puVar8 = (uint *)(iVar7 + iVar3 + 0x14);
      puVar10 = (uint *)(iVar2 + 0x14 + iVar7);
      puVar12 = puVar8;
      for (puVar5 = puVar10; puVar5 < puVar14; puVar5 = puVar5 + 1) {
        uVar6 = *puVar5;
        iVar1 = (uVar6 >> 0x10) + ((int)(iVar11 + (uVar6 & 0xffff)) >> 0x10);
        *puVar12 = uVar6 + iVar11 & 0xffff | iVar1 * 0x10000;
        iVar11 = iVar1 >> 0x10;
        puVar12 = puVar12 + 1;
      }
      uVar6 = (int)puVar14 + (3 - (int)puVar10) & 0xfffffffc;
      if (puVar14 < (uint *)((int)puVar10 + -3)) {
        uVar6 = 0;
      }
      piVar9 = (int *)((int)puVar8 + uVar6);
      while (piVar9 = piVar9 + -1, *piVar9 == 0) {
        iVar13 = iVar13 + -1;
      }
      *(int *)(iVar3 + 0x10) = iVar13;
      return iVar3;
    }
    uVar4 = 0x245;
  }
  iVar2 = FUN_08024a80(DAT_0802405c,uVar4,0,DAT_08024058);
  iVar1 = extraout_r2;
LAB_08023f66:
  *(undefined4 *)(iVar2 + 0x10) = 1;
  *(uint *)(iVar2 + 0x14) = uVar6;
  return iVar1;
}


