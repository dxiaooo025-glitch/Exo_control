
uint FUN_08004b84(void)

{
  uint uVar1;
  
  uVar1 = FUN_08004b24();
  return uVar1 >> (*(byte *)(DAT_08004bac + (*(uint *)(DAT_08004ba8 + 0x1c) >> 4 & 7)) & 0x1f);
}


