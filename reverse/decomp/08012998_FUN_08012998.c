
undefined4 FUN_08012998(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [20];
  int local_20;
  int local_14;
  int local_10;
  uint local_c;
  
  if (param_1 < 0x10) {
    FUN_080091b0(0x1c,param_1,0);
    FUN_080091e4(0x1c);
    *DAT_08012a5c = param_1;
    *(uint *)(DAT_08012a60 + 0xe8) = *(uint *)(DAT_08012a60 + 0xe8) | 1;
    FUN_08004bdc(auStack_34,auStack_38);
    local_10 = local_20;
    if (local_20 == 0) {
      local_c = FUN_08004b84();
    }
    else {
      iVar1 = FUN_08004b84();
      local_c = iVar1 << 1;
    }
    local_14 = (uint)((ulonglong)DAT_08012a64 * (ulonglong)local_c >> 0x32) - 1;
    *DAT_08012a68 = 0x40000000;
    DAT_08012a68[3] = 999;
    DAT_08012a68[1] = local_14;
    DAT_08012a68[4] = 0;
    DAT_08012a68[2] = 0;
    iVar1 = FUN_08000b5c(DAT_08012a68);
    if (iVar1 == 0) {
      uVar2 = FUN_08000c20(DAT_08012a68);
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


