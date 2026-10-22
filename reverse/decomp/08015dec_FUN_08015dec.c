
undefined4
FUN_08015dec(char param_1,int param_2,int param_3,char param_4,char param_5,char param_6,
            char param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == '\0') {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08015d20(param_1);
    if ((iVar1 == 0) ||
       ((((param_2 != 0 && (*(char *)(param_2 + 0xc) == '\x01')) && (param_4 == '\x01')) &&
        (param_6 == '\x01')))) {
      iVar1 = FUN_08015d46(param_1);
      if ((iVar1 == 0) ||
         (((param_3 != 0 && (*(char *)(param_3 + 0xc) == '\x01')) &&
          ((param_5 == '\x01' && (param_7 == '\x01')))))) {
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
  return uVar2;
}


