
float FUN_0801536c(float *param_1)

{
  uint uVar1;
  byte bVar2;
  uint in_fpscr;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  uint local_14;
  float local_10;
  float local_c;
  
  if ((param_1 == (float *)0x0) ||
     (uVar1 = in_fpscr & 0xfffffff | (uint)(*param_1 == 0.0) << 0x1e,
     uVar3 = uVar1 | (uint)(0.0 <= *param_1) << 0x1d,
     !(bool)((byte)(uVar3 >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0))) {
    fVar6 = DAT_08015454;
  }
  else {
    fVar6 = DAT_08015458 / *param_1;
    uVar4 = FUN_0801e12c(DAT_08015454,param_1);
    local_10 = (float)FUN_080149ec(uVar4);
    local_c = local_10;
    for (local_14 = 1; local_14 < 0x30; local_14 = local_14 + 1) {
      fVar5 = (float)VectorUnsignedToFloat(local_14,(byte)(uVar3 >> 0x16) & 3);
      uVar4 = FUN_0801e12c((fVar5 * fVar6) / DAT_0801545c,param_1);
      fVar5 = (float)FUN_080149ec(uVar4);
      if (fVar5 < local_c) {
        local_c = fVar5;
      }
      uVar1 = uVar3 & 0xfffffff | (uint)(fVar5 < local_10) << 0x1f |
              (uint)(fVar5 == local_10) << 0x1e;
      uVar3 = uVar1 | (uint)(NAN(fVar5) || NAN(local_10)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar3 >> 0x1c) & 1)) {
        local_10 = fVar5;
      }
    }
    fVar6 = (local_10 - local_c) * 0.5;
  }
  return fVar6;
}


