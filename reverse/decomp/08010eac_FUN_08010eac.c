
void FUN_08010eac(void)

{
  *DAT_08010ee0 = 0;
  *DAT_08010ee4 = 0;
  *DAT_08010ef0 = (uint)((ulonglong)DAT_08010eec * (ulonglong)*DAT_08010ee8 >> 0x26) - 1;
  *DAT_08010ee0 = 7;
  return;
}


