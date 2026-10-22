
uint FUN_0801f70c(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (((param_1 == 0) || (param_4 == 0)) || (param_2 <= param_3)) {
    param_2 = param_3;
  }
  else {
    uVar1 = FUN_08022ea8(param_1 + param_3,param_2 - param_3,DAT_0801f76c,param_4);
    if ((0 < (int)uVar1) && (uVar1 < param_2 - param_3)) {
      param_2 = param_3 + uVar1;
    }
  }
  return param_2;
}


