
undefined4 FUN_0800302c(int param_1,byte *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*param_2;
  if (param_2[1] == 1) {
    if (*(int *)(param_2 + 0x10) == 0) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
           DAT_08003308 & *(uint *)(param_1 + uVar1 * 0x20 + 0x910);
      *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x910) | 0x80000;
      *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
           DAT_0800330c & *(uint *)(param_1 + uVar1 * 0x20 + 0x910);
    }
    else {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
           DAT_0800330c & *(uint *)(param_1 + uVar1 * 0x20 + 0x910);
      *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
           DAT_08003308 & *(uint *)(param_1 + uVar1 * 0x20 + 0x910);
      if (uVar1 == 0) {
        if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0x10)) {
          *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
        }
        *(uint *)(param_1 + 0x910) = *(uint *)(param_1 + 0x910) | 0x80000;
      }
      else {
        *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
             DAT_08003310 &
             ((*(int *)(param_2 + 8) + *(int *)(param_2 + 0x10)) - 1U) / *(uint *)(param_2 + 8) <<
             0x13 | *(uint *)(param_1 + uVar1 * 0x20 + 0x910);
      }
      *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
           *(uint *)(param_2 + 0x10) & 0x7ffff | *(uint *)(param_1 + uVar1 * 0x20 + 0x910);
      if (param_2[4] == 1) {
        *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
             *(uint *)(param_1 + uVar1 * 0x20 + 0x910) & 0x9fffffff;
        *(uint *)(param_1 + uVar1 * 0x20 + 0x910) =
             *(uint *)(param_1 + uVar1 * 0x20 + 0x910) | 0x20000000;
      }
    }
    if (param_3 == '\x01') {
      if (*(int *)(param_2 + 0x1c) != 0) {
        *(undefined4 *)(param_1 + uVar1 * 0x20 + 0x914) = *(undefined4 *)(param_2 + 0x1c);
      }
      if (param_2[4] == 1) {
        if ((*(uint *)(param_1 + 0x808) & 0x100) == 0) {
          *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
               *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x20000000;
        }
        else {
          *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
               *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x10000000;
        }
      }
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x84000000;
    }
    else {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x84000000;
      if (param_2[4] == 1) {
        if ((*(uint *)(param_1 + 0x808) & 0x100) == 0) {
          *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
               *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x20000000;
        }
        else {
          *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
               *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x10000000;
        }
        FUN_080036c0(param_1,*(undefined4 *)(param_2 + 0xc),*param_2,
                     *(uint *)(param_2 + 0x10) & 0xffff,param_3);
      }
      else if (*(int *)(param_2 + 0x10) != 0) {
        *(uint *)(param_1 + 0x834) = 1 << (*param_2 & 0xf) | *(uint *)(param_1 + 0x834);
      }
    }
  }
  else {
    *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) =
         DAT_08003560 & *(uint *)(param_1 + uVar1 * 0x20 + 0xb10);
    *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) =
         DAT_08003564 & *(uint *)(param_1 + uVar1 * 0x20 + 0xb10);
    if (uVar1 == 0) {
      if (*(int *)(param_2 + 0x10) != 0) {
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
      }
      *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_2 + 8);
      *(uint *)(param_1 + 0xb10) = *(uint *)(param_2 + 0x20) & 0x7ffff | *(uint *)(param_1 + 0xb10);
      *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x80000;
    }
    else if (*(int *)(param_2 + 0x10) == 0) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) =
           *(uint *)(param_2 + 8) & 0x7ffff | *(uint *)(param_1 + uVar1 * 0x20 + 0xb10);
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) | 0x80000;
    }
    else {
      uVar2 = ((*(int *)(param_2 + 8) + *(int *)(param_2 + 0x10)) - 1U) / *(uint *)(param_2 + 8);
      *(uint *)(param_2 + 0x20) = *(int *)(param_2 + 8) * (uVar2 & 0xffff);
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) =
           DAT_08003568 & uVar2 << 0x13 | *(uint *)(param_1 + uVar1 * 0x20 + 0xb10);
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb10) =
           *(uint *)(param_2 + 0x20) & 0x7ffff | *(uint *)(param_1 + uVar1 * 0x20 + 0xb10);
    }
    if ((param_3 == '\x01') && (*(int *)(param_2 + 0xc) != 0)) {
      *(undefined4 *)(param_1 + uVar1 * 0x20 + 0xb14) = *(undefined4 *)(param_2 + 0xc);
    }
    if (param_2[4] == 1) {
      if ((*(uint *)(param_1 + 0x808) & 0x100) == 0) {
        *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
             *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x20000000;
      }
      else {
        *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
             *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x10000000;
      }
    }
    *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
         *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x84000000;
  }
  return 0;
}


