
int FUN_08017100(int param_1,int param_2,uint param_3)

{
  int local_c;
  
  local_c = param_3 + param_1;
  if (param_3 <= (uint)(param_2 - local_c)) {
    local_c = param_2;
  }
  return local_c;
}


