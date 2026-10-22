
uint FUN_08003af2(int param_1,byte param_2)

{
  return *(uint *)(param_1 + 0x814) & *(uint *)(param_1 + (uint)param_2 * 0x20 + 0xb08);
}


