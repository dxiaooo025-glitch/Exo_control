
undefined1 FUN_0800356c(int param_1,byte *param_2)

{
  uint local_14;
  
  local_14 = 0;
  if (param_2[1] == 1) {
    if ((*(uint *)(param_1 + (uint)*param_2 * 0x20 + 0x900) & 0x80000000) == 0x80000000) {
      *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0x900) =
           *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0x900) | 0x8000000;
      *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0x900) =
           *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0x900) | 0x40000000;
      do {
        local_14 = local_14 + 1;
        if (10000 < local_14) {
          return 1;
        }
      } while ((*(uint *)(param_1 + (uint)*param_2 * 0x20 + 0x900) & 0x80000000) == 0x80000000);
    }
  }
  else if ((*(uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00) & 0x80000000) == 0x80000000) {
    *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00) =
         *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00) | 0x8000000;
    *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00) =
         *(uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00) | 0x40000000;
    do {
      local_14 = local_14 + 1;
      if (10000 < local_14) {
        return 1;
      }
    } while ((*(uint *)(param_1 + (uint)*param_2 * 0x20 + 0xb00) & 0x80000000) == 0x80000000);
  }
  return 0;
}


