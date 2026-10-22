
undefined4 FUN_08003d10(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (uint *)0x0) {
    return 1;
  }
  if ((*param_1 & 1) != 0) {
    if (((DAT_08003f54[4] & 0x38) == 0x10) ||
       (((DAT_08003f54[4] & 0x38) == 0x18 && ((DAT_08003f54[10] & 3) == 2)))) {
      if (((*DAT_08003f54 & 0x20000) != 0) && (param_1[1] == 0)) {
        return 1;
      }
    }
    else {
      if (param_1[1] == 0x10000) {
        *DAT_08003f54 = *DAT_08003f54 | 0x10000;
      }
      else if (param_1[1] == 0) {
        *DAT_08003f54 = *DAT_08003f54 & 0xfffeffff;
        *DAT_08003f54 = *DAT_08003f54 & 0xfffbffff;
      }
      else if (param_1[1] == 0x50000) {
        *DAT_08003f54 = *DAT_08003f54 | 0x40000;
        *DAT_08003f54 = *DAT_08003f54 | 0x10000;
      }
      else {
        *DAT_08003f54 = *DAT_08003f54 & 0xfffeffff;
        *DAT_08003f54 = *DAT_08003f54 & 0xfffbffff;
      }
      if (param_1[1] == 0) {
        iVar1 = FUN_080092a0();
        while ((*DAT_08003f54 & 0x20000) != 0) {
          iVar2 = FUN_080092a0();
          if (100 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
      }
      else {
        iVar1 = FUN_080092a0();
        while ((*DAT_08003f54 & 0x20000) == 0) {
          iVar2 = FUN_080092a0();
          if (100 < (uint)(iVar2 - iVar1)) {
            return 3;
          }
        }
      }
    }
  }
  if ((*param_1 & 2) != 0) {
    if (((DAT_08003f54[4] & 0x38) == 0) ||
       (((DAT_08003f54[4] & 0x38) == 0x18 && ((DAT_08003f54[10] & 3) == 0)))) {
      if (((*DAT_08003f54 & 4) != 0) && (param_1[3] == 0)) {
        return 1;
      }
      *DAT_08003f54 = param_1[3] | *DAT_08003f54 & 0xffffffe6;
      iVar1 = FUN_080092a0();
      while ((*DAT_08003f54 & 4) == 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      DAT_08003f54[1] = param_1[4] << 0x18 | DAT_08003f54[1] & 0x80ffffff;
    }
    else if (param_1[3] == 0) {
      *DAT_08003f54 = *DAT_08003f54 & 0xfffffffe;
      iVar1 = FUN_080092a0();
      while ((*DAT_080041b4 & 4) != 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      *DAT_08003f54 = param_1[3] | *DAT_08003f54 & 0xffffffe6;
      iVar1 = FUN_080092a0();
      while ((*DAT_08003f54 & 4) == 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      DAT_08003f54[1] = param_1[4] << 0x18 | DAT_08003f54[1] & 0x80ffffff;
    }
  }
  if ((*param_1 & 0x10) != 0) {
    if (((DAT_080041b4[4] & 0x38) == 8) ||
       (((DAT_080041b4[4] & 0x38) == 0x18 && ((DAT_080041b4[10] & 3) == 1)))) {
      if (((*DAT_080041b4 & 0x100) != 0) && (param_1[7] != 0x80)) {
        return 1;
      }
      DAT_080041b4[3] = param_1[8] << 0x18 | DAT_080041b4[3] & 0xc0ffffff;
    }
    else if (param_1[7] == 0) {
      *DAT_080041b4 = *DAT_080041b4 & 0xffffff7f;
      iVar1 = FUN_080092a0();
      while ((*DAT_080041b4 & 0x100) != 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      *DAT_080041b4 = *DAT_080041b4 | 0x80;
      iVar1 = FUN_080092a0();
      while ((*DAT_080041b4 & 0x100) == 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      DAT_080041b4[3] = param_1[8] << 0x18 | DAT_080041b4[3] & 0xc0ffffff;
    }
  }
  if ((*param_1 & 8) != 0) {
    if (param_1[5] == 0) {
      DAT_080041b4[0x1d] = DAT_080041b4[0x1d] & 0xfffffffe;
      iVar1 = FUN_080092a0();
      while ((DAT_080041b4[0x1d] & 2) != 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      DAT_080041b4[0x1d] = DAT_080041b4[0x1d] | 1;
      iVar1 = FUN_080092a0();
      while ((DAT_080041b4[0x1d] & 2) == 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  if ((*param_1 & 0x20) != 0) {
    if (param_1[6] == 0) {
      *DAT_080041b4 = *DAT_080041b4 & 0xffffefff;
      iVar1 = FUN_080092a0();
      while ((*DAT_080041b4 & 0x2000) != 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      *DAT_080041b4 = *DAT_080041b4 | 0x1000;
      iVar1 = FUN_080092a0();
      while ((*DAT_080041b4 & 0x2000) == 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  if ((*param_1 & 4) != 0) {
    *DAT_080041b8 = *DAT_080041b8 | 0x100;
    iVar1 = FUN_080092a0();
    while ((*DAT_080041b8 & 0x100) == 0) {
      iVar2 = FUN_080092a0();
      if (100 < (uint)(iVar2 - iVar1)) {
        return 3;
      }
    }
    if (param_1[2] == 1) {
      DAT_080041b4[0x1c] = DAT_080041b4[0x1c] | 1;
    }
    else if (param_1[2] == 0) {
      DAT_080041b4[0x1c] = DAT_080041b4[0x1c] & 0xfffffffe;
      DAT_080041b4[0x1c] = DAT_080041b4[0x1c] & 0xfffffffb;
    }
    else if (param_1[2] == 5) {
      DAT_080043d4[0x1c] = DAT_080043d4[0x1c] | 4;
      DAT_080043d4[0x1c] = DAT_080043d4[0x1c] | 1;
    }
    else {
      DAT_080043d4[0x1c] = DAT_080043d4[0x1c] & 0xfffffffe;
      DAT_080043d4[0x1c] = DAT_080043d4[0x1c] & 0xfffffffb;
    }
    if (param_1[2] == 0) {
      iVar1 = FUN_080092a0();
      while ((DAT_080043d4[0x1c] & 2) != 0) {
        iVar2 = FUN_080092a0();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      iVar1 = FUN_080092a0();
      while ((DAT_080043d4[0x1c] & 2) == 0) {
        iVar2 = FUN_080092a0();
        if (5000 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  if (param_1[9] != 0) {
    if ((DAT_080043d4[4] & 0x38) == 0x18) {
      uVar3 = *(uint *)(DAT_080044bc + 0x30);
      if ((((param_1[9] == 1) || ((*(uint *)(DAT_080044bc + 0x28) & 3) != param_1[10])) ||
          ((*(uint *)(DAT_080044bc + 0x28) >> 4 & 0x3f) != param_1[0xb])) ||
         ((((uVar3 & 0x1ff) != param_1[0xc] - 1 || ((uVar3 >> 9 & 0x7f) != param_1[0xd] - 1)) ||
          (((uVar3 >> 0x10 & 0x7f) != param_1[0xe] - 1 ||
           ((uVar3 >> 0x18 & 0x7f) != param_1[0xf] - 1)))))) {
        return 1;
      }
      if ((*(uint *)(DAT_080044bc + 0x34) >> 3 & 0x1fff) != param_1[0x12]) {
        *(uint *)(DAT_080044bc + 0x2c) = *(uint *)(DAT_080044bc + 0x2c) & 0xfffffffe;
        iVar1 = FUN_080092a0();
        do {
          iVar2 = FUN_080092a0();
        } while (iVar1 == iVar2);
        *(uint *)(DAT_080044bc + 0x34) =
             DAT_080044c0 & *(uint *)(DAT_080044bc + 0x34) | param_1[0x12] << 3;
        *(uint *)(DAT_080044bc + 0x2c) = *(uint *)(DAT_080044bc + 0x2c) | 1;
      }
    }
    else if (param_1[9] == 2) {
      *DAT_080043d4 = *DAT_080043d4 & 0xfeffffff;
      iVar1 = FUN_080092a0();
      while ((*DAT_080043d4 & 0x2000000) != 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
      DAT_080043d4[10] = DAT_080043d8 & DAT_080043d4[10] | param_1[0xb] << 4 | param_1[10];
      DAT_080043d4[0xc] =
           (param_1[0xf] - 1) * 0x1000000 & 0x7f000000 |
           param_1[0xc] - 1 & 0x1ff | (param_1[0xd] - 1) * 0x200 & 0xffff |
           (param_1[0xe] - 1) * 0x10000 & 0x7f0000;
      DAT_080043d4[0xb] = DAT_080043d4[0xb] & 0xfffffffe;
      DAT_080043d4[0xd] = DAT_080043dc & DAT_080043d4[0xd] | param_1[0x12] << 3;
      DAT_080043d4[0xb] = param_1[0x10] | DAT_080043d4[0xb] & 0xfffffff3;
      DAT_080043d4[0xb] = param_1[0x11] | DAT_080043d4[0xb] & 0xfffffffd;
      DAT_080043d4[0xb] = DAT_080043d4[0xb] | 0x10000;
      DAT_080043d4[0xb] = DAT_080043d4[0xb] | 0x20000;
      DAT_080043d4[0xb] = DAT_080043d4[0xb] | 0x40000;
      DAT_080043d4[0xb] = DAT_080043d4[0xb] | 1;
      *DAT_080043d4 = *DAT_080043d4 | 0x1000000;
      iVar1 = FUN_080092a0();
      while ((*DAT_080043d4 & 0x2000000) == 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
    else {
      *DAT_080043d4 = *DAT_080043d4 & 0xfeffffff;
      iVar1 = FUN_080092a0();
      while ((*DAT_080043d4 & 0x2000000) != 0) {
        iVar2 = FUN_080092a0();
        if (2 < (uint)(iVar2 - iVar1)) {
          return 3;
        }
      }
    }
  }
  return 0;
}


