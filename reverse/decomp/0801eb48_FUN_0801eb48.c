
undefined4 FUN_0801eb48(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_c = 0;
  local_10 = param_1;
  cVar1 = FUN_0801e3b8(&local_10,DAT_0801ed20);
  if (cVar1 == '\x01') {
    cVar1 = FUN_0801e54e(&local_10,param_2 + 2,1);
    if ((((cVar1 == '\x01') && (cVar1 = FUN_0801e502(&local_10,&local_14,1), cVar1 == '\x01')) &&
        (cVar1 = FUN_0801e458(&local_10,param_2 + 0x2c,1), cVar1 == '\x01')) &&
       ((cVar1 = FUN_0801e458(&local_10,param_2 + 0x38,1), cVar1 == '\x01' &&
        (cVar1 = FUN_0801e502(&local_10,&local_18,1), cVar1 == '\x01')))) {
      local_c = local_10;
      cVar1 = FUN_0801e502(&local_10,&local_1c,1);
      if (((cVar1 != '\x01') || (cVar1 = FUN_0801e502(&local_10,&local_20,1), cVar1 != '\x01')) ||
         ((cVar1 = FUN_0801e458(&local_10,param_2 + 0x20,1), cVar1 != '\x01' ||
          (cVar1 = FUN_0801e458(&local_10,param_2 + 0x14,0), cVar1 != '\x01')))) {
        local_10 = local_c;
        local_1c = 10000;
        cVar1 = FUN_0801e502(&local_10,&local_20,1);
        if (((cVar1 != '\x01') ||
            (cVar1 = FUN_0801e458(&local_10,param_2 + 0x20,1), cVar1 != '\x01')) ||
           (cVar1 = FUN_0801e458(&local_10,param_2 + 0x14,0), cVar1 != '\x01')) {
          return 0;
        }
      }
      *param_2 = 0xc;
      *(undefined4 *)(param_2 + 0x34) = local_14;
      *(undefined4 *)(param_2 + 0x48) = local_18;
      *(undefined4 *)(param_2 + 0x10) = local_1c;
      *(undefined4 *)(param_2 + 0xc) = local_20;
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


