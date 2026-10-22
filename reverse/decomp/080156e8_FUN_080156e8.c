
float FUN_080156e8(float param_1,float param_2,float param_3,float *param_4,float *param_5,
                  char param_6,char param_7)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  float local_14;
  
  if ((param_4 == (float *)0x0) || (param_5 == (float *)0x0)) {
    return 0.0;
  }
  if (param_6 != '\0') {
    FUN_080152e8(param_5);
  }
  uVar2 = FUN_080149c4(param_5[7]);
  FUN_0801dd4c(uVar2,DAT_0801589c,param_4);
  uVar2 = FUN_0801e12c(param_1,param_4);
  fVar3 = (float)FUN_080149ec(uVar2);
  param_5[9] = fVar3;
  param_5[10] = 0.0;
  param_5[0xb] = param_5[9] - param_5[7];
  if ((param_6 != '\0') || (cVar1 = FUN_0801568c(param_5), cVar1 != '\x01')) {
    param_5[0xd] = 0.0;
    return 0.0;
  }
  local_14 = (float)FUN_08021780(param_4[2] + *param_4 * param_1);
  local_14 = param_3 * param_2 * local_14;
  if (((param_7 != '\0') && (0.0 < local_14)) || ((param_7 != '\x01' && (local_14 < 0.0)))) {
    local_14 = local_14 * DAT_080158a0;
  }
  fVar3 = (float)FUN_08014788(local_14);
  if (fVar3 < DAT_080158a4) {
    local_14 = 0.0;
  }
  fVar3 = (float)FUN_08014804(local_14,-param_3,param_3);
  param_5[0xd] = *param_5 * fVar3 * param_5[1];
  return param_5[0xd];
}


