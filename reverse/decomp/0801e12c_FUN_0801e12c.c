
float FUN_0801e12c(float param_1,float *param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  int local_18;
  float local_14;
  
  if (param_2 == (float *)0x0) {
    local_14 = 0.0;
  }
  else {
    local_14 = param_2[5];
    for (local_18 = 1; local_18 < 4; local_18 = local_18 + 1) {
      fVar2 = param_2[local_18 + 5];
      fVar1 = (float)VectorSignedToFloat(local_18,(byte)(in_fpscr >> 0x16) & 3);
      fVar1 = (float)FUN_08021780(param_2[local_18 + 1] + fVar1 * *param_2 * param_1);
      local_14 = local_14 + fVar2 * fVar1;
    }
  }
  return local_14;
}


