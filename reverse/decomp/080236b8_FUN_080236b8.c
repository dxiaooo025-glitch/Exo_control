
undefined4 FUN_080236b8(int *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar8;
  uint *puVar7;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int local_38;
  
  iVar4 = *param_1;
  puVar9 = param_3 + ((int)*param_2 >> 5);
  uVar6 = *param_2 & 0x1f;
  if (uVar6 != 0) {
    puVar9 = puVar9 + 1;
  }
  iVar11 = 0;
  puVar12 = puVar9 + -1;
  puVar9[-1] = 0;
  local_38 = 0;
  iVar13 = 0;
  puVar10 = puVar12;
  puVar5 = puVar12;
  while( true ) {
    bVar1 = *(byte *)(iVar4 + 1);
    if (bVar1 == 0) break;
    uVar2 = FUN_08023222(bVar1);
    if (uVar2 == 0) {
      if (0x20 < bVar1) {
        if (bVar1 != 0x29) goto LAB_080237ea;
        *param_1 = iVar4 + 2;
        break;
      }
      if (local_38 < iVar13) {
        if ((puVar10 < puVar5) && (iVar11 < 8)) {
          FUN_0802366c(puVar10,puVar5,iVar11);
        }
        if (param_3 < puVar10) {
          puVar5 = puVar10 + -1;
          puVar10[-1] = 0;
          iVar11 = 0;
          puVar10 = puVar5;
          local_38 = iVar13;
        }
        else {
          iVar11 = 8;
        }
      }
    }
    else {
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + 1;
      if (8 < iVar11) {
        if (puVar10 <= param_3) goto LAB_08023732;
        puVar10[-1] = 0;
        iVar11 = 1;
        puVar10 = puVar10 + -1;
      }
      *puVar10 = uVar2 & 0xf | *puVar10 << 4;
    }
LAB_08023732:
    iVar4 = iVar4 + 1;
  }
  if (iVar13 == 0) {
LAB_080237ea:
    uVar3 = 4;
  }
  else {
    if ((puVar10 < puVar5) && (iVar11 < 8)) {
      FUN_0802366c(puVar10,puVar5,iVar11);
    }
    if (param_3 < puVar10) {
      puVar5 = param_3 + -1;
      puVar7 = puVar10;
      do {
        puVar8 = puVar7 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar7;
        puVar7 = puVar8;
      } while (puVar8 <= puVar12);
      iVar4 = ((int)puVar12 - (int)puVar10 & 0xfffffffcU) + 4;
      if ((int)puVar9 - 3U < (int)puVar10 + 1U) {
        iVar4 = 4;
      }
      puVar9 = (uint *)(iVar4 + (int)param_3);
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = 0;
        puVar9 = puVar10;
      } while (puVar10 <= puVar12);
    }
    else if (uVar6 != 0) {
      puVar9[-1] = puVar9[-1] & 0xffffffffU >> (0x20 - uVar6 & 0xff);
    }
    for (; *puVar12 == 0; puVar12 = puVar12 + -1) {
      if (puVar12 == param_3) {
        *puVar12 = 1;
        break;
      }
    }
    uVar3 = 5;
  }
  return uVar3;
}


