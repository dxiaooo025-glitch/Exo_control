
void FUN_08000f8c(uint *param_1,uint *param_2)

{
  uint local_c;
  
  local_c = *param_1;
  if ((((param_1 == DAT_080010c8) || (param_1 == (uint *)0x40000000)) || (param_1 == DAT_080010cc))
     || (((param_1 == DAT_080010d0 || (param_1 == DAT_080010d4)) || (param_1 == DAT_080010d8)))) {
    local_c = param_2[1] | local_c & 0xffffff8f;
  }
  if ((((param_1 == DAT_080010c8) || (param_1 == (uint *)0x40000000)) ||
      (((param_1 == DAT_080010cc ||
        ((((param_1 == DAT_080010d0 || (param_1 == DAT_080010d4)) || (param_1 == DAT_080010d8)) ||
         ((param_1 == DAT_080010dc || (param_1 == DAT_080010e0)))))) || (param_1 == DAT_080010e4))))
     || ((param_1 == DAT_080010e8 || (param_1 == DAT_080010ec)))) {
    local_c = param_2[3] | local_c & 0xfffffcff;
  }
  *param_1 = param_2[5] | local_c & 0xffffff7f;
  param_1[0xb] = param_2[2];
  param_1[10] = *param_2;
  if ((((param_1 == DAT_080010c8) || (param_1 == DAT_080010d8)) || (param_1 == DAT_080010dc)) ||
     ((param_1 == DAT_080010e0 || (param_1 == DAT_080010e4)))) {
    param_1[0xc] = param_2[4];
  }
  param_1[5] = 1;
  if ((param_1[4] & 1) == 1) {
    param_1[4] = param_1[4] & 0xfffffffe;
  }
  return;
}


