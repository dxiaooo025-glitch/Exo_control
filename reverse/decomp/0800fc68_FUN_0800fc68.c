
undefined4
FUN_0800fc68(undefined4 param_1,undefined4 param_2,ushort param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
  iVar1 = FUN_08010704((uint)param_3 << 2);
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    local_c = FUN_08010704(0x54);
    if (local_c == 0) {
      FUN_080108a0(iVar1);
    }
    else {
      *(int *)(local_c + 0x30) = iVar1;
    }
  }
  if (local_c == 0) {
    local_10 = 0xffffffff;
  }
  else {
    *(undefined1 *)(local_c + 0x51) = 0;
    FUN_0800fcf2(param_1,param_2,param_3,param_4,param_5,param_6,local_c,0);
    FUN_0800fe04(local_c);
    local_10 = 1;
  }
  return local_10;
}


