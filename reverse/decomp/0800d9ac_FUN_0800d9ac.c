
void FUN_0800d9ac(int *param_1)

{
  byte bVar1;
  byte bVar2;
  
  if (param_1[0x19] == 0) {
    *(undefined2 *)((int)param_1 + 0x6a) = 1;
    *(undefined2 *)(param_1 + 0x1a) = 1;
  }
  else {
    bVar1 = (byte)((uint)*(undefined4 *)(*param_1 + 8) >> 0x19) & 7;
    bVar2 = (byte)((uint)*(undefined4 *)(*param_1 + 8) >> 0x1d);
    *(short *)((int)param_1 + 0x6a) =
         (short)(((uint)*(byte *)(DAT_0800da40 + (uint)bVar2) * 0x10) /
                (uint)*(byte *)(DAT_0800da44 + (uint)bVar2));
    *(short *)(param_1 + 0x1a) =
         (short)(((uint)*(byte *)(DAT_0800da40 + (uint)bVar1) * 0x10) /
                (uint)*(byte *)(DAT_0800da44 + (uint)bVar1));
  }
  return;
}


