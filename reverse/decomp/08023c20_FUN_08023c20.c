
void FUN_08023c20(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  
  iVar5 = param_2;
  if (*(int *)(param_3 + 0x10) <= *(int *)(param_2 + 0x10)) {
    iVar5 = param_3;
    param_3 = param_2;
  }
  iVar12 = *(int *)(param_3 + 0x10);
  iVar10 = *(int *)(iVar5 + 0x10);
  iVar1 = *(int *)(param_3 + 4);
  iVar7 = iVar12 + iVar10;
  if (*(int *)(param_3 + 8) < iVar7) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = FUN_08023970(param_1,iVar1);
  if (iVar1 == 0) {
    iVar1 = FUN_08024a80(DAT_08023d70,0x162,0,DAT_08023d6c);
  }
  puVar6 = (uint *)(iVar1 + 0x14);
  puVar9 = puVar6 + iVar7;
  for (puVar3 = puVar6; puVar3 < puVar9; puVar3 = puVar3 + 1) {
    *puVar3 = 0;
  }
  puVar2 = (ushort *)(iVar5 + 0x14);
  puVar3 = (uint *)(param_3 + 0x14 + iVar12 * 4);
  puVar4 = puVar2 + iVar10 * 2;
  iVar5 = ((int)puVar3 + (-0x15 - param_3) & 0xfffffffcU) + 4;
  if (puVar3 < (uint *)(param_3 + 0x15)) {
    iVar5 = 4;
  }
  while (puVar2 < puVar4) {
    uVar13 = (uint)*puVar2;
    if (uVar13 != 0) {
      uVar14 = 0;
      puVar11 = puVar6;
      puVar16 = (uint *)(param_3 + 0x14);
      do {
        puVar15 = puVar16 + 1;
        uVar14 = uVar13 * (*puVar16 & 0xffff) + (*puVar11 & 0xffff) + uVar14;
        uVar8 = uVar13 * (*puVar16 >> 0x10) + (*puVar11 >> 0x10) + (uVar14 >> 0x10);
        *puVar11 = uVar14 & 0xffff | uVar8 * 0x10000;
        uVar14 = uVar8 >> 0x10;
        puVar11 = puVar11 + 1;
        puVar16 = puVar15;
      } while (puVar15 < puVar3);
      *(uint *)((int)puVar6 + iVar5) = uVar14;
    }
    uVar13 = (uint)puVar2[1];
    puVar2 = puVar2 + 2;
    if (uVar13 != 0) {
      uVar14 = *puVar6;
      uVar8 = 0;
      puVar11 = (uint *)(param_3 + 0x14);
      puVar16 = puVar6;
      do {
        uVar8 = uVar13 * (ushort)*puVar11 + (uint)*(ushort *)((int)puVar16 + 2) + uVar8;
        *puVar16 = uVar14 & 0xffff | uVar8 * 0x10000;
        puVar15 = puVar11 + 1;
        uVar14 = uVar13 * (*puVar11 >> 0x10) + (uint)(ushort)puVar16[1] + (uVar8 >> 0x10);
        uVar8 = uVar14 >> 0x10;
        puVar11 = puVar15;
        puVar16 = puVar16 + 1;
      } while (puVar15 < puVar3);
      *(uint *)((int)puVar6 + iVar5) = uVar14;
    }
    puVar6 = puVar6 + 1;
  }
  while ((0 < iVar7 && (puVar9 = puVar9 + -1, *puVar9 == 0))) {
    iVar7 = iVar7 + -1;
  }
  *(int *)(iVar1 + 0x10) = iVar7;
  return;
}


