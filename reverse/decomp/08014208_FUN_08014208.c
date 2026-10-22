
int FUN_08014208(uint param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 1 << (param_2 - 1 & 0xff);
  return (param_1 ^ uVar1) - uVar1;
}


