
float FUN_080147bc(float param_1,int param_2)

{
  if ((param_2 == 0) || (*(char *)(param_2 + 0xc) != '\x01')) {
    param_1 = DAT_08014800;
  }
  else {
    param_1 = *(float *)(param_2 + 8) * param_1;
  }
  return param_1;
}


