
void FUN_08011e74(void)

{
  *(uint *)(DAT_08011eb0 + 0xd8) = *(uint *)(DAT_08011eb0 + 0xd8) | 1;
  FUN_080091b0(0xb,5,0,*(uint *)(DAT_08011eb0 + 0xd8) & 1);
  FUN_080091e4(0xb);
  return;
}


