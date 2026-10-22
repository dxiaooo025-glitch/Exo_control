
void FUN_0801f520(void)

{
  *(uint *)(DAT_0801f568 + 0xc) = *(uint *)(DAT_0801f568 + 0xc) | 0x1000000;
  DAT_0801f56c[1] = 0;
  *DAT_0801f56c = *DAT_0801f56c | 1;
  *(bool *)(DAT_0801f570 + 0x46b8) = (*DAT_0801f56c & 1) != 0;
  return;
}


