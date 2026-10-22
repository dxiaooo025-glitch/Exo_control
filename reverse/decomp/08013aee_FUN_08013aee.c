
undefined4 FUN_08013aee(undefined4 param_1,undefined2 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0x92;
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  if ((param_2 == (undefined2 *)0x0) ||
     (cVar1 = FUN_08013974(param_1,&local_10,&local_18,8), cVar1 != '\x01')) {
    uVar2 = 0;
  }
  else {
    *param_2 = local_18._2_2_;
    param_2[1] = (undefined2)local_14;
    param_2[2] = local_14._2_2_;
    uVar2 = 1;
  }
  return uVar2;
}


