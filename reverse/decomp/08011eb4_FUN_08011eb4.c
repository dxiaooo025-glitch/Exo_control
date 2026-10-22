
void FUN_08011eb4(void)

{
  int iVar1;
  
  *DAT_08011f74 = DAT_08011f78;
  DAT_08011f74[2] = 0;
  DAT_08011f74[3] = 0;
  *(undefined1 *)(DAT_08011f74 + 4) = 1;
  *(undefined1 *)((int)DAT_08011f74 + 0x11) = 0;
  *(undefined1 *)((int)DAT_08011f74 + 0x12) = 0;
  DAT_08011f74[5] = 3;
  DAT_08011f74[6] = 10;
  DAT_08011f74[7] = 0x1d;
  DAT_08011f74[8] = 10;
  DAT_08011f74[9] = 3;
  DAT_08011f74[10] = 10;
  DAT_08011f74[0xb] = 0x1d;
  DAT_08011f74[0xc] = 10;
  DAT_08011f74[0xd] = 0;
  DAT_08011f74[0xe] = 1;
  DAT_08011f74[0xf] = 0;
  DAT_08011f74[0x10] = 4;
  DAT_08011f74[0x11] = 10;
  DAT_08011f74[0x12] = 0;
  DAT_08011f74[0x13] = 4;
  DAT_08011f74[0x14] = 0;
  DAT_08011f74[0x15] = 4;
  DAT_08011f74[0x16] = 0;
  DAT_08011f74[0x17] = 0;
  DAT_08011f74[0x18] = 8;
  DAT_08011f74[0x19] = 0;
  DAT_08011f74[0x1a] = 10;
  iVar1 = FUN_08009f48(DAT_08011f74);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  return;
}


