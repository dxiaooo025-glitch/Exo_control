
void FUN_08004bdc(undefined4 *param_1,uint *param_2)

{
  *param_1 = 0x3f;
  param_1[1] = *(uint *)(DAT_08004c58 + 0x10) & 7;
  param_1[2] = *(uint *)(DAT_08004c58 + 0x18) & 0xf00;
  param_1[3] = *(uint *)(DAT_08004c58 + 0x18) & 0xf;
  param_1[4] = *(uint *)(DAT_08004c58 + 0x18) & 0x70;
  param_1[5] = *(uint *)(DAT_08004c58 + 0x1c) & 0x70;
  param_1[6] = *(uint *)(DAT_08004c58 + 0x1c) & 0x700;
  param_1[7] = *(uint *)(DAT_08004c58 + 0x20) & 0x70;
  *param_2 = *DAT_08004c5c & 0xf;
  return;
}


