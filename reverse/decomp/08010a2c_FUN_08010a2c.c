
void FUN_08010a2c(uint *param_1)

{
  uint *local_14;
  uint *local_c;
  
  for (local_c = DAT_08010ad8; (uint *)*local_c < param_1; local_c = (uint *)*local_c) {
  }
  local_14 = param_1;
  if (param_1 == (uint *)(local_c[1] + (int)local_c)) {
    local_c[1] = local_c[1] + param_1[1];
    local_14 = local_c;
  }
  if ((int)local_14 + local_14[1] == *local_c) {
    if (*local_c == *DAT_08010adc) {
      *local_14 = *DAT_08010adc;
    }
    else {
      local_14[1] = local_14[1] + *(int *)(*local_c + 4);
      *local_14 = *(uint *)*local_c;
    }
  }
  else {
    *local_14 = *local_c;
  }
  if (local_c != local_14) {
    *local_c = (uint)local_14;
  }
  return;
}


