
undefined4 FUN_080021e4(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_10;
  uint local_c;
  
  iVar1 = *param_1;
  if ((uint)param_1[param_2 * 9 + 9] < (uint)param_1[param_2 * 9 + 10]) {
    uVar2 = 1;
  }
  else {
    local_c = param_1[param_2 * 9 + 9] - param_1[param_2 * 9 + 10];
    if ((uint)param_1[param_2 * 9 + 7] < local_c) {
      local_c = param_1[param_2 * 9 + 7];
    }
    while (((local_10 = local_c + 3 >> 2,
            local_10 <= (*(uint *)(iVar1 + param_2 * 0x20 + 0x918) & 0xffff) &&
            ((uint)param_1[param_2 * 9 + 10] < (uint)param_1[param_2 * 9 + 9])) &&
           (param_1[param_2 * 9 + 9] != 0))) {
      local_c = param_1[param_2 * 9 + 9] - param_1[param_2 * 9 + 10];
      if ((uint)param_1[param_2 * 9 + 7] < local_c) {
        local_c = param_1[param_2 * 9 + 7];
      }
      FUN_080036c0(iVar1,param_1[param_2 * 9 + 8],param_2 & 0xff,local_c & 0xffff,
                   *(undefined1 *)((int)param_1 + 6));
      param_1[param_2 * 9 + 8] = param_1[param_2 * 9 + 8] + local_c;
      param_1[param_2 * 9 + 10] = param_1[param_2 * 9 + 10] + local_c;
    }
    if ((uint)param_1[param_2 * 9 + 9] <= (uint)param_1[param_2 * 9 + 10]) {
      *(uint *)(iVar1 + 0x834) = ~(1 << (param_2 & 0xf)) & *(uint *)(iVar1 + 0x834);
    }
    uVar2 = 0;
  }
  return uVar2;
}


