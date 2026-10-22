
void FUN_080092b8(uint param_1)

{
  int iVar1;
  int iVar2;
  uint local_c;
  
  iVar1 = FUN_080092a0();
  local_c = param_1;
  if (param_1 != 0xffffffff) {
    local_c = param_1 + *DAT_080092fc;
  }
  do {
    iVar2 = FUN_080092a0();
  } while ((uint)(iVar2 - iVar1) < local_c);
  return;
}


