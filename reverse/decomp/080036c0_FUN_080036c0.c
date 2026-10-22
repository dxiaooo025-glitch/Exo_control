
undefined4 FUN_080036c0(int param_1,undefined4 *param_2,byte param_3,ushort param_4,char param_5)

{
  uint local_10;
  undefined4 *local_c;
  
  if (param_5 == '\0') {
    local_c = param_2;
    for (local_10 = 0; local_10 < param_4 + 3 >> 2; local_10 = local_10 + 1) {
      *(undefined4 *)(param_1 + (uint)param_3 * 0x1000 + 0x1000) = *local_c;
      local_c = local_c + 1;
    }
  }
  return 0;
}


