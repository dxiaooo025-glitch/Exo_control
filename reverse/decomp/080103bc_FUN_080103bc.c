
void FUN_080103bc(void)

{
  uint local_c;
  
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    FUN_0800fa40(local_c * 0x14 + DAT_0801041c);
  }
  FUN_0800fa40(DAT_08010420);
  FUN_0800fa40(DAT_08010424);
  FUN_0800fa40(DAT_08010428);
  FUN_0800fa40(DAT_0801042c);
  FUN_0800fa40(DAT_08010430);
  *DAT_08010434 = DAT_08010420;
  *DAT_08010438 = DAT_08010424;
  return;
}


