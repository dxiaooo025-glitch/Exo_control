
undefined1 FUN_08002182(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *local_c;
  
  if ((char)param_2 < '\0') {
    iVar1 = (param_2 & 0xf) * 9 + 5;
  }
  else {
    iVar1 = (param_2 & 0xf) * 9 + 0x95;
  }
  local_c = param_1 + iVar1;
  uVar2 = FUN_0800356c(*param_1,local_c);
  return uVar2;
}


