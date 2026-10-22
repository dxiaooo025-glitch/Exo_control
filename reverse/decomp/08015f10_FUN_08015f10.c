
uint FUN_08015f10(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  
  local_c = 0;
  iVar2 = FUN_08015d20(param_3);
  if (iVar2 != 0) {
    uVar1 = FUN_080131d8(param_1,param_4);
    FUN_080146ce(uVar1,param_6);
    local_c = FUN_08014750(uVar1,param_6,4);
  }
  iVar2 = FUN_08015d46(param_3);
  if (iVar2 != 0) {
    uVar1 = FUN_080131d8(param_2,param_5);
    FUN_080146ce(uVar1,param_7);
    uVar3 = FUN_08014750(uVar1,param_7,8);
    local_c = local_c | uVar3;
  }
  return local_c;
}


