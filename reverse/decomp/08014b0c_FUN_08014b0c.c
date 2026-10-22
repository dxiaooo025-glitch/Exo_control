
float FUN_08014b0c(float param_1,float param_2)

{
  float local_c;
  
  local_c = param_1 - param_2;
  if (local_c <= DAT_08014b84) {
    if (local_c < DAT_08014b8c) {
      local_c = local_c + DAT_08014b88;
    }
  }
  else {
    local_c = local_c - DAT_08014b88;
  }
  return local_c;
}


