
float FUN_08015118(ushort param_1)

{
  uint in_fpscr;
  float fVar1;
  
  fVar1 = (float)VectorUnsignedToFloat((uint)param_1,(byte)(in_fpscr >> 0x16) & 3);
  return fVar1 * DAT_08015144;
}


