
void FUN_08006b34(int param_1,ushort param_2,char param_3)

{
  if (param_3 == '\0') {
    *(uint *)(param_1 + 0x18) = (uint)param_2 << 0x10;
  }
  else {
    *(uint *)(param_1 + 0x18) = (uint)param_2;
  }
  return;
}


