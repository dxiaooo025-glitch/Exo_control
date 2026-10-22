
undefined1 FUN_08006680(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_080067dc[10] & 3) == 3) {
    return 1;
  }
  *DAT_080067dc = *DAT_080067dc & 0xefffffff;
  iVar1 = FUN_080092a0();
  do {
    if ((*DAT_080067dc & 0x20000000) == 0) {
      DAT_080067dc[10] = *param_1 << 0x14 | DAT_080067dc[10] & 0xfc0fffff;
      DAT_080067dc[0x10] =
           (param_1[4] + -1) * 0x1000000 & 0x7f000000U |
           param_1[1] - 1U & 0x1ff | (param_1[2] + -1) * 0x200 & 0xffffU |
           (param_1[3] + -1) * 0x10000 & 0x7f0000U;
      DAT_080067dc[0xb] = param_1[5] | DAT_080067dc[0xb] & 0xfffff3ff;
      DAT_080067dc[0xb] = param_1[6] | DAT_080067dc[0xb] & 0xfffffdff;
      DAT_080067dc[0xb] = DAT_080067dc[0xb] & 0xfffffeff;
      DAT_080067dc[0x11] = DAT_080067e0 & DAT_080067dc[0x11] | param_1[7] << 3;
      DAT_080067dc[0xb] = DAT_080067dc[0xb] | 0x100;
      if (param_2 == 0) {
        DAT_080067dc[0xb] = DAT_080067dc[0xb] | 0x400000;
      }
      else if (param_2 == 1) {
        DAT_080067dc[0xb] = DAT_080067dc[0xb] | 0x800000;
      }
      else {
        DAT_080067dc[0xb] = DAT_080067dc[0xb] | 0x1000000;
      }
      *DAT_080067dc = *DAT_080067dc | 0x10000000;
      iVar1 = FUN_080092a0();
      do {
        if ((*DAT_080067dc & 0x20000000) != 0) {
          return 0;
        }
        iVar2 = FUN_080092a0();
      } while ((uint)(iVar2 - iVar1) < 3);
      return 3;
    }
    iVar2 = FUN_080092a0();
  } while ((uint)(iVar2 - iVar1) < 3);
  return 3;
}


