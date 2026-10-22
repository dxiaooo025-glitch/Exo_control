
void FUN_0800b28c(int param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_14;
  uint *local_10;
  uint local_c;
  
  if (param_2[1] == 0) {
    local_c = *param_2 << 0x12 | param_2[4] | param_2[2];
  }
  else {
    local_c = *param_2 | param_2[4] | param_2[2] | 0x40000000;
  }
  uVar1 = param_2[8];
  uVar2 = param_2[7];
  uVar3 = param_2[6];
  uVar4 = param_2[5];
  uVar5 = param_2[3];
  local_10 = (uint *)(param_4 * *(int *)(param_1 + 0x68) * 4 + *(int *)(param_1 + 0x84));
  *local_10 = local_c;
  local_10[1] = uVar5 << 0x10 | uVar1 << 0x18 | uVar2 | uVar3 | uVar4;
  local_10 = local_10 + 2;
  for (local_14 = 0; local_14 < *(byte *)(DAT_0800b384 + param_2[3]); local_14 = local_14 + 4) {
    *local_10 = (uint)*(byte *)(local_14 + param_3) |
                (uint)*(byte *)(local_14 + 1 + param_3) << 8 |
                (uint)*(byte *)(local_14 + 3 + param_3) << 0x18 |
                (uint)*(byte *)(local_14 + 2 + param_3) << 0x10;
    local_10 = local_10 + 1;
  }
  return;
}


