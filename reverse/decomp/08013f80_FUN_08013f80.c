
void FUN_08013f80(void)

{
  int iVar1;
  
  *DAT_08013ff0 = DAT_08013ff4;
  DAT_08013ff0[1] = DAT_08013ff8;
  DAT_08013ff0[2] = 0;
  DAT_08013ff0[3] = 1;
  DAT_08013ff0[4] = 0;
  DAT_08013ff0[5] = 0;
  DAT_08013ff0[6] = 0;
  DAT_08013ff0[7] = 0;
  DAT_08013ff0[8] = 0;
  iVar1 = FUN_08009300(DAT_08013ff0);
  if (((iVar1 != 0) || (iVar1 = FUN_08009e18(DAT_08013ff0,0), iVar1 != 0)) ||
     (iVar1 = FUN_08009eae(DAT_08013ff0,0), iVar1 != 0)) {
    FUN_08022f96(DAT_08013ff0,0,0x54);
  }
  return;
}


