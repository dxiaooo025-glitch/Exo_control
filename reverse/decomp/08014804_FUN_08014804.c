
float FUN_08014804(float param_1,float param_2,float param_3)

{
  if (param_2 <= param_1) {
    if (param_3 < param_1) {
      param_1 = param_3;
    }
  }
  else {
    param_1 = param_2;
  }
  return param_1;
}


