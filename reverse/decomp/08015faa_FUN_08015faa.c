
uint FUN_08015faa(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  uint local_c;
  
  local_c = 0;
  iVar2 = FUN_08015d20(param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_0801340c(param_1,param_3);
    FUN_080146ce(cVar1,param_5);
    if (cVar1 != '\0') {
      local_c = 4;
    }
  }
  iVar2 = FUN_08015d46(param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_0801340c(param_1,param_4);
    FUN_080146ce(cVar1,param_6);
    if (cVar1 != '\0') {
      local_c = local_c | 8;
    }
  }
  return local_c;
}


