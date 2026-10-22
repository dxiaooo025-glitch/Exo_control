
undefined4 FUN_08015d6c(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (float)FUN_08014788(uVar2);
  uVar2 = FUN_08014804(fVar1 * DAT_08015db4,DAT_08015db8,0x40a00000);
  return uVar2;
}


