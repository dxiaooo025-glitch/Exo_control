
undefined1 FUN_0800651c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_08006678[10] & 3) == 3) {
    return 1;
  }
  *DAT_08006678 = *DAT_08006678 & 0xfbffffff;
  iVar1 = FUN_080092a0();
  do {
    if ((*DAT_08006678 & 0x8000000) == 0) {
      DAT_08006678[10] = *param_1 << 0xc | DAT_08006678[10] & 0xfffc0fff;
      DAT_08006678[0xe] =
           (param_1[4] + -1) * 0x1000000 & 0x7f000000U |
           param_1[1] - 1U & 0x1ff | (param_1[2] + -1) * 0x200 & 0xffffU |
           (param_1[3] + -1) * 0x10000 & 0x7f0000U;
      DAT_08006678[0xb] = param_1[5] | DAT_08006678[0xb] & 0xffffff3f;
      DAT_08006678[0xb] = param_1[6] | DAT_08006678[0xb] & 0xffffffdf;
      DAT_08006678[0xb] = DAT_08006678[0xb] & 0xffffffef;
      DAT_08006678[0xf] = DAT_0800667c & DAT_08006678[0xf] | param_1[7] << 3;
      DAT_08006678[0xb] = DAT_08006678[0xb] | 0x10;
      if (param_2 == 0) {
        DAT_08006678[0xb] = DAT_08006678[0xb] | 0x80000;
      }
      else if (param_2 == 1) {
        DAT_08006678[0xb] = DAT_08006678[0xb] | 0x100000;
      }
      else {
        DAT_08006678[0xb] = DAT_08006678[0xb] | 0x200000;
      }
      *DAT_08006678 = *DAT_08006678 | 0x4000000;
      iVar1 = FUN_080092a0();
      do {
        if ((*DAT_08006678 & 0x8000000) != 0) {
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


