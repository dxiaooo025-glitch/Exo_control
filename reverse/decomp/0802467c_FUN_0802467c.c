
code * FUN_0802467c(undefined4 param_1,uint *param_2,undefined4 param_3,code *param_4,int *param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  code *local_24;
  
  iVar3 = DAT_080248cc;
  bVar2 = (byte)param_2[6];
  puVar6 = (undefined1 *)((int)param_2 + 0x43);
  local_24 = param_4;
  if (0x78 < bVar2) {
switchD_080246b8_caseD_65:
    *(byte *)((int)param_2 + 0x42) = bVar2;
LAB_08024724:
    puVar6 = (undefined1 *)((int)param_2 + 0x42);
    uVar8 = 1;
LAB_0802487a:
    param_2[4] = uVar8;
    *(undefined1 *)((int)param_2 + 0x43) = 0;
    goto LAB_08024790;
  }
  puVar12 = puVar6;
  if (bVar2 < 99) {
    if (bVar2 == 0) goto LAB_08024858;
    if (bVar2 != 0x58) goto switchD_080246b8_caseD_65;
    uVar14 = 0x58;
  }
  else {
    switch(bVar2) {
    case 99:
      uVar7 = *(undefined4 *)*param_5;
      *param_5 = (int)((undefined4 *)*param_5 + 1);
      *(char *)((int)param_2 + 0x42) = (char)uVar7;
      goto LAB_08024724;
    case 100:
    case 0x69:
      puVar10 = (uint *)*param_5;
      uVar9 = *param_2;
      *param_5 = (int)(puVar10 + 1);
      if (((int)(uVar9 << 0x18) < 0) || (-1 < (int)(uVar9 << 0x19))) {
        uVar8 = *puVar10;
      }
      else {
        uVar8 = (uint)(short)*puVar10;
      }
      if (-1 < (int)uVar8) {
        uVar9 = 10;
        iVar3 = DAT_080248cc;
        goto LAB_080247da;
      }
      *(undefined1 *)((int)param_2 + 0x43) = 0x2d;
      param_2[2] = param_2[1];
      if (-1 < (int)param_2[1]) {
        *param_2 = uVar9 & 0xfffffffb;
      }
      uVar8 = -uVar8;
      uVar9 = 10;
      iVar3 = DAT_080248cc;
      goto LAB_08024758;
    default:
      goto switchD_080246b8_caseD_65;
    case 0x6e:
      puVar11 = (undefined4 *)*param_5;
      uVar9 = *param_2;
      uVar8 = param_2[5];
      *param_5 = (int)(puVar11 + 1);
      puVar10 = (uint *)*puVar11;
      if (((int)(uVar9 << 0x18) < 0) || (-1 < (int)(uVar9 << 0x19))) {
        *puVar10 = uVar8;
      }
      else {
        *(short *)puVar10 = (short)uVar8;
      }
LAB_08024858:
      param_2[4] = 0;
      goto LAB_08024790;
    case 0x6f:
    case 0x75:
      uVar8 = *(uint *)*param_5;
      if ((-1 < (int)(*param_2 << 0x18)) && ((int)(*param_2 << 0x19) < 0)) {
        uVar8 = uVar8 & 0xffff;
      }
      *param_5 = (int)((uint *)*param_5 + 1);
      if (bVar2 == 0x6f) {
        uVar9 = 8;
      }
      else {
        uVar9 = 10;
      }
      goto LAB_080247d4;
    case 0x70:
      *param_2 = *param_2 | 0x20;
    case 0x78:
      uVar14 = 0x78;
      iVar3 = DAT_080248d0;
      break;
    case 0x73:
      puVar11 = (undefined4 *)*param_5;
      *param_5 = (int)(puVar11 + 1);
      puVar6 = (undefined1 *)*puVar11;
      iVar3 = FUN_08000940(puVar6,0,param_2[1],puVar11,param_1,param_2,param_3);
      if (iVar3 != 0) {
        param_2[1] = iVar3 - (int)puVar6;
      }
      uVar8 = param_2[1];
      goto LAB_0802487a;
    }
  }
  *(undefined1 *)((int)param_2 + 0x45) = uVar14;
  uVar9 = *param_2;
  uVar8 = *(uint *)*param_5;
  if ((-1 < (int)(uVar9 << 0x18)) && ((int)(uVar9 << 0x19) < 0)) {
    uVar8 = uVar8 & 0xffff;
  }
  *param_5 = (int)((uint *)*param_5 + 1);
  if ((int)(uVar9 << 0x1f) < 0) {
    *param_2 = uVar9 | 0x20;
  }
  if (uVar8 == 0) {
    *param_2 = *param_2 & 0xffffffdf;
  }
  uVar9 = 0x10;
LAB_080247d4:
  *(undefined1 *)((int)param_2 + 0x43) = 0;
LAB_080247da:
  uVar13 = param_2[1];
  param_2[2] = uVar13;
  if ((int)uVar13 < 0) {
LAB_08024758:
    do {
      puVar12 = puVar12 + -1;
      *puVar12 = *(undefined1 *)(iVar3 + (uVar8 - uVar9 * (uVar8 / uVar9)));
      bVar1 = uVar9 <= uVar8;
      uVar8 = uVar8 / uVar9;
    } while (bVar1);
  }
  else {
    *param_2 = *param_2 & 0xfffffffb;
    if ((uVar8 != 0) || (uVar13 != 0)) goto LAB_08024758;
  }
  if (((uVar9 == 8) && ((int)(*param_2 << 0x1f) < 0)) && ((int)param_2[1] <= (int)param_2[4])) {
    puVar12[-1] = 0x30;
    puVar12 = puVar12 + -1;
  }
  param_2[4] = (int)puVar6 - (int)puVar12;
  puVar6 = puVar12;
LAB_08024790:
  iVar3 = FUN_080245a0(param_1,param_2,&local_24,param_3,param_4);
  if ((iVar3 == -1) || (iVar3 = (*param_4)(param_1,param_3,puVar6,param_2[4]), iVar3 == -1)) {
LAB_080247a4:
    pcVar4 = (code *)0xffffffff;
  }
  else {
    if ((int)(*param_2 << 0x1e) < 0) {
      for (iVar3 = 0; iVar3 < (int)(param_2[3] - (int)local_24); iVar3 = iVar3 + 1) {
        iVar5 = (*param_4)(param_1,param_3,(int)param_2 + 0x19,1);
        if (iVar5 == -1) goto LAB_080247a4;
      }
    }
    pcVar4 = (code *)param_2[3];
    if ((int)param_2[3] < (int)local_24) {
      pcVar4 = local_24;
    }
  }
  return pcVar4;
}


