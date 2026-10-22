
undefined4 FUN_0801e458(int *param_1,undefined4 *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_2 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_c = (char *)FUN_0801e1fa(*param_1);
    local_14 = (char *)0x0;
    local_10 = FUN_08022c18(local_c,&local_14,10);
    if (local_c == local_14) {
      uVar2 = 0;
    }
    else {
      *param_2 = local_10;
      local_14 = (char *)FUN_0801e1fa(local_14);
      if (*local_14 == ',') {
        *param_1 = (int)(local_14 + 1);
        uVar2 = 1;
      }
      else if (param_3 == '\0') {
        cVar1 = FUN_0801e23e(local_14);
        if (cVar1 == '\x01') {
          *param_1 = (int)local_14;
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


