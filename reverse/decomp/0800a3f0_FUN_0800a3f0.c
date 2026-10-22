
bool FUN_0800a3f0(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  
  bVar1 = (char)param_1[0x26] != '\x01';
  if (bVar1) {
    param_1[0x27] = param_1[0x27] | 4;
  }
  else {
    *(uint *)(*param_1 + 0x80) = param_5 | param_2 << 4 | param_3 << 2 | param_4 << 1;
  }
  return bVar1;
}


