
undefined8 FUN_08000904(int param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != 0) || (param_3 != 0)) {
    uVar1 = FUN_08021c00();
    return uVar1;
  }
  if (param_2 != 0 || param_1 != 0) {
    param_2 = -1;
    param_1 = -1;
  }
  return CONCAT44(param_2,param_1);
}


