
int FUN_080148c4(float param_1,float param_2)

{
  float local_c;
  
  param_1 = param_1 * param_2;
  if (param_1 < 0.0) {
    local_c = param_1 - 0.5;
  }
  else {
    local_c = param_1 + 0.5;
  }
  return (int)local_c;
}


