
void FUN_0801745c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    fVar2 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar2 = fVar2 * DAT_08017528;
    fVar1 = (float)FUN_08015118(*(undefined2 *)(param_3 + 0x20));
    fVar3 = fVar1 * DAT_0801752c * fVar2 + *(float *)(param_1 + 8);
    fVar4 = *(float *)(param_3 + 8);
    fVar5 = *(float *)(param_3 + 4);
    fVar2 = (float)FUN_08021780(fVar3);
    *(float *)(param_1 + 0x24) = fVar4 + fVar5 * fVar2;
    fVar4 = *(float *)(param_3 + 4) * DAT_0801752c;
    fVar2 = (float)FUN_08021968(fVar3);
    *(float *)(param_1 + 0x28) = fVar4 * fVar1 * fVar2;
  }
  return;
}


