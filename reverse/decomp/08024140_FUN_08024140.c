
int FUN_08024140(uint param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r2;
  uint uVar4;
  uint uVar5;
  uint local_28;
  int *local_24;
  int *piStack_20;
  
  local_28 = param_3;
  local_24 = param_4;
  piStack_20 = param_5;
  iVar1 = FUN_08023970(param_3,1);
  if (iVar1 == 0) {
    FUN_08024a80(DAT_080241ec,0x30f,0,DAT_080241e8);
  }
  uVar5 = (param_2 & 0x7fffffff) >> 0x14;
  local_24 = (int *)(param_2 & 0xfffff);
  if (uVar5 != 0) {
    local_24 = (int *)((uint)local_24 | 0x100000);
  }
  if (param_1 == 0) {
    iVar3 = FUN_08023b98(&local_24);
    *(int **)(iVar1 + 0x14) = local_24;
    uVar2 = iVar3 + 0x20;
    iVar3 = 1;
  }
  else {
    local_28 = param_1;
    uVar2 = FUN_08023b98(&local_28);
    if (uVar2 == 0) {
      *(uint *)(iVar1 + 0x14) = local_28;
    }
    else {
      uVar4 = (int)local_24 << (0x20 - uVar2 & 0xff);
      local_24 = (int *)((uint)local_24 >> (uVar2 & 0xff));
      *(uint *)(iVar1 + 0x14) = uVar4 | local_28;
    }
    *(int **)(iVar1 + 0x18) = local_24;
    if (local_24 == (int *)0x0) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
  }
  *(int *)(iVar1 + 0x10) = iVar3;
  if (uVar5 == 0) {
    *param_4 = uVar2 - 0x432;
    iVar3 = FUN_08023b54(*(undefined4 *)(iVar1 + iVar3 * 4 + 0x10));
    iVar3 = extraout_r2 * 0x20 - iVar3;
  }
  else {
    *param_4 = (uVar5 - 0x433) + uVar2;
    iVar3 = 0x35 - uVar2;
  }
  *param_5 = iVar3;
  return iVar1;
}


