
bool FUN_08015c9a(undefined1 param_1,undefined1 param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_08015c70(param_1);
  bVar2 = FUN_08015c70(param_2);
  return (~bVar2 & bVar1) == 0;
}


