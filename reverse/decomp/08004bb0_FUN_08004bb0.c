
uint FUN_08004bb0(void)

{
  uint uVar1;
  
  uVar1 = FUN_08004b24();
  return uVar1 >> (*(byte *)(DAT_08004bd8 + (*(uint *)(DAT_08004bd4 + 0x1c) >> 8 & 7)) & 0x1f);
}


