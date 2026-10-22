
void FUN_0801e02c(float param_1,float *param_2)

{
  uint uVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  int local_c;
  
  if ((param_2 != (float *)0x0) &&
     (uVar1 = in_fpscr & 0xfffffff | (uint)(param_1 == 0.0) << 0x1e,
     uVar2 = uVar1 | (uint)(0.0 <= param_1) << 0x1d,
     (bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0))) {
    for (local_c = 1; local_c < 4; local_c = local_c + 1) {
      fVar3 = (float)VectorSignedToFloat(local_c,(byte)(uVar2 >> 0x16) & 3);
      param_2[local_c + 1] = param_2[local_c + 1] + fVar3 * *param_2 * param_1;
      while (uVar2 = uVar2 & 0xfffffff | (uint)(param_2[local_c + 1] < DAT_0801e128) << 0x1f,
            SUB41(uVar2 >> 0x1f,0) == (NAN(param_2[local_c + 1]) || NAN(DAT_0801e128))) {
        param_2[local_c + 1] = param_2[local_c + 1] - DAT_0801e128;
      }
      while (uVar2 = uVar2 & 0xfffffff, param_2[local_c + 1] < 0.0) {
        param_2[local_c + 1] = param_2[local_c + 1] + DAT_0801e128;
      }
    }
  }
  return;
}


