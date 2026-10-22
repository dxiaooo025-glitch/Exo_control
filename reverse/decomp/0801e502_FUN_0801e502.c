
undefined4 FUN_0801e502(undefined4 param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  cVar1 = FUN_0801e458(param_1,&local_c,param_3);
  if (cVar1 == '\x01') {
    if (local_c < 0) {
      uVar2 = 0;
    }
    else {
      *param_2 = local_c;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


