
uint FUN_080166de(undefined4 param_1,float param_2,float param_3,undefined1 param_4,int param_5,
                 int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13,undefined4 param_14,undefined4 param_15)

{
  int iVar1;
  float fVar2;
  uint local_c;
  
  local_c = 0;
  iVar1 = FUN_08015d20(param_4);
  if (iVar1 != 0) {
    local_c = (uint)(300 < (uint)(param_9 - param_10));
    if (((param_5 == 0) || (*(char *)(param_5 + 0xd) != '\x01')) ||
       (300 < (uint)(param_9 - param_12))) {
      local_c = 1;
    }
    if ((param_7 != 0) &&
       (iVar1 = FUN_0801665a(*(undefined4 *)(param_7 + 0x10),param_1,param_14), iVar1 != 0)) {
      local_c = local_c | 0x100;
    }
    if ((param_7 != 0) &&
       (fVar2 = (float)FUN_08014788(*(undefined4 *)(param_7 + 4)), param_2 < fVar2)) {
      local_c = local_c | 0x400;
    }
    if ((param_5 != 0) &&
       (fVar2 = (float)FUN_08014788(*(undefined4 *)(param_5 + 0x1c)), param_3 < fVar2)) {
      local_c = local_c | 0x1000;
    }
  }
  iVar1 = FUN_08015d46(param_4);
  if (iVar1 != 0) {
    if (300 < (uint)(param_9 - param_11)) {
      local_c = local_c | 2;
    }
    if (((param_6 == 0) || (*(char *)(param_6 + 0xd) != '\x01')) ||
       (300 < (uint)(param_9 - param_13))) {
      local_c = local_c | 2;
    }
    if ((param_8 != 0) &&
       (iVar1 = FUN_0801665a(*(undefined4 *)(param_8 + 0x10),param_1,param_15), iVar1 != 0)) {
      local_c = local_c | 0x200;
    }
    if ((param_8 != 0) &&
       (fVar2 = (float)FUN_08014788(*(undefined4 *)(param_8 + 4)), param_2 < fVar2)) {
      local_c = local_c | 0x800;
    }
    if ((param_6 != 0) &&
       (fVar2 = (float)FUN_08014788(*(undefined4 *)(param_6 + 0x1c)), param_3 < fVar2)) {
      local_c = local_c | 0x2000;
    }
  }
  return local_c;
}


