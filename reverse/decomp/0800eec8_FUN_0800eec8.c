
void FUN_0800eec8(char *param_1,undefined1 *param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  char *local_10;
  byte local_9;
  
  if (param_1 != (char *)0x0) {
    iVar2 = FUN_0800ef6c(param_1);
    if ((uint)((iVar2 + 1) * 2) < 0x201) {
      sVar1 = FUN_0800ef6c(param_1);
      sVar1 = (sVar1 + 1) * 2;
    }
    else {
      sVar1 = 0x200;
    }
    *param_3 = sVar1;
    *param_2 = (char)*param_3;
    param_2[1] = 3;
    local_9 = 2;
    local_10 = param_1;
    while (*local_10 != '\0') {
      param_2[local_9] = *local_10;
      local_10 = local_10 + 1;
      param_2[(byte)(local_9 + 1)] = 0;
      local_9 = local_9 + 2;
    }
  }
  return;
}


