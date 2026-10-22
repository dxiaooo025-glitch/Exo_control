
void FUN_08009040(uint param_1)

{
  *(uint *)(DAT_08009080 + 0xc) =
       DAT_08009084 | (param_1 & 7) << 8 | *(uint *)(DAT_08009080 + 0xc) & 0xf8ff;
  return;
}


