
uint FUN_0802324c(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 uint param_6)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int extraout_r1;
  byte *extraout_r2;
  byte *extraout_r2_00;
  int extraout_r2_01;
  byte *extraout_r3;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  byte *pbVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint *puVar20;
  byte *pbVar21;
  uint uVar22;
  undefined8 uVar23;
  
  pbVar14 = (byte *)(*param_2 + 2);
  do {
    pbVar19 = pbVar14;
    pbVar14 = pbVar19 + 1;
  } while (*pbVar19 == 0x30);
  pbVar21 = pbVar19 + (-2 - *param_2);
  uVar23 = FUN_08023222();
  uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
  if ((int)uVar23 == 0) {
    iVar5 = FUN_08022fa6(pbVar19,DAT_080234fc,1);
    if (iVar5 == 0) {
      iVar5 = FUN_08023222(pbVar19[1]);
      pbVar18 = pbVar14;
      if (iVar5 != 0) {
        pbVar21 = pbVar14;
        do {
          pbVar19 = pbVar21;
          pbVar21 = pbVar19 + 1;
        } while (*pbVar19 == 0x30);
        uVar23 = FUN_08023222();
        uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
        bVar2 = (int)uVar23 == 0;
        pbVar21 = (byte *)0x1;
        goto LAB_080232b4;
      }
    }
    else {
      pbVar18 = pbVar19;
    }
    iVar5 = 0;
    bVar2 = true;
  }
  else {
    bVar2 = false;
    pbVar14 = (byte *)0x0;
LAB_080232b4:
    pbVar4 = pbVar19;
    do {
      pbVar18 = pbVar4;
      uVar23 = FUN_08023222(*pbVar18,uVar9,pbVar18 + 1);
      uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
      pbVar4 = extraout_r2;
    } while ((int)uVar23 != 0);
    uVar23 = FUN_08022fa6(pbVar18,DAT_080234fc,1);
    uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
    if ((int)uVar23 == 0) {
      if (pbVar14 == (byte *)0x0) {
        pbVar14 = pbVar18 + 1;
        pbVar4 = pbVar14;
        do {
          pbVar18 = pbVar4;
          uVar23 = FUN_08023222(*pbVar18,uVar9,pbVar18 + 1);
          uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
          pbVar4 = extraout_r2_00;
        } while ((int)uVar23 != 0);
      }
    }
    else if (pbVar14 == (byte *)0x0) {
      iVar5 = 0;
      goto LAB_080232ea;
    }
    iVar5 = ((int)pbVar14 - (int)pbVar18) * 4;
  }
LAB_080232ea:
  if ((*pbVar18 & 0xdf) == 0x50) {
    if (pbVar18[1] == 0x2b) {
      bVar3 = false;
LAB_08023364:
      pbVar14 = pbVar18 + 2;
    }
    else {
      if (pbVar18[1] == 0x2d) {
        bVar3 = true;
        goto LAB_08023364;
      }
      pbVar14 = pbVar18 + 1;
      bVar3 = false;
    }
    uVar23 = FUN_08023222(*pbVar14);
    if (0x18 < ((int)uVar23 - 1U & 0xff)) goto LAB_08023372;
    while( true ) {
      puVar1 = (undefined1 *)((int)((ulonglong)uVar23 >> 0x20) + 1);
      uVar23 = FUN_08023222(*puVar1,puVar1,(int)uVar23 + -0x10);
      pbVar14 = (byte *)((ulonglong)uVar23 >> 0x20);
      if (0x18 < ((int)uVar23 - 1U & 0xff)) break;
      uVar23 = CONCAT44(pbVar14,extraout_r2_01 * 10 + (int)uVar23);
    }
    iVar6 = extraout_r2_01;
    if (bVar3) {
      iVar6 = -extraout_r2_01;
    }
    iVar5 = iVar5 + iVar6;
  }
  else {
LAB_08023372:
    pbVar14 = pbVar18;
  }
  *param_2 = (int)pbVar14;
  if (bVar2) {
    if (pbVar21 == (byte *)0x0) {
      return 6;
    }
    return 0;
  }
  pbVar14 = pbVar18 + (-1 - (int)pbVar19);
  iVar6 = 0;
