
/* WARNING: Removing unreachable block (ram,0x08021e86) */

undefined8 FUN_08021c00(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  if (param_4 == 0) {
    iVar6 = LZCOUNT(param_3);
    if (param_2 < param_3) {
      if (iVar6 != 0) {
        param_3 = param_3 << iVar6;
        param_2 = param_2 << iVar6 | param_1 >> (0x20U - iVar6 & 0xff);
        param_1 = param_1 << iVar6;
      }
      uVar9 = param_3 >> 0x10;
      uVar8 = param_2 / uVar9;
      uVar7 = param_1 >> 0x10 | (param_2 - uVar9 * uVar8) * 0x10000;
      uVar4 = uVar8 * (param_3 & 0xffff);
      uVar2 = uVar8;
      if (uVar7 < uVar4) {
        bVar11 = CARRY4(param_3,uVar7);
        uVar7 = param_3 + uVar7;
        uVar2 = uVar8 - 1;
        if ((!bVar11) && (uVar7 < uVar4)) {
          uVar2 = uVar8 - 2;
          uVar7 = uVar7 + param_3;
        }
      }
      uVar3 = (uVar7 - uVar4) / uVar9;
      uVar8 = param_1 & 0xffff | ((uVar7 - uVar4) - uVar9 * uVar3) * 0x10000;
      uVar7 = uVar3 * (param_3 & 0xffff);
      uVar4 = uVar3;
      if (uVar8 < uVar7) {
        bVar11 = CARRY4(param_3,uVar8);
        uVar8 = param_3 + uVar8;
        uVar4 = uVar3 - 1;
        if ((!bVar11) && (uVar8 < uVar7)) {
          uVar8 = uVar8 + param_3;
          uVar4 = uVar3 - 2;
        }
      }
      uVar8 = uVar8 - uVar7;
      uVar4 = uVar4 | uVar2 << 0x10;
      uVar2 = 0;
    }
    else {
      if (iVar6 == 0) {
        param_2 = param_2 - param_3;
        uVar10 = param_3 >> 0x10;
        uVar3 = param_3 & 0xffff;
        uVar2 = 1;
      }
      else {
        param_3 = param_3 << iVar6;
        uVar4 = param_2 >> (0x20U - iVar6 & 0xff);
        uVar9 = param_2 << iVar6 | param_1 >> (0x20U - iVar6 & 0xff);
        uVar10 = param_3 >> 0x10;
        param_1 = param_1 << iVar6;
        uVar3 = param_3 & 0xffff;
        uVar2 = uVar4 / uVar10;
        uVar8 = uVar9 >> 0x10 | (uVar4 - uVar10 * uVar2) * 0x10000;
        uVar7 = uVar2 * uVar3;
        uVar4 = uVar2;
        if (uVar8 < uVar7) {
          bVar11 = CARRY4(param_3,uVar8);
          uVar8 = param_3 + uVar8;
          uVar4 = uVar2 - 1;
          if ((!bVar11) && (uVar8 < uVar7)) {
            uVar4 = uVar2 - 2;
            uVar8 = uVar8 + param_3;
          }
        }
        uVar5 = (uVar8 - uVar7) / uVar10;
        param_2 = uVar9 & 0xffff | ((uVar8 - uVar7) - uVar10 * uVar5) * 0x10000;
        uVar7 = uVar5 * uVar3;
        uVar2 = uVar5;
        if (param_2 < uVar7) {
          bVar11 = CARRY4(param_3,param_2);
          param_2 = param_3 + param_2;
          uVar2 = uVar5 - 1;
          if ((!bVar11) && (param_2 < uVar7)) {
            uVar2 = uVar5 - 2;
            param_2 = param_2 + param_3;
          }
        }
        param_2 = param_2 - uVar7;
        uVar2 = uVar2 | uVar4 << 0x10;
      }
      uVar9 = param_2 / uVar10;
      uVar8 = param_1 >> 0x10 | (param_2 - uVar10 * uVar9) * 0x10000;
      uVar4 = uVar3 * uVar9;
      uVar7 = uVar9;
      if (uVar8 < uVar4) {
        bVar11 = CARRY4(param_3,uVar8);
        uVar8 = param_3 + uVar8;
        uVar7 = uVar9 - 1;
        if ((!bVar11) && (uVar8 < uVar4)) {
          uVar7 = uVar9 - 2;
          uVar8 = uVar8 + param_3;
        }
      }
      uVar9 = (uVar8 - uVar4) / uVar10;
      uVar8 = param_1 & 0xffff | ((uVar8 - uVar4) - uVar10 * uVar9) * 0x10000;
      uVar3 = uVar9 * uVar3;
      uVar4 = uVar9;
      if (uVar8 < uVar3) {
        bVar11 = CARRY4(param_3,uVar8);
        uVar8 = param_3 + uVar8;
        uVar4 = uVar9 - 1;
        if ((!bVar11) && (uVar8 < uVar3)) {
          uVar8 = uVar8 + param_3;
          uVar4 = uVar9 - 2;
        }
      }
      uVar8 = uVar8 - uVar3;
      uVar4 = uVar4 | uVar7 << 0x10;
    }
    if (param_5 != (uint *)0x0) {
      *param_5 = uVar8 >> iVar6;
      param_5[1] = 0;
    }
  }
  else if (param_2 < param_4) {
    if (param_5 != (uint *)0x0) {
      *param_5 = param_1;
      param_5[1] = param_2;
    }
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    iVar6 = LZCOUNT(param_4);
    if (iVar6 == 0) {
      if ((param_4 < param_2) || (param_3 <= param_1)) {
        bVar11 = param_1 < param_3;
        param_1 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)bVar11;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      uVar2 = 0;
      if (param_5 != (uint *)0x0) {
        *param_5 = param_1;
        param_5[1] = param_2;
      }
    }
    else {
      uVar9 = 0x20 - iVar6;
      uVar3 = param_3 >> (uVar9 & 0xff) | param_4 << iVar6;
      uVar7 = param_2 << iVar6 | param_1 >> (uVar9 & 0xff);
      param_2 = param_2 >> (uVar9 & 0xff);
      param_1 = param_1 << iVar6;
      uVar4 = uVar3 >> 0x10;
      uVar5 = param_2 / uVar4;
      uVar8 = uVar7 >> 0x10 | (param_2 - uVar4 * uVar5) * 0x10000;
      uVar10 = uVar5 * (uVar3 & 0xffff);
      uVar2 = uVar5;
      if (uVar8 < uVar10) {
        bVar11 = CARRY4(uVar3,uVar8);
        uVar8 = uVar3 + uVar8;
        uVar2 = uVar5 - 1;
        if ((!bVar11) && (uVar8 < uVar10)) {
          uVar2 = uVar5 - 2;
          uVar8 = uVar8 + uVar3;
        }
      }
      uVar5 = (uVar8 - uVar10) / uVar4;
      uVar7 = uVar7 & 0xffff | ((uVar8 - uVar10) - uVar4 * uVar5) * 0x10000;
      uVar8 = uVar5 * (uVar3 & 0xffff);
      uVar4 = uVar5;
      if (uVar7 < uVar8) {
        bVar11 = CARRY4(uVar3,uVar7);
        uVar7 = uVar3 + uVar7;
        uVar4 = uVar5 - 1;
        if ((!bVar11) && (uVar7 < uVar8)) {
          uVar4 = uVar5 - 2;
          uVar7 = uVar7 + uVar3;
        }
      }
      uVar4 = uVar4 | uVar2 << 0x10;
      uVar1 = (ulonglong)uVar4 * (ulonglong)(param_3 << iVar6);
      if (CONCAT44(uVar7 - uVar8,param_1) < uVar1) {
        uVar1 = uVar1 - CONCAT44(uVar3,param_3 << iVar6);
        uVar4 = uVar4 - 1;
      }
      if (param_5 != (uint *)0x0) {
        uVar2 = ((uVar7 - uVar8) - (int)(uVar1 >> 0x20)) - (uint)(param_1 < (uint)uVar1);
        *param_5 = uVar2 << (uVar9 & 0xff) | param_1 - (uint)uVar1 >> iVar6;
        param_5[1] = uVar2 >> iVar6;
      }
      uVar2 = 0;
    }
  }
  return CONCAT44(uVar2,uVar4);
}


