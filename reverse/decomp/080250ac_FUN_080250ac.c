
void FUN_080250ac(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_080250c8;
  *DAT_080250c8 = 0;
  iVar2 = FUN_08012bc8(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


