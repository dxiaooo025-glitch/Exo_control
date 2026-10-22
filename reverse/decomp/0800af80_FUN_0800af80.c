
undefined4 FUN_0800af80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *local_c;
  
  iVar1 = param_1[0xd];
  *(uint *)(*param_1 + 0x84) = DAT_0800b234 & *(uint *)(*param_1 + 0x84) | iVar1 << 2;
  *(uint *)(*param_1 + 0x84) = param_1[0xe] << 0x10 | *(uint *)(*param_1 + 0x84) & 0xff00ffff;
  iVar1 = param_1[0xe] + iVar1;
  *(uint *)(*param_1 + 0x88) = DAT_0800b234 & *(uint *)(*param_1 + 0x88) | iVar1 * 4;
  *(uint *)(*param_1 + 0x88) = param_1[0xf] << 0x10 | *(uint *)(*param_1 + 0x88) & 0xff80ffff;
  iVar1 = param_1[0xf] * 2 + iVar1;
  *(uint *)(*param_1 + 0xa0) = DAT_0800b234 & *(uint *)(*param_1 + 0xa0) | iVar1 * 4;
  *(uint *)(*param_1 + 0xa0) = param_1[0x10] << 0x10 | *(uint *)(*param_1 + 0xa0) & 0xff80ffff;
  iVar1 = param_1[0x11] * param_1[0x10] + iVar1;
  *(uint *)(*param_1 + 0xb0) = DAT_0800b234 & *(uint *)(*param_1 + 0xb0) | iVar1 * 4;
  *(uint *)(*param_1 + 0xb0) = param_1[0x12] << 0x10 | *(uint *)(*param_1 + 0xb0) & 0xff80ffff;
  iVar1 = param_1[0x13] * param_1[0x12] + iVar1;
  *(uint *)(*param_1 + 0xac) = DAT_0800b234 & *(uint *)(*param_1 + 0xac) | iVar1 * 4;
  iVar1 = param_1[0x15] * param_1[0x14] + iVar1;
  *(uint *)(*param_1 + 0xf0) = DAT_0800b234 & *(uint *)(*param_1 + 0xf0) | iVar1 * 4;
  *(uint *)(*param_1 + 0xf0) = param_1[0x16] << 0x10 | *(uint *)(*param_1 + 0xf0) & 0xffc0ffff;
  *(uint *)(*param_1 + 0xc0) =
       DAT_0800b234 & *(uint *)(*param_1 + 0xc0) | (param_1[0x16] * 2 + iVar1) * 4;
  *(uint *)(*param_1 + 0xc0) = param_1[0x17] << 0x10 | *(uint *)(*param_1 + 0xc0) & 0xffc0ffff;
  *(uint *)(*param_1 + 0xc0) = param_1[0x18] << 0x18 | *(uint *)(*param_1 + 0xc0) & 0xc0ffffff;
  param_1[0x1b] = (DAT_0800b238 + param_1[0xd]) * 4;
  param_1[0x1c] = param_1[0x1b] + param_1[0xe] * 4;
  param_1[0x1d] = param_1[0x1c] + param_1[0xf] * 8;
  param_1[0x1e] = param_1[0x1d] + param_1[0x11] * param_1[0x10] * 4;
  param_1[0x1f] = param_1[0x1e] + param_1[0x13] * param_1[0x12] * 4;
  param_1[0x20] = param_1[0x1f] + param_1[0x15] * param_1[0x14] * 4;
  param_1[0x21] = param_1[0x20] + param_1[0x16] * 8;
  param_1[0x22] = param_1[0x21] + param_1[0x1a] * param_1[0x17] * 4;
  param_1[0x24] = param_1[0x22] + param_1[0x1a] * param_1[0x18] * 4;
  if (DAT_0800b23c < (uint)param_1[0x24]) {
    param_1[0x27] = param_1[0x27] | 0x20;
    *(undefined1 *)(param_1 + 0x26) = 3;
    uVar2 = 1;
  }
  else {
    for (local_c = (undefined4 *)param_1[0x1b]; local_c < (undefined4 *)param_1[0x24];
        local_c = local_c + 1) {
      *local_c = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}


