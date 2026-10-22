
void FUN_08012880(void)

{
  *(uint *)(DAT_080128b8 + 0xf4) = *(uint *)(DAT_080128b8 + 0xf4) | 2;
  FUN_080091b0(0xfffffffe,0xf,0,*(uint *)(DAT_080128b8 + 0xf4) & 2);
  return;
}


