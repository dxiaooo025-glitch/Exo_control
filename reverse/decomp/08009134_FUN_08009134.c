
uint FUN_08009134(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_1 = param_1 & 7;
  uVar1 = 7 - param_1;
  if (3 < uVar1) {
    uVar1 = 4;
  }
  if (param_1 + 4 < 7) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 - 3;
  }
  return param_3 & ~(-1 << (param_1 & 0xff)) |
         (~(-1 << (uVar1 & 0xff)) & param_2) << (param_1 & 0xff);
}


