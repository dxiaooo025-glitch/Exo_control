
void FUN_0801dd4c(float param_1,float param_2,float *param_3)

{
  byte bVar1;
  uint in_fpscr;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  
  if ((param_3 != (float *)0x0) &&
     (uVar3 = in_fpscr & 0xfffffff | (uint)(param_2 == 0.0) << 0x1e,
     uVar2 = uVar3 | (uint)(0.0 <= param_2) << 0x1d,
     (bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar3 >> 0x1e,0))) {
    local_1c = param_3[5];
    for (local_20 = 1; local_20 < 4; local_20 = local_20 + 1) {
      fVar5 = param_3[local_20 + 5];
      fVar4 = (float)FUN_08021780(param_3[local_20 + 1]);
      local_1c = local_1c + fVar5 * fVar4;
    }
    param_1 = param_1 - local_1c;
    local_24 = DAT_0801e020;
    for (local_28 = 1; local_28 < 4; local_28 = local_28 + 1) {
      local_24 = local_24 + ABS(param_3[local_28 + 5]);
    }
    fVar7 = *param_3;
    fVar5 = param_3[9];
    fVar4 = (float)FUN_08021968(param_3[2]);
    *param_3 = fVar7 + fVar5 * (param_1 / local_24) * fVar4 * param_2;
    if (*param_3 < 0.5) {
      *param_3 = 0.5;
    }
    fVar4 = *param_3;
    uVar2 = uVar2 & 0xfffffff | (uint)(fVar4 < 20.0) << 0x1f | (uint)(fVar4 == 20.0) << 0x1e;
    uVar3 = uVar2 | (uint)NAN(fVar4) << 0x1c;
    bVar1 = (byte)(uVar2 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar3 >> 0x1c) & 1)) {
      *param_3 = DAT_0801e024;
    }
    for (local_2c = 1; local_2c < 4; local_2c = local_2c + 1) {
      fVar8 = param_3[local_2c + 1];
      fVar5 = (float)VectorSignedToFloat(local_2c,(byte)(uVar3 >> 0x16) & 3);
      fVar6 = *param_3;
      fVar7 = param_3[10];
      fVar4 = (float)FUN_08021968(param_3[local_2c + 1]);
      param_3[local_2c + 1] =
           fVar8 + (fVar5 * fVar6 + fVar7 * (param_1 / local_24) * fVar4) * param_2;
      while (uVar2 = uVar3 & 0xfffffff | (uint)(param_3[local_2c + 1] < DAT_0801e028) << 0x1f,
            uVar3 = uVar2 | (uint)(NAN(param_3[local_2c + 1]) || NAN(DAT_0801e028)) << 0x1c,
            (byte)(uVar2 >> 0x1f) == ((byte)(uVar3 >> 0x1c) & 1)) {
        param_3[local_2c + 1] = param_3[local_2c + 1] - DAT_0801e028;
      }
      while (uVar3 = uVar3 & 0xfffffff, param_3[local_2c + 1] < 0.0) {
        param_3[local_2c + 1] = param_3[local_2c + 1] + DAT_0801e028;
      }
      fVar7 = param_3[local_2c + 5];
      fVar5 = param_3[0xb];
      fVar4 = (float)FUN_08021780(param_3[local_2c + 1]);
      param_3[local_2c + 5] = fVar7 + fVar5 * param_1 * fVar4 * param_2;
    }
    param_3[5] = param_3[5] + param_3[0xb] * param_1 * param_2;
  }
  return;
}


