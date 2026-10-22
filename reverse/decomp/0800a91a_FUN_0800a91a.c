
uint FUN_0800a91a(int *param_1,int param_2)

{
  uint local_c;
  
  if (param_2 == 0x40) {
    local_c = *(uint *)(*param_1 + 0xa4);
  }
  else {
    local_c = *(uint *)(*param_1 + 0xb4);
  }
  local_c = local_c & 0x7f;
  return local_c;
}


