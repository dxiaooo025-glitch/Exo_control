
void FUN_08015e92(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_08015d20(param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_08015d20(param_1);
    if (cVar1 != '\x01') {
      uVar3 = FUN_080131a4(param_3);
      FUN_080146ce(uVar3,param_5);
    }
  }
  iVar2 = FUN_08015d46(param_2);
  if (iVar2 != 0) {
    cVar1 = FUN_08015d46(param_1);
    if (cVar1 != '\x01') {
      uVar3 = FUN_080131a4(param_4);
      FUN_080146ce(uVar3,param_6);
    }
  }
  return;
}


