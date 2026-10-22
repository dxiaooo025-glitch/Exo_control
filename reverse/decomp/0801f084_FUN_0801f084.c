
bool FUN_0801f084(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = param_1;
  cVar1 = FUN_0801e3b8(&local_c,DAT_0801f198);
  if (((cVar1 == '\x01') ||
      (local_c = param_1, cVar1 = FUN_0801e3b8(&local_c,DAT_0801f19c), cVar1 == '\x01')) ||
     (local_c = param_1, cVar1 = FUN_0801e3b8(&local_c,DAT_0801f1a0), cVar1 == '\x01')) {
    cVar1 = FUN_0801e54e(&local_c,param_2 + 2,0);
    if (cVar1 == '\x01') {
      *param_2 = 6;
      param_2[3] = param_2[2];
    }
    return cVar1 == '\x01';
  }
  iVar2 = FUN_0801e270(param_1,DAT_0801f1a4);
  if (iVar2 != 0) {
    *param_2 = 6;
    param_2[2] = 1;
    param_2[3] = 1;
    return true;
  }
  iVar2 = FUN_0801e270(param_1,DAT_0801f1a8);
  if (iVar2 != 0) {
    *param_2 = 6;
    param_2[2] = 2;
    param_2[3] = 2;
    return true;
  }
  iVar2 = FUN_0801e270(param_1,DAT_0801f1ac);
  if ((iVar2 == 0) && (iVar2 = FUN_0801e270(param_1,DAT_0801f1b0), iVar2 == 0)) {
    return false;
  }
  *param_2 = 6;
  param_2[2] = 3;
  param_2[3] = 3;
  return true;
}


