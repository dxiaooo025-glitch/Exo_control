
void FUN_08012538(void)

{
  int iVar1;
  
  *DAT_080125cc = DAT_080125d0;
  DAT_080125cc[1] = DAT_080125d4;
  DAT_080125cc[2] = 0x1000;
  DAT_080125cc[3] = 0x2000;
  DAT_080125cc[4] = 0x400;
  DAT_080125cc[5] = 4;
  DAT_080125cc[6] = 0;
  DAT_080125cc[7] = 0;
  DAT_080125cc[8] = 0;
  DAT_080125cc[9] = 0;
  DAT_080125cc[10] = 0;
  iVar1 = FUN_0800be16(DAT_080125cc);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  iVar1 = FUN_0800d8b4(DAT_080125cc,0);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  iVar1 = FUN_0800d930(DAT_080125cc,0);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  iVar1 = FUN_0800d842(DAT_080125cc);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  return;
}


