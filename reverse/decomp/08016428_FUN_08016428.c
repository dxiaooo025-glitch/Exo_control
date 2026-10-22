
uint FUN_08016428(float param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5,float *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  
  local_c = 0;
  iVar2 = FUN_08015d20(param_2);
  if (iVar2 != 0) {
    uVar1 = FUN_0801332c(param_1 * *param_5,param_3);
    FUN_080146ce(uVar1,param_7);
    param_5[10] = param_1 * 6.0;
    param_5[9] = param_5[7];
    param_5[0xb] = param_1 - param_5[8] / 6.0;
    param_5[0xd] = 0.0;
    local_c = FUN_08014750(uVar1,param_7,4);
  }
  iVar2 = FUN_08015d46(param_2);
  if (iVar2 != 0) {
    uVar1 = FUN_0801332c(param_1 * *param_6,param_4);
    FUN_080146ce(uVar1,param_8);
    param_6[10] = param_1 * 6.0;
    param_6[9] = param_6[7];
    param_6[0xb] = param_1 - param_6[8] / 6.0;
    param_6[0xd] = 0.0;
    uVar3 = FUN_08014750(uVar1,param_8,8);
    local_c = local_c | uVar3;
  }
  return local_c;
}


