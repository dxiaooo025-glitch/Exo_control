
bool FUN_0801665a(undefined4 param_1,float param_2,byte *param_3)

{
  bool bVar1;
  float fVar2;
  
  if (param_3 == (byte *)0x0) {
    fVar2 = (float)FUN_08014788(param_1);
    bVar1 = param_2 < fVar2;
  }
  else {
    fVar2 = (float)FUN_08014788(param_1);
    if (fVar2 <= param_2) {
      *param_3 = 0;
    }
    else if (*param_3 < 3) {
      *param_3 = *param_3 + 1;
    }
    bVar1 = 2 < *param_3;
  }
  return bVar1;
}


