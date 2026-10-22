
bool FUN_0801f684(undefined4 param_1)

{
  bool bVar1;
  
  FUN_08010d48();
  bVar1 = *(short *)(DAT_0801f708 + 0x3a02) != *(short *)(DAT_0801f708 + 0x3a00);
  if (bVar1) {
    FUN_080230b2(param_1,(uint)*(ushort *)(DAT_0801f708 + 0x3a02) * 0x74 + DAT_0801f708,0x74);
    *(ushort *)(DAT_0801f708 + 0x3a02) = *(short *)(DAT_0801f708 + 0x3a02) + 1U & 0x7f;
  }
  FUN_08010dac();
  return bVar1;
}


