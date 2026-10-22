
undefined4 FUN_0800a304(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint local_10;
  uint local_c;
  
  if ((*(char *)(param_1 + 0x98) == '\x01') || (*(char *)(param_1 + 0x98) == '\x02')) {
    if (*param_2 == 0) {
      if (param_2[3] == 7) {
        local_c = param_2[6] | param_2[4] << 0x10 | param_2[7] << 8 | 0x38000000;
      }
      else {
        local_c = param_2[5] | param_2[2] << 0x1e | param_2[3] << 0x1b | param_2[4] << 0x10;
      }
      *(uint *)(param_2[1] * 4 + *(int *)(param_1 + 0x6c)) = local_c;
    }
    else {
      if (param_2[3] == 7) {
        local_10 = param_2[6];
      }
      else {
        local_10 = param_2[5] | param_2[2] << 0x1e;
      }
      puVar1 = (uint *)(param_2[1] * 8 + *(int *)(param_1 + 0x70));
      *puVar1 = param_2[4] | param_2[3] << 0x1d;
      puVar1[1] = local_10;
    }
    uVar2 = 0;
  }
  else {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 2;
    uVar2 = 1;
  }
  return uVar2;
}


