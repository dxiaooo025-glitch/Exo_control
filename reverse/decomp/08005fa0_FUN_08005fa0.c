
uint FUN_08005fa0(void)

{
  uint uVar1;
  
  uVar1 = FUN_08004b24();
  return uVar1 >> (*(byte *)(DAT_08005fc8 + (*(uint *)(DAT_08005fc4 + 0x20) >> 4 & 7)) & 0x1f);
}


