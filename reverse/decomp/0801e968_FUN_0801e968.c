
undefined4 FUN_0801e968(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_14 = 0;
  local_c = param_1;
  cVar1 = FUN_0801e3b8(&local_c,DAT_0801ea68);
  if (cVar1 == '\x01') {
    cVar1 = FUN_0801e54e(&local_c,param_2 + 2,1);
    if ((((cVar1 == '\x01') && (cVar1 = FUN_0801e458(&local_c,param_2 + 0x2c,1), cVar1 == '\x01'))
        && (cVar1 = FUN_0801e458(&local_c,param_2 + 0x30,1), cVar1 == '\x01')) &&
       (((cVar1 = FUN_0801e502(&local_c,&local_10,1), cVar1 == '\x01' &&
         (cVar1 = FUN_0801e502(&local_c,&local_14,1), cVar1 == '\x01')) &&
        (cVar1 = FUN_0801e458(&local_c,param_2 + 0x20,0), cVar1 == '\x01')))) {
      *param_2 = 0xb;
      *(undefined4 *)(param_2 + 0x34) = local_10;
      *(undefined4 *)(param_2 + 0xc) = local_14;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


