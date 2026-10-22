
undefined4 FUN_08003a22(int param_1)

{
  *(uint *)(param_1 + 0xe00) = *(uint *)(param_1 + 0xe00) & 0xfffffffc;
  *(uint *)(param_1 + 0x804) = *(uint *)(param_1 + 0x804) | 2;
  return 0;
}


