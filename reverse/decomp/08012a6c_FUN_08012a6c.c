
int FUN_08012a6c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = DAT_08012ac8 - DAT_08012acc;
  if (*DAT_08012ad0 == 0) {
    *DAT_08012ad0 = DAT_08012ad4;
  }
  if (uVar2 < (uint)(param_1 + *DAT_08012ad0)) {
    puVar1 = (undefined4 *)FUN_08023058();
    *puVar1 = 0xc;
    iVar3 = -1;
  }
  else {
    iVar3 = *DAT_08012ad0;
    *DAT_08012ad0 = param_1 + *DAT_08012ad0;
  }
  return iVar3;
}


