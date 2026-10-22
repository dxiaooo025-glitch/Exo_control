
undefined4 FUN_08015460(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (((param_2 == 0) || (param_3 == 0)) || (*(char *)(param_3 + 0x38) != '\x01')) {
    uVar3 = 0x3f800000;
  }
  else {
    fVar1 = (float)FUN_08014804((*(float *)(param_3 + 0x40) - *(float *)(param_3 + 0x3c)) * 0.5,
                                DAT_08015520,param_1);
    fVar2 = (float)FUN_0801536c(param_2);
    if ((fVar1 < 1.0) || (fVar2 < 1.0)) {
      uVar3 = 0x3f800000;
    }
    else {
      uVar3 = FUN_08014804(fVar1 / fVar2,0x3e800000,0x40800000);
    }
  }
  return uVar3;
}


