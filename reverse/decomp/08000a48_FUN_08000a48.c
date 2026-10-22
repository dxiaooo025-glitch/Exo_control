
void FUN_08000a48(void)

{
  if (((DAT_08000a18 - DAT_08000a14 >> 2) - (DAT_08000a18 - DAT_08000a14 >> 0x1f) >> 1 == 0) ||
     (DAT_08000a1c == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x08000a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_08000a1c)();
  return;
}


