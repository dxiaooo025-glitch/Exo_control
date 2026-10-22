
undefined4 FUN_08013e90(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  short asStack_18 [4];
  short asStack_10 [3];
  byte local_9;
  
  if ((((*DAT_08013f54 == '\x01') && (param_1 != 0)) && (param_2 != 0)) &&
     ((cVar1 = FUN_08013aee(DAT_08013f58,asStack_10), cVar1 == '\x01' &&
      (cVar1 = FUN_08013b72(DAT_08013f5c,asStack_18), cVar1 == '\x01')))) {
    for (local_9 = 0; local_9 < 3; local_9 = local_9 + 1) {
      fVar3 = (float)VectorSignedToFloat((int)asStack_10[local_9],(byte)(in_fpscr >> 0x16) & 3);
      *(float *)((uint)local_9 * 4 + param_1) = fVar3 * DAT_08013f60;
      fVar3 = (float)VectorSignedToFloat((int)asStack_18[local_9],(byte)(in_fpscr >> 0x16) & 3);
      *(float *)((uint)local_9 * 4 + param_2) = fVar3 * DAT_08013f64;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


