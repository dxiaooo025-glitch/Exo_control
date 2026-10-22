
undefined4 FUN_08002ce8(int param_1,byte param_2)

{
  *(uint *)(param_1 + 0x800) = (uint)param_2 | *(uint *)(param_1 + 0x800);
  return 0;
}


