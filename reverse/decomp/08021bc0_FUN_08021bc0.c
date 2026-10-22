
undefined8 FUN_08021bc0(undefined4 param_1,undefined4 param_2)

{
  uint in_fpscr;
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = VectorFloatToUnsigned((double)CONCAT44(param_2,param_1) * DAT_08021bf0,3);
  dVar1 = (double)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = VectorFloatToUnsigned((double)CONCAT44(param_2,param_1) + -dVar1 * DAT_08021bf8,3);
  return CONCAT44(uVar2,uVar3);
}