LAB_0802337e:
  if (7 < (int)pbVar14) {
LAB_08023398:
    iVar6 = iVar6 + 1;
    pbVar14 = (byte *)((int)pbVar14 >> 1);
    goto LAB_0802337e;
  }
  iVar6 = FUN_08023970(param_1,iVar6);
  if (iVar6 == 0) {
    uVar10 = 0xe4;
    uVar9 = DAT_08023500;
LAB_08023392:
    FUN_08024a80(DAT_08023504,uVar10,0,uVar9);
    iVar6 = extraout_r1;
    pbVar14 = extraout_r3;
    goto LAB_08023398;
  }
  puVar20 = (uint *)(iVar6 + 0x14);
  uVar11 = 0;
  uVar22 = 0;
  puVar15 = puVar20;
  while (pbVar19 < pbVar18) {
    pbVar18 = pbVar18 + -1;
    if (((*pbVar18 != 0x2e) || (pbVar18 < pbVar19)) ||
       (iVar7 = FUN_08022fa6(pbVar18,DAT_080234fc,1), iVar7 != 0)) {
      puVar17 = puVar15;
      if (uVar11 == 0x20) {
        puVar17 = puVar15 + 1;
        *puVar15 = uVar22;
        uVar22 = 0;
        uVar11 = 0;
      }
      uVar8 = FUN_08023222(*pbVar18);
      uVar22 = uVar22 | (uVar8 & 0xf) << (uVar11 & 0xff);
      uVar11 = uVar11 + 4;
      puVar15 = puVar17;
    }
  }
  *puVar15 = uVar22;
  iVar16 = (int)puVar15 + (4 - (int)puVar20) >> 2;
  *(int *)(iVar6 + 0x10) = iVar16;
  iVar7 = FUN_08023b54(uVar22);
  pbVar18 = (byte *)*param_3;
  iVar7 = iVar16 * 0x20 - iVar7;
  if ((int)pbVar18 < iVar7) {
    iVar7 = iVar7 - (int)pbVar18;
    iVar16 = FUN_08024294(iVar6,iVar7);
    uVar11 = 0;
    if (iVar16 != 0) {
      uVar22 = iVar7 - 1;
      uVar11 = 1;
      if ((1 << (uVar22 & 0x1f) & puVar20[(int)uVar22 >> 5]) != 0) {
        if (((int)uVar22 < 2) || (iVar16 = FUN_08024294(iVar6,iVar7 + -2), iVar16 == 0)) {
          uVar11 = 2;
        }
        else {
          uVar11 = 3;
        }
      }
    }
    FUN_08023180(iVar6,iVar7);
    iVar5 = iVar5 + iVar7;
  }
  else {
    if (iVar7 < (int)pbVar18) {
      iVar6 = FUN_08023e28(param_1,iVar6,(int)pbVar18 - iVar7);
      iVar5 = iVar5 - ((int)pbVar18 - iVar7);
      puVar20 = (uint *)(iVar6 + 0x14);
    }
    uVar11 = 0;
  }
  iVar7 = iVar6;
  if (param_3[2] < iVar5) goto LAB_0802340a;
  if (iVar5 < param_3[1]) {
    pbVar14 = (byte *)(param_3[1] - iVar5);
    if ((int)pbVar18 <= (int)pbVar14) {
      iVar5 = param_3[3];
      if (iVar5 == 2) {
        if (param_6 != 0) goto LAB_080234da;
      }
      else {
        if (iVar5 != 3) {
          if ((iVar5 != 1) || (pbVar18 != pbVar14)) goto LAB_080234da;
          if (pbVar18 == (byte *)0x1) goto LAB_080234b6;
          param_6 = FUN_08024294(iVar6,pbVar18 + -1);
        }
        if (param_6 == 0) {
LAB_080234da:
          FUN_080239f0(param_1,iVar6);
          *param_5 = 0;
          return 0x50;
        }
      }
LAB_080234b6:
      *param_4 = param_3[1];
      *(undefined4 *)(iVar6 + 0x10) = 1;
      *puVar20 = 1;
      *param_5 = iVar6;
      return 0x62;
    }
    pbVar19 = pbVar14 + -1;
    if (uVar11 == 0) {
      if (pbVar19 != (byte *)0x0) {
        uVar11 = FUN_08024294(iVar6,pbVar19);
      }
    }
    else {
      uVar11 = 1;
    }
    if ((1 << ((uint)pbVar19 & 0x1f) & puVar20[(int)pbVar19 >> 5]) != 0) {
      uVar11 = uVar11 | 2;
    }
    FUN_08023180(iVar6,pbVar14);
    iVar5 = param_3[1];
    pbVar18 = pbVar18 + -(int)pbVar14;
    uVar22 = 2;
  }
  else {
    uVar22 = 1;
  }
  if (uVar11 == 0) goto LAB_080235d8;
  iVar16 = param_3[3];
  if (iVar16 != 2) {
    uVar8 = param_6;
    if (iVar16 == 3) goto joined_r0x0802356a;
    if ((iVar16 == 1) && ((uVar11 & 2) != 0)) {
      uVar8 = (uVar11 | *puVar20) & 1;
      goto joined_r0x0802356a;
    }
LAB_0802356c:
    uVar22 = uVar22 | 0x10;
    goto LAB_080235d8;
  }
  param_6 = 1 - param_6;
  uVar8 = param_6;
