
undefined1 FUN_0801e270(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char *local_18;
  char *local_14;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar3 = 0;
  }
  else {
    local_14 = (char *)FUN_0801e1fa(param_1);
    for (local_18 = param_2; (*local_14 != '\0' && (*local_18 != '\0')); local_18 = local_18 + 1) {
      iVar2 = FUN_0801e1ce(*local_14);
      iVar1 = FUN_0801e1ce(*local_18);
      if (iVar2 != iVar1) {
        return 0;
      }
      local_14 = local_14 + 1;
    }
    iVar2 = FUN_0801e23e(local_14);
    if ((iVar2 == 0) || (*local_18 != '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


