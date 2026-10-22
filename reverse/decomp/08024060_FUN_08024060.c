
uint FUN_08024060(void)

{
  uint uVar1;
  int iVar2;
  undefined8 in_d0;
  uint uStack_4;
  
  uStack_4 = (uint)((ulonglong)in_d0 >> 0x20);
  iVar2 = (DAT_080240a8 & uStack_4) + 0xfcc00000;
  if ((iVar2 < 1) && (iVar2 = -iVar2, 0x13fffff < iVar2)) {
    uVar1 = (iVar2 >> 0x14) - 0x14;
    if ((int)uVar1 < 0x1f) {
      uVar1 = 0x80000000 >> (uVar1 & 0xff);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


