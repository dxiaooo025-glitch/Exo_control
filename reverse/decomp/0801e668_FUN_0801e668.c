
undefined4 FUN_0801e668(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = param_1;
  cVar1 = FUN_0801e3b8(&local_c,DAT_0801e744);
  if (cVar1 == '\x01') {
    cVar1 = FUN_0801e54e(&local_c,param_2 + 2,1);
    if ((((cVar1 == '\x01') && (cVar1 = FUN_0801e458(&local_c,param_2 + 0x14,1), cVar1 == '\x01'))
        && (cVar1 = FUN_0801e458(&local_c,param_2 + 0x18,1), cVar1 == '\x01')) &&
       ((cVar1 = FUN_0801e502(&local_c,&local_10,1), cVar1 == '\x01' &&
        (cVar1 = FUN_0801e458(&local_c,param_2 + 0x20,0), cVar1 == '\x01')))) {
      *param_2 = 8;
      *(undefined4 *)(param_2 + 0xc) = local_10;
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


