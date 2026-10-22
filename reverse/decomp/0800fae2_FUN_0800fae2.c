
void FUN_0800fae2(int *param_1,uint *param_2)

{
  int *local_c;
  
  if (*param_2 == 0xffffffff) {
    local_c = (int *)param_1[4];
  }
  else {
    for (local_c = param_1 + 2; *(uint *)local_c[1] <= *param_2; local_c = (int *)local_c[1]) {
    }
  }
  param_2[1] = local_c[1];
  *(uint **)(param_2[1] + 8) = param_2;
  param_2[2] = (uint)local_c;
  local_c[1] = (int)param_2;
  param_2[4] = (uint)param_1;
  *param_1 = *param_1 + 1;
  return;
}


