
float FUN_0802141c(float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = DAT_0802150c;
  fVar2 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar2) {
    if ((int)param_1 < 0) {
      return *DAT_08021500 / param_1 - *DAT_08021500;
    }
    return *DAT_08021500 / param_1 + *DAT_08021500;
  }
  if ((uint)DAT_08021504 < (uint)fVar2) {
    fVar2 = *DAT_08021500 - *DAT_08021508;
  }
  else {
    if ((uint)fVar2 < 0x24000000) {
      return (*DAT_08021500 + param_1) * param_1;
    }
    if ((uint)fVar2 < 0x3f800000) {
      fVar3 = *DAT_0802150c;
      fVar2 = (float)FUN_08021bac();
      fVar2 = (float)FUN_08021510(-(fVar3 * fVar2));
      fVar2 = -fVar2 / (*pfVar1 + fVar2);
    }
    else {
      fVar2 = (float)FUN_08021bac();
      fVar2 = (float)FUN_08021510(fVar2 * *pfVar1);
      fVar2 = *DAT_08021500 - *pfVar1 / (*pfVar1 + fVar2);
    }
  }
  if ((int)param_1 < 0) {
    fVar2 = -fVar2;
  }
  return fVar2;
}


