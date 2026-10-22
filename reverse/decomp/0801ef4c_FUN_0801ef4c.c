
undefined4 FUN_0801ef4c(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = param_1;
  cVar1 = FUN_0801e3b8(&local_c,DAT_0801f080);
  if (cVar1 == '\x01') {
    cVar1 = FUN_0801e502(&local_c,&local_10,1);
    if ((cVar1 == '\x01') && (((local_10 == 1 || (local_10 == 2)) || (local_10 == 3)))) {
      if (local_10 == 3) {
        cVar1 = FUN_0801e458(&local_c,&local_18,1);
        if (((cVar1 != '\x01') || (cVar1 = FUN_0801e458(&local_c,&local_1c,0), cVar1 != '\x01')) ||
           ((local_18 == 0 || (local_1c == 0)))) {
          return 0;
        }
        if (local_18 < 0) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = 1;
        }
        param_2[0x54] = uVar2;
        if (local_1c < 0) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = 1;
        }
        param_2[0x55] = uVar2;
      }
      else {
        cVar1 = FUN_0801e458(&local_c,&local_14,0);
        if ((cVar1 != '\x01') || (local_14 == 0)) {
          return 0;
        }
        if (local_14 < 0) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = 1;
        }
        param_2[4] = uVar2;
      }
      *param_2 = 0xf;
      param_2[2] = (char)local_10;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


