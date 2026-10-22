
float FUN_08015524(undefined4 param_1,float param_2,float param_3,int param_4,int param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  if ((param_4 == 0) || (param_5 == 0)) {
    fVar1 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_5 + 0x24);
    uVar3 = FUN_080149c4(*(undefined4 *)(param_5 + 0x1c));
    if (param_6 == '\0') {
      FUN_0801e02c(DAT_08015688,param_4);
      if (*(char *)(param_5 + 0x39) != '\x01') {
        uVar3 = FUN_08015460(param_3,param_4,param_5);
        *(undefined4 *)(param_5 + 0x44) = uVar3;
        *(undefined1 *)(param_5 + 0x39) = 1;
      }
    }
    else {
      FUN_080152e8(param_5);
      FUN_0801dd4c(uVar3,DAT_08015688,param_4);
      *(undefined1 *)(param_5 + 0x39) = 0;
      *(undefined4 *)(param_5 + 0x44) = 0x3f800000;
    }
    fVar1 = (float)FUN_0801e12c(param_1,param_4);
    uVar3 = FUN_080149ec(*(float *)(param_5 + 0x44) * param_2 * (fVar1 - *(float *)(param_4 + 0x14))
                         + *(float *)(param_4 + 0x14));
    uVar3 = FUN_08014804(uVar3,-param_3,param_3);
    fVar1 = (float)FUN_08014a30(uVar3);
    *(float *)(param_5 + 0x24) = fVar1;
    *(float *)(param_5 + 0x28) = (fVar1 - fVar2) / DAT_08015688;
    *(float *)(param_5 + 0x2c) = *(float *)(param_5 + 0x24) - *(float *)(param_5 + 0x1c);
    *(undefined4 *)(param_5 + 0x34) = 0;
  }
  return fVar1;
}


