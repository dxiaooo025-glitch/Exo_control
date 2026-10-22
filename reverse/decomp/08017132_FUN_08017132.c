
undefined4 FUN_08017132(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_9;
  
  local_9 = '\0';
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08013124(param_1,&local_9);
    if (iVar1 == 0) {
      if (local_9 == '\0') {
        if (*param_2 != '\0') {
          *param_2 = '\0';
          *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
          *(undefined4 *)(param_2 + 0x10) = param_3;
        }
        uVar2 = 1;
      }
      else {
        if (*param_2 != '\x01') {
          *param_2 = '\x01';
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
          *(undefined4 *)(param_2 + 0xc) = param_3;
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


