
undefined4 FUN_08014750(char param_1,int param_2,undefined4 param_3)

{
  if (param_1 == '\0') {
    param_3 = 0;
  }
  else if ((param_2 != 0) && (*(byte *)(param_2 + 0xc) < 5)) {
    param_3 = 0;
  }
  return param_3;
}


