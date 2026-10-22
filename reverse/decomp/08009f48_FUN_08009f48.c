
undefined1 FUN_08009f48(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint auStack_5c [20];
  int local_c;
  
  FUN_080230b2(auStack_5c,DAT_0800a164,0x4c);
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (*param_1 == DAT_0800a168) {
    param_1[1] = *param_1 + 0x100;
  }
  if ((char)param_1[0x26] == '\0') {
    *(undefined1 *)((int)param_1 + 0x99) = 0;
    FUN_08012048(param_1);
  }
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffffef;
  local_c = FUN_080092a0();
  do {
    if ((*(uint *)(*param_1 + 0x18) & 8) != 8) {
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
      local_c = FUN_080092a0();
      do {
        if ((*(uint *)(*param_1 + 0x18) & 1) != 0) {
          *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 2;
          if ((char)param_1[4] == '\x01') {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffffbf;
          }
          else {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x40;
          }
          if (*(char *)((int)param_1 + 0x11) == '\x01') {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x4000;
          }
          else {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffbfff;
          }
          if (*(char *)((int)param_1 + 0x12) == '\x01') {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffefff;
          }
          else {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x1000;
          }
          *(uint *)(*param_1 + 0x18) = param_1[2] | *(uint *)(*param_1 + 0x18) & 0xfffffcff;
          *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffff5b;
          *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) & 0xffffffef;
          if (param_1[3] == 1) {
            *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 4;
          }
          else if (param_1[3] != 0) {
            if (param_1[3] == 2) {
              *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x20;
            }
            else {
              *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x80;
              *(uint *)(*param_1 + 0x10) = *(uint *)(*param_1 + 0x10) | 0x10;
              if (param_1[3] == 3) {
                *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x20;
              }
            }
          }
          *(uint *)(*param_1 + 0x1c) =
               (param_1[5] + -1) * 0x10000 |
               (param_1[6] + -1) * 0x2000000 | (param_1[7] + -1) * 0x100 | param_1[8] - 1U;
          if (param_1[2] == 0x300) {
            *(uint *)(*param_1 + 0xc) =
                 (param_1[9] + -1) * 0x10000 |
                 param_1[10] - 1U | (param_1[0xb] + -1) * 0x100 | (param_1[0xc] + -1) * 0x10;
          }
          if (param_1[0x18] != 0) {
            *(uint *)(*param_1 + 0xc0) = param_1[0x19] | *(uint *)(*param_1 + 0xc0);
          }
          if (param_1[0x18] + param_1[0x17] != 0) {
            *(uint *)(*param_1 + 200) =
                 auStack_5c[param_1[0x1a]] | *(uint *)(*param_1 + 200) & 0xfffffff8;
          }
          if (param_1[0x10] != 0) {
            *(uint *)(*param_1 + 0xbc) =
                 auStack_5c[param_1[0x11]] | *(uint *)(*param_1 + 0xbc) & 0xfffffff8;
          }
          if (param_1[0x12] != 0) {
            *(uint *)(*param_1 + 0xbc) =
                 auStack_5c[param_1[0x13]] << 4 | *(uint *)(*param_1 + 0xbc) & 0xffffff8f;
          }
          if (param_1[0x14] != 0) {
            *(uint *)(*param_1 + 0xbc) =
                 auStack_5c[param_1[0x15]] << 8 | *(uint *)(*param_1 + 0xbc) & 0xfffff8ff;
          }
          if (*param_1 == DAT_0800a300) {
            *(uint *)(param_1[1] + 8) = *(uint *)(param_1[1] + 8) & 0xfffffffc;
          }
          param_1[0x25] = 0;
          param_1[0x27] = 0;
          *(undefined1 *)(param_1 + 0x26) = 1;
          uVar1 = FUN_0800af80(param_1);
          return uVar1;
        }
        iVar2 = FUN_080092a0();
      } while ((uint)(iVar2 - local_c) < 0xb);
      param_1[0x27] = param_1[0x27] | 1;
      *(undefined1 *)(param_1 + 0x26) = 3;
      return 1;
    }
    iVar2 = FUN_080092a0();
  } while ((uint)(iVar2 - local_c) < 0xb);
  param_1[0x27] = param_1[0x27] | 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  return 1;
}


