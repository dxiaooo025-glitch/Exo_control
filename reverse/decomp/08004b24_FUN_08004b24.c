
uint FUN_08004b24(void)

{
  uint uVar1;
  
  uVar1 = FUN_08004830();
  uVar1 = uVar1 >> (*(byte *)(DAT_08004b78 + (*(uint *)(DAT_08004b74 + 0x18) >> 8 & 0xf)) & 0x1f);
  *DAT_08004b7c = uVar1 >> (*(byte *)(DAT_08004b78 + (*(uint *)(DAT_08004b74 + 0x18) & 0xf)) & 0x1f)
  ;
  *DAT_08004b80 = uVar1;
  return *DAT_08004b7c;
}


