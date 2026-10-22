
uint FUN_08015cdc(byte param_1)

{
  uint local_c;
  
  local_c = 0;
  if ((param_1 & 1) != 0) {
    local_c = 0x5555;
  }
  if ((param_1 & 2) != 0) {
    local_c = local_c | 0xaaaa;
  }
  return local_c;
}


