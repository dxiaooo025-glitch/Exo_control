
undefined4 FUN_08002558(int *param_1,byte param_2,ushort param_3)

{
  uint local_10;
  byte local_9;
  
  if (param_2 == 0) {
    *(uint *)(*param_1 + 0x28) = *(uint *)(*param_1 + 0x24) | (uint)param_3 << 0x10;
  }
  else {
    local_10 = (*(uint *)(*param_1 + 0x28) >> 0x10) + *(uint *)(*param_1 + 0x24);
    for (local_9 = 0; (uint)local_9 < param_2 - 1; local_9 = local_9 + 1) {
      local_10 = (*(uint *)((local_9 + 0x40) * 4 + *param_1 + 4) >> 0x10) + local_10;
    }
    *(uint *)((param_2 + 0x3f) * 4 + *param_1 + 4) = local_10 | (uint)param_3 << 0x10;
  }
  return 0;
}


