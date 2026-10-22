
void FUN_0801dc64(float param_1,float *param_2)

{
  int local_c;
  
  if (param_2 != (float *)0x0) {
    *param_2 = param_1;
    param_2[9] = 0.5;
    param_2[10] = 0.5;
    param_2[0xb] = 0.5;
    if (*param_2 < 0.5) {
      *param_2 = 0.5;
    }
    if (20.0 < *param_2) {
      *param_2 = DAT_0801dd0c;
    }
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      param_2[local_c + 1] = 0.0;
      param_2[local_c + 5] = 0.0;
    }
  }
  return;
}


