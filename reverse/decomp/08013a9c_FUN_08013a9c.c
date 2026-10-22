
bool FUN_08013a9c(undefined4 param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  undefined2 local_10 [2];
  byte local_c;
  undefined1 local_b;
  
  local_c = param_2 & 0x7f;
  local_10[0] = 0;
  local_b = param_3;
  cVar1 = FUN_08013974(param_1,&local_c,local_10,2);
  if (cVar1 == '\x01') {
    FUN_080092b8(1);
  }
  return cVar1 == '\x01';
}


