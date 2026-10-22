
void FUN_08024a60(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_08024a7c;
  *DAT_08024a7c = 0;
  iVar2 = FUN_08012a6c(param_2);
  if ((iVar2 == -1) && (*piVar1 != 0)) {
    *param_1 = *piVar1;
  }
  return;
}


