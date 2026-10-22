
undefined4 FUN_0800b388(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    param_1[10] = 0;
    if ((((*param_1 != DAT_0800b5c4) && (*param_1 != DAT_0800b5c8)) && (*param_1 != DAT_0800b5cc))
       && (0xf < (uint)param_1[3])) {
      return 1;
    }
    uVar1 = FUN_0800bde0(param_1);
    if ((((*param_1 == DAT_0800b5c4) || (*param_1 == DAT_0800b5c8)) ||
        ((*param_1 == DAT_0800b5cc || (uVar1 < 9)))) &&
       ((((*param_1 != DAT_0800b5c4 && (*param_1 != DAT_0800b5c8)) && (*param_1 != DAT_0800b5cc)) ||
        (uVar1 < 0x11)))) {
      if (*(char *)((int)param_1 + 0x81) == '\0') {
        *(undefined1 *)(param_1 + 0x20) = 0;
        FUN_08012360(param_1);
      }
      *(undefined1 *)((int)param_1 + 0x81) = 2;
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      uVar1 = *(uint *)(*param_1 + 8);
      if ((param_1[6] == 0x4000000) &&
         (((param_1[1] == 0x400000 && (param_1[0xe] == 0)) ||
          ((param_1[1] == 0 && (param_1[0xe] == 0x10000000)))))) {
        *(uint *)*param_1 = *(uint *)*param_1 | 0x1000;
      }
      if (((param_1[1] & 0x400000U) == 0) || ((uint)param_1[3] < 7)) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffeff;
      }
      else {
        *(uint *)*param_1 = param_1[0x14] | *(uint *)*param_1 & 0xfffffeff;
      }
      *(uint *)(*param_1 + 8) =
           param_1[3] | param_1[7] | param_1[10] | uVar1 & 0x1f0000 | param_1[0xf];
      *(int *)(*param_1 + 0xc) =
           param_1[0x16] |
           param_1[0xd] | param_1[9] | param_1[0xe] | param_1[6] | param_1[4] | param_1[5] |
           param_1[8] | param_1[1] | param_1[0x13] | param_1[2] | param_1[0x12];
      if (param_1[1] == 0) {
        *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffe7ff | 0x800;
        *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xfffff9ff | 0x400;
      }
      *(uint *)(*param_1 + 0x50) = *(uint *)(*param_1 + 0x50) & 0xfffffffe;
      if ((param_1[1] & 0x400000U) != 0) {
        *(uint *)(*param_1 + 0xc) = param_1[0x15] | *(uint *)(*param_1 + 0xc) & 0x7fffffff;
      }
      param_1[0x21] = 0;
      *(undefined1 *)((int)param_1 + 0x81) = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


