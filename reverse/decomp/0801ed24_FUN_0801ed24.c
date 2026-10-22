
undefined4 FUN_0801ed24(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = param_1;
  cVar1 = FUN_0801e3b8(&local_c,DAT_0801ee3c);
  if (cVar1 == '\x01') {
    cVar1 = FUN_0801e502(&local_c,&local_10,1);
    if ((((cVar1 == '\x01') && (cVar1 = FUN_0801e458(&local_c,param_2 + 0x38,1), cVar1 == '\x01'))
        && (cVar1 = FUN_0801e502(&local_c,&local_14,1), cVar1 == '\x01')) &&
       (((cVar1 = FUN_0801e502(&local_c,&local_18,1), cVar1 == '\x01' &&
         (cVar1 = FUN_0801e502(&local_c,&local_1c,1), cVar1 == '\x01')) &&
        (cVar1 = FUN_0801e458(&local_c,param_2 + 0x20,0), cVar1 == '\x01')))) {
      *param_2 = 0xd;
      param_2[2] = 3;
      *(undefined4 *)(param_2 + 0x34) = local_10;
      *(undefined4 *)(param_2 + 0x48) = local_14;
      *(undefined4 *)(param_2 + 0x10) = local_18;
      *(undefined4 *)(param_2 + 0xc) = local_1c;
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


