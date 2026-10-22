
uint FUN_08003abe(int param_1)

{
  return *(uint *)(param_1 + 0x81c) & *(uint *)(param_1 + 0x818) & 0xffff;
}


