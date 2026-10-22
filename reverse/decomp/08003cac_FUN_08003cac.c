
undefined4 FUN_08003cac(int param_1)

{
  uint local_c;
  
  local_c = 0;
  do {
    local_c = local_c + 1;
    if (0xf000000 < local_c) {
      return 3;
    }
  } while (-1 < *(int *)(param_1 + 0x10));
  local_c = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  do {
    local_c = local_c + 1;
    if (0xf000000 < local_c) {
      return 3;
    }
  } while ((*(uint *)(param_1 + 0x10) & 1) == 1);
  return 0;
}


