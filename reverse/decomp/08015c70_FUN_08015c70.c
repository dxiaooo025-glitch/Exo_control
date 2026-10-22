
byte FUN_08015c70(byte param_1)

{
  param_1 = param_1 & 3;
  if (param_1 == 0) {
    param_1 = 1;
  }
  return param_1;
}


