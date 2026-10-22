
void FUN_08009db4(int *param_1,ushort param_2,byte param_3,uint param_4,uint param_5)

{
  *(uint *)(*param_1 + 4) =
       (param_5 | param_2 & 0x3ff | (uint)param_3 << 0x10 | param_4) & 0x7fffffff |
       *(uint *)(*param_1 + 4) & ~(DAT_08009e14 | param_5 >> 0x15 & 0x400);
  return;
}


