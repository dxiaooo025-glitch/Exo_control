
bool FUN_080028d4(int param_1,char param_2)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0x9fffffff;
  if (param_2 == '\x01') {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20000000;
    do {
      FUN_080092b8(10);
      local_c = local_c + 10;
      iVar1 = FUN_08003b8a(param_1);
      if (iVar1 == 1) break;
    } while (local_c < 200);
  }
  else {
    if (param_2 != '\0') {
      return true;
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40000000;
    do {
      FUN_080092b8(10);
      local_c = local_c + 10;
      iVar1 = FUN_08003b8a(param_1);
      if (iVar1 == 0) break;
    } while (local_c < 200);
  }
  return local_c == 200;
}


