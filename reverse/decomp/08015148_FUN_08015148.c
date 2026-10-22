
undefined4 FUN_08015148(float param_1,undefined2 param_2)

{
  float fVar1;
  undefined4 uVar2;
  
  param_1 = param_1 * DAT_080151bc;
  fVar1 = (float)FUN_08015118(param_2);
  fVar1 = (float)FUN_08014788((param_1 * fVar1) / 6.0);
  uVar2 = FUN_08014804(fVar1 + 0.5,0x3f000000,DAT_080151c0);
  return uVar2;
}


