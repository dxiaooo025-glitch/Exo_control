
undefined4 FUN_0800a8d0(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x40);
  *param_2 = uVar1 & 0xff;
  param_2[1] = uVar1 >> 8 & 0x7f;
  param_2[2] = uVar1 >> 0xf & 1;
  param_2[3] = uVar1 >> 0x10 & 0xff;
  return 0;
}


