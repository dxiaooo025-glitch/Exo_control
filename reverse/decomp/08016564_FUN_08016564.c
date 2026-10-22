
uint FUN_08016564(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_c;
  
  local_c = 0;
  iVar2 = FUN_08015d20(param_3);
  if (iVar2 != 0) {
    uVar3 = FUN_08016148(param_1,param_6);
    uVar1 = FUN_08013370(param_4,uVar3);
    FUN_080146ce(uVar1,param_8);
    *(undefined4 *)(param_6 + 0x24) = param_1;
    *(float *)(param_6 + 0x2c) = *(float *)(param_6 + 0x24) - *(float *)(param_6 + 0x1c);
    *(undefined4 *)(param_6 + 0x34) = 0;
    local_c = FUN_08014750(uVar1,param_8,4);
  }
  iVar2 = FUN_08015d46(param_3);
  if (iVar2 != 0) {
    uVar3 = FUN_08016148(param_2,param_7);
    uVar1 = FUN_08013370(param_5,uVar3);
    FUN_080146ce(uVar1,param_9);
    *(undefined4 *)(param_7 + 0x24) = param_2;
    *(float *)(param_7 + 0x2c) = *(float *)(param_7 + 0x24) - *(float *)(param_7 + 0x1c);
    *(undefined4 *)(param_7 + 0x34) = 0;
    uVar4 = FUN_08014750(uVar1,param_9,8);
    local_c = local_c | uVar4;
  }
  return local_c;
}


