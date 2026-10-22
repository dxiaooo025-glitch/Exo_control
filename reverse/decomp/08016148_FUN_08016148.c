
undefined4 FUN_08016148(float param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (0.0 <= *param_2) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = DAT_0801619c;
  }
  uVar1 = FUN_0801492c(param_2[6] + param_1 / fVar2);
  return uVar1;
}


