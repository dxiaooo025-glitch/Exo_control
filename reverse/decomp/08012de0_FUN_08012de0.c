
undefined4 FUN_08012de0(float param_1,float param_2)

{
  undefined4 uVar1;
  
  if (0.0 < param_1) {
    uVar1 = VectorFloatToUnsigned(param_1 * param_2 + 0.5,3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


