
undefined4 FUN_08014e0e(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *local_20;
  char *local_1c;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar4 = 0;
  }
  else {
    local_1c = (char *)FUN_08014c60(param_1);
    for (local_20 = param_2; *local_20 != '\0'; local_20 = local_20 + 1) {
      iVar1 = FUN_08014c34(*local_1c);
      iVar2 = FUN_08014c34(*local_20);
      if (iVar1 != iVar2) {
        return 0;
      }
      local_1c = local_1c + 1;
    }
    pcVar3 = (char *)FUN_08014c60(local_1c);
    if (((*pcVar3 == '=') || (*pcVar3 == ':')) || (*pcVar3 == ',')) {
      pcVar3 = pcVar3 + 1;
    }
    else if ((*local_1c != ' ') && (*local_1c != '\t')) {
      return 0;
    }
    local_1c = pcVar3;
    uVar4 = FUN_08014c60(local_1c);
  }
  return uVar4;
}


