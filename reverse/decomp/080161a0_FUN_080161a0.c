
uint FUN_080161a0(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char local_e;
  char local_d;
  uint local_c;
  
  local_c = 0;
  iVar1 = FUN_08015d20(param_3);
  if (iVar1 != 0) {
    local_d = FUN_0801340c(param_1,param_4);
    FUN_080146ce(local_d,param_6);
    if (local_d == '\0') {
      local_d = FUN_08013484(param_2,param_4);
      FUN_080146ce(local_d,param_6);
    }
    if (local_d != '\0') {
      local_c = 4;
    }
  }
  iVar1 = FUN_08015d46(param_3);
  if (iVar1 != 0) {
    local_e = FUN_0801340c(param_1,param_5);
    FUN_080146ce(local_e,param_7);
    if (local_e == '\0') {
      local_e = FUN_08013484(param_2,param_5);
      FUN_080146ce(local_e,param_7);
    }
    if (local_e != '\0') {
      local_c = local_c | 8;
    }
  }
  return local_c;
}


