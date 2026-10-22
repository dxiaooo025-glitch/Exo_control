
undefined1 FUN_0800e2cc(int param_1,byte *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 local_9;
  
  local_9 = 0;
  bVar2 = *param_2 & 0x60;
  if (bVar2 == 0x40) {
LAB_0800e2f2:
    local_9 = (**(code **)(*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xae) * 4) + 8))
                        (param_1,param_2);
  }
  else {
    if (bVar2 < 0x41) {
      if ((*param_2 & 0x60) == 0) {
        switch(param_2[1]) {
        case 0:
          FUN_0800ed34(param_1,param_2);
          return 0;
        case 1:
          FUN_0800edee(param_1,param_2);
          return 0;
        default:
          FUN_0800eea6(param_1,param_2);
          return 0;
        case 3:
          FUN_0800ed9c(param_1,param_2);
          return 0;
        case 5:
          FUN_0800eaec(param_1,param_2);
          return 0;
        case 6:
          FUN_0800e7c4(param_1,param_2);
          return 0;
        case 8:
          FUN_0800ecc8(param_1,param_2);
          return 0;
        case 9:
          uVar1 = FUN_0800eb74(param_1,param_2);
          return uVar1;
        }
      }
      if (bVar2 == 0x20) goto LAB_0800e2f2;
    }
    FUN_0800eea6(param_1,param_2);
  }
  return local_9;
}


