
void FUN_080090e0(ushort param_1,uint param_2)

{
  if ((short)param_1 < 0) {
    *(char *)((param_1 & 0xf) + DAT_08009130 + 0x14) = (char)((param_2 & 0xff) << 4);
  }
  else {
    *(char *)((short)param_1 + DAT_0800912c + 0x300) = (char)((param_2 & 0xff) << 4);
  }
  return;
}


