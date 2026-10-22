
undefined4 FUN_08014858(float param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  if (0.0 < param_2) {
    fVar1 = (float)FUN_0802141c(param_1 / param_2);
    uVar2 = FUN_08014804(fVar1 * param_2,-param_2,param_2);
  }
  else {
    uVar2 = DAT_080148c0;
  }
  return uVar2;
}


