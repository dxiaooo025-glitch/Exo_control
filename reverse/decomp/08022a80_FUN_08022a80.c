
float FUN_08022a80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float fVar2;
  double dVar3;
  
  puVar1 = DAT_08022b08;
  dVar3 = (double)FUN_08021ef0(*DAT_08022b08,param_1,param_2,DAT_08022b0c);
  if (NAN(dVar3)) {
    if ((longlong)dVar3 < 0) {
      fVar2 = (float)FUN_080230e0(DAT_08022b10);
      return -fVar2;
    }
    fVar2 = (float)FUN_080230e0(DAT_08022b10);
    return fVar2;
  }
  fVar2 = (float)dVar3;
  if ((ABS(fVar2) <= DAT_08022b14) || (DAT_08022b00 < ABS(dVar3))) {
    if (((uint)fVar2 & 0x7f800000) != 0) {
      return fVar2;
    }
    if ((DAT_08022b18 & (uint)((ulonglong)dVar3 >> 0x20)) == 0) {
      return fVar2;
    }
  }
  *(undefined4 *)*puVar1 = 0x22;
  return fVar2;
}


