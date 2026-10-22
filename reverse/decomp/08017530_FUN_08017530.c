
void FUN_08017530(int param_1)

{
  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (param_1 != 0) {
    fVar3 = (float)FUN_08014788(*(undefined4 *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) + fVar3;
    *(float *)(param_1 + 0x4c) =
         *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c);
    fVar5 = *(float *)(param_1 + 0x58);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar3 < fVar5) << 0x1f | (uint)(fVar3 == fVar5) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar3) || NAN(fVar5))) {
      *(float *)(param_1 + 0x58) = fVar3;
    }
    fVar3 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x5c),(byte)(uVar1 >> 0x16) & 3);
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x48) / fVar3;
    fVar3 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x5c),(byte)(uVar1 >> 0x16) & 3);
    uVar4 = FUN_080213d8(*(float *)(param_1 + 0x4c) / fVar3);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
  }
  return;
}


