
undefined4 FUN_08003994(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x800) = *(uint *)(param_1 + 0x800) & 0xfffff80f;
  *(uint *)(param_1 + 0x800) = (param_2 & 0x7f) << 4 | *(uint *)(param_1 + 0x800);
  return 0;
}


