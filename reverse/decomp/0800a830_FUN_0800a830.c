
undefined4 FUN_0800a830(int *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x44);
  *param_2 = uVar1 & 7;
  param_2[1] = uVar1 >> 8 & 7;
  param_2[2] = uVar1 & 0x18;
  param_2[3] = uVar1 >> 5 & 1;
  param_2[4] = uVar1 >> 6 & 1;
  param_2[5] = uVar1 >> 7 & 1;
  param_2[6] = uVar1 >> 0xb & 1;
  param_2[7] = uVar1 >> 0xc & 1;
  param_2[8] = uVar1 >> 0xd & 1;
  param_2[9] = uVar1 >> 0xe & 1;
  param_2[10] = uVar1 >> 0x10 & 0x7f;
  return 0;
}


