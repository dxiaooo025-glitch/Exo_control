
undefined1 FUN_0800dbae(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  byte bVar2;
  
  FUN_0800ee32(param_1 + 0x2aa,param_2);
  *(undefined4 *)(param_1 + 0x294) = 1;
  *(uint *)(param_1 + 0x298) = (uint)*(ushort *)(param_1 + 0x2b0);
  bVar2 = *(byte *)(param_1 + 0x2aa) & 0x1f;
  if (bVar2 == 2) {
    uVar1 = FUN_0800e488(param_1,param_1 + 0x2aa);
    return uVar1;
  }
  if (bVar2 < 3) {
    if ((*(byte *)(param_1 + 0x2aa) & 0x1f) == 0) {
      uVar1 = FUN_0800e2cc(param_1,param_1 + 0x2aa);
      return uVar1;
    }
    if (bVar2 == 1) {
      uVar1 = FUN_0800e3b0(param_1,param_1 + 0x2aa);
      return uVar1;
    }
  }
  uVar1 = FUN_080112dc(param_1,*(byte *)(param_1 + 0x2aa) & 0x80);
  return uVar1;
}


