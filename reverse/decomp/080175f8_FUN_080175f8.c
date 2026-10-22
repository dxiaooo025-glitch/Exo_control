
uint FUN_080175f8(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10)

{
  int iVar1;
  float fVar2;
  uint local_c;
  
  local_c = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    if (300 < (uint)(param_3 - param_4)) {
      local_c = param_7;
    }
    iVar1 = FUN_0801665a(*(undefined4 *)(param_2 + 0x10),DAT_080176dc,param_5);
    if (iVar1 != 0) {
      local_c = param_8 | local_c;
    }
    fVar2 = (float)FUN_08014788(*(undefined4 *)(param_2 + 4));
    if (DAT_080176e0 < fVar2) {
      local_c = param_9 | local_c;
    }
    fVar2 = (float)FUN_08014788(*(undefined4 *)(param_1 + 0x1c));
    if (DAT_080176dc < fVar2) {
      local_c = param_10 | local_c;
    }
    if ((1000 < param_6) &&
       (fVar2 = (float)FUN_08014788(*(undefined4 *)(param_1 + 0x2c)), DAT_080176e4 < fVar2)) {
      local_c = param_10 | local_c;
    }
    param_7 = local_c;
  }
  return param_7;
}


