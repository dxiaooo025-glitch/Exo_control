
undefined4 FUN_08014f4c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *local_1c;
  int local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  
  if ((((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_18[0] = 0;
    local_c = FUN_08022a80(param_1,local_18);
    if (param_1 == local_18[0]) {
      uVar2 = 0;
    }
    else {
      local_1c = (char *)FUN_08014c60(local_18[0]);
      if (((*local_1c == ',') || (*local_1c == ':')) || (*local_1c == ';')) {
        local_1c = local_1c + 1;
      }
      iVar1 = FUN_08014c60(local_1c);
      local_10 = FUN_08022a80(iVar1,local_18);
      if (iVar1 == local_18[0]) {
        uVar2 = 0;
      }
      else {
        local_1c = (char *)FUN_08014c60(local_18[0]);
        if (((*local_1c == ',') || (*local_1c == ':')) || (*local_1c == ';')) {
          local_1c = local_1c + 1;
        }
        iVar1 = FUN_08014c60(local_1c);
        uVar2 = FUN_08022a80(iVar1,local_18);
        if (iVar1 == local_18[0]) {
          uVar2 = 0;
        }
        else {
          *param_2 = local_c;
          *param_3 = local_10;
          *param_4 = uVar2;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}