joined_r0x0802356a:
  if (uVar8 == 0) goto LAB_0802356c;
  iVar16 = *(int *)(iVar6 + 0x10);
  piVar12 = (int *)(iVar6 + 0x14);
  do {
    piVar13 = piVar12 + 1;
    if (*piVar12 != -1) {
      *piVar12 = *piVar12 + 1;
      goto LAB_080235ae;
    }
    *piVar12 = 0;
    piVar12 = piVar13;
  } while (piVar13 < (int *)(iVar6 + 0x14) + iVar16);
  if (*(int *)(iVar6 + 8) <= iVar16) {
    iVar7 = FUN_08023970(param_1,*(int *)(iVar6 + 4) + 1);
    if (iVar7 == 0) {
      uVar10 = 0x84;
      pbVar19 = (byte *)0x0;
      uVar9 = DAT_08023668;
      goto LAB_08023392;
    }
    FUN_080230b2(iVar7 + 0xc,iVar6 + 0xc,(*(int *)(iVar6 + 0x10) + 2) * 4);
    FUN_080239f0(param_1,iVar6);
  }
  iVar6 = *(int *)(iVar7 + 0x10);
  *(int *)(iVar7 + 0x10) = iVar6 + 1;
  *(undefined4 *)(iVar7 + iVar6 * 4 + 0x14) = 1;
LAB_080235ae:
  if (uVar22 == 2) {
    uVar22 = 2;
    if (((byte *)(*param_3 + -1) != pbVar18) ||
       ((1 << ((uint)pbVar18 & 0x1f) & *(uint *)(iVar7 + 0x14 + ((int)pbVar18 >> 5) * 4)) == 0))
    goto LAB_080235d4;
  }
  else if ((iVar16 < *(int *)(iVar7 + 0x10)) ||
          ((((uint)pbVar18 & 0x1f) != 0 &&
           (iVar6 = FUN_08023b54(*(undefined4 *)(iVar7 + 0x14 + iVar16 * 4 + -4)),
           iVar6 < (int)(0x20 - ((uint)pbVar18 & 0x1f)))))) {
    FUN_08023180(iVar7,1);
    iVar5 = iVar5 + 1;
    if (param_3[2] < iVar5) {
LAB_0802340a:
      FUN_080239f0(param_1,iVar7);
      *param_5 = 0;
      return 0xa3;
    }
  }
  uVar22 = 1;
LAB_080235d4:
  uVar22 = uVar22 | 0x20;
LAB_080235d8:
  *param_5 = iVar7;
  *param_4 = iVar5;
  return uVar22;
}


