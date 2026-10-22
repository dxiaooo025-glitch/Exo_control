
float FUN_08021968(float param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar13;
  double dVar12;
  double dVar14;
  
  uVar3 = (uint)ABS(param_1) >> 0x14;
  dVar14 = (double)param_1;
  if (uVar3 < 0x3f4) {
    dVar14 = dVar14 * dVar14;
    if (uVar3 < 0x398) {
      return 1.0;
    }
    return (float)(*(double *)(DAT_08021b30 + 0x30) + dVar14 * *(double *)(DAT_08021b30 + 0x38) +
                   dVar14 * dVar14 * *(double *)(DAT_08021b30 + 0x40) +
                  (*(double *)(DAT_08021b30 + 0x48) + dVar14 * *(double *)(DAT_08021b30 + 0x50)) *
                  dVar14 * dVar14 * dVar14);
  }
  if (uVar3 < 0x42f) {
    iVar13 = VectorFloatToSigned(dVar14 * *(double *)(DAT_08021b30 + 0x20),3);
    uVar3 = iVar13 + 0x800000 >> 0x18;
    iVar13 = DAT_08021b30 + 0x70;
    if ((uVar3 & 2) == 0) {
      iVar13 = DAT_08021b30;
    }
    dVar12 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    dVar14 = dVar14 + -dVar12 * *(double *)(DAT_08021b30 + 0x28);
    dVar12 = dVar14 * dVar14;
    if (-1 < (int)(uVar3 << 0x1f)) {
      return (float)(*(double *)(iVar13 + 0x30) + dVar12 * *(double *)(iVar13 + 0x38) +
                     dVar12 * dVar12 * *(double *)(iVar13 + 0x40) +
                    (*(double *)(iVar13 + 0x48) + dVar12 * *(double *)(iVar13 + 0x50)) *
                    dVar12 * dVar12 * dVar12);
    }
    dVar7 = *(double *)(DAT_08021b30 + (uVar3 & 3) * 8);
    dVar9 = *(double *)(iVar13 + 0x68);
    dVar11 = *(double *)(iVar13 + 0x60);
    dVar8 = *(double *)(iVar13 + 0x58);
  }
  else {
    if (0x7f7 < uVar3) {
      fVar6 = (param_1 - param_1) / (param_1 - param_1);
      if (NAN(param_1)) {
        return fVar6;
      }
      puVar2 = (undefined4 *)FUN_08023058();
      *puVar2 = 0x21;
      return fVar6;
    }
    uVar3 = ((uint)param_1 & 0x3fffffff) >> 0x1a;
    iVar13 = DAT_08021b34 + uVar3 * 4;
    uVar4 = ((uint)param_1 & 0x7fffff | 0x800000) << (((uint)param_1 & 0x3ffffff) >> 0x17);
    lVar1 = (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar13 + 0x10) +
            ((ulonglong)(uVar4 * *(int *)(DAT_08021b34 + uVar3 * 4)) << 0x20 |
            (ulonglong)*(uint *)(iVar13 + 0x20) * (ulonglong)uVar4 >> 0x20);
    iVar13 = (int)((ulonglong)lVar1 >> 0x20);
    uVar5 = iVar13 + 0x20000000U >> 0x1e;
    dVar14 = (double)FUN_080005ec((int)lVar1,iVar13 - (iVar13 + 0x20000000U & 0xc0000000),iVar13,
                                  uVar4,in_r3);
    uVar3 = uVar5 - ((int)param_1 >> 0x1f);
    iVar13 = DAT_08021b38;
    if ((uVar3 & 2) == 0) {
      iVar13 = DAT_08021b38 + -0x70;
    }
    dVar14 = dVar14 * DAT_08021b28;
    dVar12 = dVar14 * dVar14;
    if (-1 < (int)(uVar5 << 0x1f)) {
      return (float)(*(double *)(iVar13 + 0x30) + dVar12 * *(double *)(iVar13 + 0x38) +
                     dVar12 * dVar12 * *(double *)(iVar13 + 0x40) +
                    (*(double *)(iVar13 + 0x48) + dVar12 * *(double *)(iVar13 + 0x50)) *
                    dVar12 * dVar12 * dVar12);
    }
    dVar7 = *(double *)(DAT_08021b38 + -0x70 + (uVar3 & 3) * 8);
    dVar9 = *(double *)(iVar13 + 0x68);
    dVar11 = *(double *)(iVar13 + 0x60);
    dVar8 = *(double *)(iVar13 + 0x58);
  }
  dVar10 = dVar14 * dVar7 * dVar12;
  return (float)(dVar14 * dVar7 + dVar10 * dVar8 + (dVar11 + dVar12 * dVar9) * dVar12 * dVar10);
}


