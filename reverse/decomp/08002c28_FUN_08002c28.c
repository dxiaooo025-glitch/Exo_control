
undefined4 FUN_08002c28(int param_1,int param_2)

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
  *(uint *)(param_1 + 0x10) = param_2 << 6 | 0x20;
  do {
    local_c = local_c + 1;
    if (0xf000000 < local_c) {
      return 3;
    }
  } while ((*(uint *)(param_1 + 0x10) & 0x20) == 0x20);
  return 0;
}


