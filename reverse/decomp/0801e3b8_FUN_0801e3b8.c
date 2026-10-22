
undefined4 FUN_0801e3b8(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *local_20;
  char *local_14;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_2 == (char *)0x0)) {
    uVar4 = 0;
  }
  else {
    local_14 = (char *)FUN_0801e1fa(*param_1);
    for (local_20 = param_2; (*local_14 != '\0' && (*local_20 != '\0')); local_20 = local_20 + 1) {
      iVar1 = FUN_0801e1ce(*local_14);
      iVar2 = FUN_0801e1ce(*local_20);
      if (iVar1 != iVar2) {
        return 0;
      }
      local_14 = local_14 + 1;
    }
    if (*local_20 == '\0') {
      pcVar3 = (char *)FUN_0801e1fa(local_14);
      if (*pcVar3 == ',') {
        *param_1 = (int)(pcVar3 + 1);
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


