
undefined4 FUN_0800a558(int *param_1,uint param_2,uint *param_3,int param_4)

{
  uint *puVar1;
  int local_14;
  uint local_10;
  uint *local_c;
  
  local_14 = 0;
  if ((char)param_1[0x26] != '\x02') {
    param_1[0x27] = param_1[0x27] | 8;
    return 1;
  }
  if (param_2 == 0x40) {
    if ((*(uint *)(*param_1 + 0xa0) & 0x7f0000) == 0) {
      param_1[0x27] = param_1[0x27] | 0x20;
      return 1;
    }
    if ((*(uint *)(*param_1 + 0xa4) & 0x7f) == 0) {
      param_1[0x27] = param_1[0x27] | 0x100;
      return 1;
    }
    if (((*(uint *)(*param_1 + 0xa4) >> 0x18 & 1) == 1) && (*(int *)(*param_1 + 0xa0) < 0)) {
      local_14 = 1;
    }
    local_14 = (*(uint *)(*param_1 + 0xa4) >> 8 & 0x3f) + local_14;
    local_c = (uint *)(local_14 * param_1[0x11] * 4 + param_1[0x1d]);
  }
  else if (param_2 == 0x41) {
    if ((*(uint *)(*param_1 + 0xb0) & 0x7f0000) == 0) {
      param_1[0x27] = param_1[0x27] | 0x20;
      return 1;
    }
    if ((*(uint *)(*param_1 + 0xb4) & 0x7f) == 0) {
      param_1[0x27] = param_1[0x27] | 0x100;
      return 1;
    }
    if (((*(uint *)(*param_1 + 0xb4) >> 0x18 & 1) == 1) && (*(int *)(*param_1 + 0xb0) < 0)) {
      local_14 = 1;
    }
    local_14 = (*(uint *)(*param_1 + 0xb4) >> 8 & 0x3f) + local_14;
    local_c = (uint *)(local_14 * param_1[0x13] * 4 + param_1[0x1e]);
  }
  else {
    if ((uint)param_1[0x14] <= param_2) {
      param_1[0x27] = param_1[0x27] | 0x20;
      return 1;
    }
    local_c = (uint *)(param_2 * param_1[0x15] * 4 + param_1[0x1f]);
  }
  param_3[1] = *local_c & 0x40000000;
  if (param_3[1] == 0) {
    *param_3 = *local_c >> 0x12 & 0x7ff;
  }
  else {
    *param_3 = *local_c & 0x1fffffff;
  }
  param_3[2] = *local_c & 0x20000000;
  param_3[4] = *local_c & 0x80000000;
  puVar1 = local_c + 1;
  param_3[7] = *puVar1 & 0xffff;
  param_3[3] = *puVar1 >> 0x10 & 0xf;
  param_3[5] = *puVar1 & 0x100000;
  param_3[6] = *puVar1 & 0x200000;
  param_3[8] = *puVar1 >> 0x18 & 0x7f;
  param_3[9] = *puVar1 >> 0x1f;
  for (local_10 = 0; local_10 < *(byte *)(DAT_0800a82c + param_3[3]); local_10 = local_10 + 1) {
    *(undefined1 *)(local_10 + param_4) = *(undefined1 *)((int)local_c + local_10 + 8);
  }
  if (param_2 == 0x40) {
    *(int *)(*param_1 + 0xa8) = local_14;
  }
  else if (param_2 == 0x41) {
    *(int *)(*param_1 + 0xb8) = local_14;
  }
  else if (param_2 < 0x20) {
    *(int *)(*param_1 + 0x98) = 1 << (param_2 & 0xff);
  }
  else {
    *(int *)(*param_1 + 0x9c) = 1 << (param_2 & 0x1f);
  }
  return 0;
}


