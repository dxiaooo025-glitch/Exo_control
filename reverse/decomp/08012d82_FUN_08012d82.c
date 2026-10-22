
int FUN_08012d82(float param_1,float param_2)

{
  float fVar1;
  
  if (param_1 < 0.0) {
    fVar1 = param_1 * param_2 - 0.5;
  }
  else {
    fVar1 = param_1 * param_2 + 0.5;
  }
  return (int)fVar1;
}


