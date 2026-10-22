
undefined1 FUN_080044c4(uint *param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    uVar1 = 1;
  }
  else {
    if (((*DAT_08004704 & 0xf) < param_2) &&
       (*DAT_08004704 = param_2 | *DAT_08004704 & 0xfffffff0, param_2 != (*DAT_08004704 & 0xf))) {
      return 1;
    }
    if (((*param_1 & 4) != 0) && ((DAT_08004708[6] & 0x70) < param_1[4])) {
      DAT_08004708[6] = param_1[4] | DAT_08004708[6] & 0xffffff8f;
    }
    if (((*param_1 & 8) != 0) && ((DAT_08004708[7] & 0x70) < param_1[5])) {
      DAT_08004708[7] = param_1[5] | DAT_08004708[7] & 0xffffff8f;
    }
    if (((*param_1 & 0x10) != 0) && ((DAT_08004708[7] & 0x700) < param_1[6])) {
      DAT_08004708[7] = param_1[6] | DAT_08004708[7] & 0xfffff8ff;
    }
    if (((*param_1 & 0x20) != 0) && ((DAT_08004708[8] & 0x70) < param_1[7])) {
      DAT_08004708[8] = param_1[7] | DAT_08004708[8] & 0xffffff8f;
    }
    if (((*param_1 & 2) != 0) && ((DAT_08004708[6] & 0xf) < param_1[3])) {
      DAT_08004708[6] = param_1[3] | DAT_08004708[6] & 0xfffffff0;
    }
    if ((*param_1 & 1) == 0) {
LAB_080046a6:
      if (((*param_1 & 2) != 0) && (param_1[3] < (DAT_08004708[6] & 0xf))) {
        DAT_08004708[6] = param_1[3] | DAT_08004708[6] & 0xfffffff0;
      }
      if ((param_2 < (*DAT_08004704 & 0xf)) &&
         (*DAT_08004704 = param_2 | *DAT_08004704 & 0xfffffff0, param_2 != (*DAT_08004704 & 0xf))) {
        return 1;
      }
      if (((*param_1 & 4) != 0) && (param_1[4] < (*(uint *)(DAT_0800481c + 0x18) & 0x70))) {
        *(uint *)(DAT_0800481c + 0x18) = param_1[4] | *(uint *)(DAT_0800481c + 0x18) & 0xffffff8f;
      }
      if (((*param_1 & 8) != 0) && (param_1[5] < (*(uint *)(DAT_0800481c + 0x1c) & 0x70))) {
        *(uint *)(DAT_0800481c + 0x1c) = param_1[5] | *(uint *)(DAT_0800481c + 0x1c) & 0xffffff8f;
      }
      if (((*param_1 & 0x10) != 0) && (param_1[6] < (*(uint *)(DAT_0800481c + 0x1c) & 0x700))) {
        *(uint *)(DAT_0800481c + 0x1c) = param_1[6] | *(uint *)(DAT_0800481c + 0x1c) & 0xfffff8ff;
      }
      if (((*param_1 & 0x20) != 0) && (param_1[7] < (*(uint *)(DAT_0800481c + 0x20) & 0x70))) {
        *(uint *)(DAT_0800481c + 0x20) = param_1[7] | *(uint *)(DAT_0800481c + 0x20) & 0xffffff8f;
      }
      uVar4 = FUN_08004830();
      uVar4 = uVar4 >> (*(byte *)(DAT_08004820 + (*(uint *)(DAT_0800481c + 0x18) >> 8 & 0xf)) & 0x1f
                       );
      *DAT_08004824 =
           uVar4 >> (*(byte *)(DAT_08004820 + (*(uint *)(DAT_0800481c + 0x18) & 0xf)) & 0x1f);
      *DAT_08004828 = uVar4;
      uVar1 = FUN_08012998(*DAT_0800482c);
    }
    else {
      DAT_08004708[6] = param_1[2] | DAT_08004708[6] & 0xfffff0ff;
      if (param_1[1] == 2) {
        if ((*DAT_08004708 & 0x20000) == 0) {
          return 1;
        }
      }
      else if (param_1[1] == 3) {
        if ((*DAT_08004708 & 0x2000000) == 0) {
          return 1;
        }
      }
      else if (param_1[1] == 1) {
        if ((*DAT_08004708 & 0x100) == 0) {
          return 1;
        }
      }
      else if ((*DAT_08004708 & 4) == 0) {
        return 1;
      }
      DAT_08004708[4] = param_1[1] | DAT_08004708[4] & 0xfffffff8;
      iVar2 = FUN_080092a0();
      do {
        if ((DAT_08004708[4] & 0x38) == param_1[1] * 8) goto LAB_080046a6;
        iVar3 = FUN_080092a0();
      } while ((uint)(iVar3 - iVar2) < 0x1389);
      uVar1 = 3;
    }
  }
  return uVar1;
}


