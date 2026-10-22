
float FUN_08021780(float param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  double dVar13;
  
  uVar3 = (uint)ABS(param_1) >> 0x14;
  dVar13 = (double)param_1;
  if (uVar3 < 0x3f4) {
    dVar10 = dVar13 * dVar13;
    if (0x397 < uVar3) {
      return (float)(dVar13 + dVar13 * dVar10 * *(double *)(DAT_08021958 + 0x58) +
                    (*(double *)(DAT_08021958 + 0x60) + dVar10 * *(double *)(DAT_08021958 + 0x68)) *
                    dVar10 * dVar13 * dVar10);
    }
  }
  else {
    if (uVar3 < 0x42f) {
      iVar12 = VectorFloatToSigned(dVar13 * *(double *)(DAT_08021958 + 0x20),3);
      uVar3 = iVar12 + 0x800000 >> 0x18;
      iVar12 = DAT_08021958 + 0x70;
      if ((uVar3 & 2) == 0) {
        iVar12 = DAT_08021958;
      }
      dVar10 = (double)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
      dVar13 = dVar13 + -dVar10 * *(double *)(DAT_08021958 + 0x28);
      dVar10 = dVar13 * dVar13;
      if ((int)(uVar3 << 0x1f) < 0) {
        return (float)(*(double *)(iVar12 + 0x30) + dVar10 * *(double *)(iVar12 + 0x38) +
                       dVar10 * dVar10 * *(double *)(iVar12 + 0x40) +
                      (*(double *)(iVar12 + 0x48) + dVar10 * *(double *)(iVar12 + 0x50)) *
                      dVar10 * dVar10 * dVar10);
      }
      dVar6 = *(double *)(DAT_08021958 + (uVar3 & 3) * 8);
      dVar8 = *(double *)(iVar12 + 0x68);
      dVar11 = *(double *)(iVar12 + 0x60);
      dVar7 = *(double *)(iVar12 + 0x58);
    }
    else {
      if (0x7f7 < uVar3) {
        fVar5 = (param_1 - param_1) / (param_1 - param_1);
        if (NAN(param_1)) {
          return fVar5;
        }
        puVar2 = (undefined4 *)FUN_08023058();
        *puVar2 = 0x21;
        return fVar5;
      }
      uVar3 = ((uint)param_1 & 0x3fffffff) >> 0x1a;
      iVar12 = DAT_0802195c + uVar3 * 4;
      uVar4 = ((uint)param_1 & 0x7fffff | 0x800000) << (((uint)param_1 & 0x3ffffff) >> 0x17);
      lVar1 = (ulonglong)uVar4 * (ulonglong)*(uint *)(iVar12 + 0x10) +
              ((ulonglong)(uVar4 * *(int *)(DAT_0802195c + uVar3 * 4)) << 0x20 |
              (ulonglong)*(uint *)(iVar12 + 0x20) * (ulonglong)uVar4 >> 0x20);
      iVar12 = (int)((ulonglong)lVar1 >> 0x20);
      uVar3 = iVar12 + 0x20000000;
      uVar4 = uVar3 >> 0x1e;
      dVar13 = (double)FUN_080005ec((int)lVar1,iVar12 - (uVar3 & 0xc0000000));
      uVar3 = uVar4 - ((int)param_1 >> 0x1f);
      iVar12 = DAT_08021960;
      if ((uVar3 & 2) == 0) {
        iVar12 = DAT_08021960 + -0x70;
      }
      dVar13 = dVar13 * DAT_08021950;
      dVar10 = dVar13 * dVar13;
      if ((int)(uVar4 << 0x1f) < 0) {
        return (float)(*(double *)(iVar12 + 0x30) + dVar10 * *(double *)(iVar12 + 0x38) +
                       dVar10 * dVar10 * *(double *)(iVar12 + 0x40) +
                      (*(double *)(iVar12 + 0x48) + dVar10 * *(double *)(iVar12 + 0x50)) *
                      dVar10 * dVar10 * dVar10);
      }
      dVar6 = *(double *)(DAT_08021960 + -0x70 + (uVar3 & 3) * 8);
      dVar8 = *(double *)(iVar12 + 0x68);
      dVar11 = *(double *)(iVar12 + 0x60);
      dVar7 = *(double *)(iVar12 + 0x58);
    }
    dVar9 = dVar13 * dVar6 * dVar10;
    param_1 = (float)(dVar13 * dVar6 + dVar9 * dVar7 + (dVar11 + dVar10 * dVar8) * dVar10 * dVar9);
  }
  return param_1;
}


