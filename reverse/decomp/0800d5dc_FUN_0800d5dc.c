
undefined4 FUN_0800d5dc(int *param_1,uint param_2,char param_3,int param_4,uint param_5)

{
  int iVar1;
  
  do {
    do {
      do {
        if ((param_2 == (param_2 & *(uint *)(*param_1 + 0x1c))) != (bool)param_3) {
          return 0;
        }
      } while (param_5 == 0xffffffff);
      iVar1 = FUN_080092a0();
      if ((param_5 < (uint)(iVar1 - param_4)) || (param_5 == 0)) {
        return 3;
      }
    } while ((((*(uint *)*param_1 & 4) == 0) || (param_2 == 0x80)) || (param_2 == 0x40));
    if ((*(uint *)(*param_1 + 0x1c) & 8) == 8) {
      *(undefined4 *)(*param_1 + 0x20) = 8;
      FUN_0800d6b8(param_1);
      param_1[0x24] = 8;
      *(undefined1 *)(param_1 + 0x21) = 0;
      return 1;
    }
  } while ((*(uint *)(*param_1 + 0x1c) & 0x800) != 0x800);
  *(undefined4 *)(*param_1 + 0x20) = 0x800;
  FUN_0800d6b8(param_1);
  param_1[0x24] = 0x20;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return 3;
}


