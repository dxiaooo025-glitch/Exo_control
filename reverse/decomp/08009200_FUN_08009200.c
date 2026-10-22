
bool FUN_08009200(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_0800919a(3);
  uVar1 = FUN_08004830();
  uVar1 = uVar1 >> (*(byte *)(DAT_0800926c + (*(uint *)(DAT_08009268 + 0x18) >> 8 & 0xf)) & 0x1f);
  *DAT_08009270 = uVar1 >> (*(byte *)(DAT_0800926c + (*(uint *)(DAT_08009268 + 0x18) & 0xf)) & 0x1f)
  ;
  *DAT_08009274 = uVar1;
  iVar2 = FUN_08012998(0xf);
  if (iVar2 == 0) {
    FUN_08012880();
  }
  return iVar2 != 0;
}


