
undefined4 FUN_08008fac(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(DAT_0800901c + 0xc) & 4) == 4) {
    *(uint *)(DAT_0800901c + 0xc) = param_1 | *(uint *)(DAT_0800901c + 0xc) & 0xfffffff8;
    iVar1 = FUN_080092a0();
    do {
      if ((*(uint *)(DAT_0800901c + 4) & 0x2000) == 0x2000) {
        return 0;
      }
      iVar2 = FUN_080092a0();
    } while ((uint)(iVar2 - iVar1) < 0x3e9);
    uVar3 = 1;
  }
  else if (param_1 == (*(uint *)(DAT_0800901c + 0xc) & 7)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


