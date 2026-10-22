
undefined4 FUN_08013a30(undefined4 param_1,byte param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 local_10;
  undefined1 local_e;
  byte local_c [4];
  
  local_c[0] = param_2 | 0x80;
  local_c[1] = 0;
  local_c[2] = 0;
  local_10 = (undefined2)*DAT_08013a98;
  local_e = (undefined1)((uint)*DAT_08013a98 >> 0x10);
  if ((param_3 == (undefined1 *)0x0) ||
     (cVar1 = FUN_08013974(param_1,local_c,&local_10,3), cVar1 != '\x01')) {
    uVar2 = 0;
  }
  else {
    *param_3 = local_e;
    uVar2 = 1;
  }
  return uVar2;
}


