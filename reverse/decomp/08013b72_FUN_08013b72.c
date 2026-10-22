
undefined4 FUN_08013b72(undefined4 param_1,undefined2 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  local_10 = 0x82;
  local_c = 0;
  local_a = 0;
  local_18 = 0;
  uStack_17 = 0;
  uStack_15 = 0;
  local_14 = 0;
  uStack_13 = 0;
  local_12 = 0;
  if ((param_2 == (undefined2 *)0x0) ||
     (cVar1 = FUN_08013974(param_1,&local_10,&local_18,7), cVar1 != '\x01')) {
    uVar2 = 0;
  }
  else {
    *param_2 = uStack_17;
    param_2[1] = CONCAT11(local_14,uStack_15);
    param_2[2] = CONCAT11(local_12,uStack_13);
    uVar2 = 1;
  }
  return uVar2;
}


