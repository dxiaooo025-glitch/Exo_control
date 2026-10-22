
float FUN_08016334(float param_1,undefined1 param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float local_c;
  
  fVar1 = DAT_08016424;
  iVar2 = FUN_08015d20(param_2);
  local_c = param_1;
  if (((iVar2 != 0) && (param_3 != 0)) &&
     (((fVar1 <= *(float *)(param_3 + 0x1c) && (0.0 < param_1)) ||
      ((*(float *)(param_3 + 0x1c) <= -fVar1 && (param_1 < 0.0)))))) {
    local_c = 0.0;
  }
  iVar2 = FUN_08015d46(param_2);
  if (iVar2 == 0) {
    return local_c;
  }
  if (param_4 == 0) {
    return local_c;
  }
  if ((*(float *)(param_4 + 0x1c) < fVar1) || (param_1 <= 0.0)) {
    if (-fVar1 < *(float *)(param_4 + 0x1c)) {
      return local_c;
    }
    if (0.0 <= param_1) {
      return local_c;
    }
  }
  return 0.0;
}


