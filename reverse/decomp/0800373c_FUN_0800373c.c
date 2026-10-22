
undefined4 * FUN_0800373c(int param_1,undefined4 *param_2,ushort param_3)

{
  uint uVar1;
  ushort local_12;
  uint local_10;
  undefined4 *local_c;
  
  local_12 = param_3 & 3;
  local_c = param_2;
  for (local_10 = 0; local_10 < param_3 >> 2; local_10 = local_10 + 1) {
    *local_c = *(undefined4 *)(param_1 + 0x1000);
    local_c = local_c + 1;
  }
  if (local_12 != 0) {
    local_10 = 0;
    uVar1 = *(uint *)(param_1 + 0x1000);
    do {
      *(char *)local_c = (char)(uVar1 >> ((local_10 & 0x1f) << 3));
      local_10 = local_10 + 1;
      local_c = (undefined4 *)((int)local_c + 1);
      local_12 = local_12 - 1;
    } while (local_12 != 0);
  }
  return local_c;
}


