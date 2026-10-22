
undefined4 FUN_08011970(int param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint local_c;
  
  if (((param_1 != 0) && (param_2 != (uint *)0x0)) && (*param_2 != 0)) {
    local_c = 0;
    while( true ) {
      if (*param_2 <= local_c) break;
      bVar1 = *(byte *)(local_c + param_1);
      if ((bVar1 == 0xd) || (bVar1 == 10)) {
        if (*DAT_08011a64 != 0) {
          FUN_080118f0(DAT_08011a68,*DAT_08011a64);
          *DAT_08011a64 = 0;
        }
      }
      else if ((bVar1 == 8) || (bVar1 == 0x7f)) {
        if (*DAT_08011a64 != 0) {
          *DAT_08011a64 = *DAT_08011a64 - 1;
        }
      }
      else if ((0x1f < bVar1) && (bVar1 < 0x7f)) {
        if ((*DAT_08011a64 == 0) && ((*param_2 == 1 && (iVar2 = FUN_08011898(bVar1), iVar2 != 0))))
        {
          *DAT_08011a6c = bVar1;
        }
        if (*DAT_08011a64 < 0x5f) {
          *(byte *)(DAT_08011a68 + *DAT_08011a64) = bVar1;
          *DAT_08011a64 = *DAT_08011a64 + 1;
        }
        else {
          *DAT_08011a64 = 0;
        }
      }
      local_c = local_c + 1;
    }
  }
  FUN_0800f918(DAT_08011a70,param_1);
  FUN_0800f9d4(DAT_08011a70);
  return 0;
}


