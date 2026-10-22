
bool FUN_0800296c(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint local_20;
  bool local_19;
  char cStack_a;
  char cStack_9;
  char local_7;
  char local_6;
  char local_2;
  
  for (local_20 = 0; local_20 < 0xf; local_20 = local_20 + 1) {
    param_1[local_20 + 0x41] = 0;
  }
  local_2 = (char)((uint)param_4 >> 0x10);
  if (local_2 == '\0') {
    param_1[0x201] = param_1[0x201] | 2;
    param_1[0xe] = param_1[0xe] & 0xffdfffff;
    *param_1 = *param_1 | 0x40;
    *param_1 = *param_1 | 0x80;
  }
  else {
    param_1[0xe] = param_1[0xe] | 0x200000;
  }
  param_1[0x380] = 0;
  local_7 = (char)((uint)param_3 >> 8);
  if (local_7 == '\x01') {
    cStack_9 = (char)(param_2 >> 0x18);
    if (cStack_9 == '\0') {
      FUN_08002ce8(param_1,0);
    }
    else {
      FUN_08002ce8(param_1,1);
    }
  }
  else {
    FUN_08002ce8(param_1,3);
  }
  iVar1 = FUN_08002c28(param_1,0x10);
  iVar2 = FUN_08002c8c(param_1);
  local_19 = iVar2 != 0 || iVar1 != 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x207] = 0;
  for (local_20 = 0; local_20 < (param_2 & 0xff); local_20 = local_20 + 1) {
    if ((param_1[local_20 * 8 + 0x240] & 0x80000000) == 0x80000000) {
      if (local_20 == 0) {
        param_1[0x240] = 0x8000000;
      }
      else {
        param_1[local_20 * 8 + 0x240] = 0x48000000;
      }
    }
    else {
      param_1[local_20 * 8 + 0x240] = 0;
    }
    param_1[local_20 * 8 + 0x244] = 0;
    param_1[local_20 * 8 + 0x242] = 0xfb7f;
  }
  for (local_20 = 0; local_20 < (param_2 & 0xff); local_20 = local_20 + 1) {
    if ((param_1[local_20 * 8 + 0x2c0] & 0x80000000) == 0x80000000) {
      if (local_20 == 0) {
        param_1[0x2c0] = 0x8000000;
      }
      else {
        param_1[local_20 * 8 + 0x2c0] = 0x48000000;
      }
    }
    else {
      param_1[local_20 * 8 + 0x2c0] = 0;
    }
    param_1[local_20 * 8 + 0x2c4] = 0;
    param_1[local_20 * 8 + 0x2c2] = 0xfb7f;
  }
  param_1[0x204] = param_1[0x204] & 0xfffffeff;
  param_1[6] = 0;
  param_1[5] = 0xbfffffff;
  cStack_a = (char)(param_2 >> 0x10);
  if (cStack_a == '\0') {
    param_1[6] = param_1[6] | 0x10;
  }
  param_1[6] = DAT_08002c20 | param_1[6];
  local_6 = (char)((uint)param_3 >> 0x10);
  if (local_6 != '\0') {
    param_1[6] = param_1[6] | 8;
  }
  if (local_2 == '\x01') {
    param_1[6] = DAT_08002c24 | param_1[6];
  }
  return local_19;
}


