
void FUN_08000a6c(void)

{
  *(uint *)(DAT_08000b3c + 0x88) = *(uint *)(DAT_08000b3c + 0x88) | 0xf00000;
  if ((*DAT_08000b40 & 0xf) < 7) {
    *DAT_08000b40 = *DAT_08000b40 & 0xfffffff0 | 7;
  }
  *DAT_08000b44 = *DAT_08000b44 | 1;
  DAT_08000b44[4] = 0;
  *DAT_08000b44 = DAT_08000b48 & *DAT_08000b44;
  if ((*DAT_08000b40 & 8) != 0) {
    *DAT_08000b40 = *DAT_08000b40 & 0xfffffff0 | 7;
  }
  DAT_08000b44[6] = 0;
  DAT_08000b44[7] = 0;
  DAT_08000b44[8] = 0;
  DAT_08000b44[10] = DAT_08000b4c;
  DAT_08000b44[0xb] = DAT_08000b50;
  DAT_08000b44[0xc] = DAT_08000b54;
  DAT_08000b44[0xd] = 0;
  DAT_08000b44[0xe] = DAT_08000b54;
  DAT_08000b44[0xf] = 0;
  DAT_08000b44[0x10] = DAT_08000b54;
  DAT_08000b44[0x11] = 0;
  *DAT_08000b44 = *DAT_08000b44 & 0xfffbffff;
  DAT_08000b44[0x18] = 0;
  *DAT_08000b58 = 0x30d2;
  return;
}


