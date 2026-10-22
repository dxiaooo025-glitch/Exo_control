
void FUN_08013ffc(void)

{
  int iVar1;
  
  FUN_08022f96(DAT_08014038,0,0x40);
  FUN_08013f80();
  FUN_08013d1c();
  if (*DAT_0801403c == DAT_08014040) {
    iVar1 = FUN_080142ac(DAT_08014044,DAT_0801403c);
    *(bool *)DAT_08014038 = iVar1 == 0;
  }
  return;
}


