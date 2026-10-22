
undefined4 FUN_0800d488(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[0x24] = 0;
  uVar2 = FUN_080092a0();
  if (((*(uint *)*param_1 & 8) == 8) &&
     (iVar3 = FUN_0800d5dc(param_1,0x200000,0,uVar2,0x1ffffff), iVar3 != 0)) {
    do {
      ExclusiveAccess((uint *)*param_1);
      bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
    } while (!bVar1);
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffff7f;
    param_1[0x22] = 0x20;
    *(undefined1 *)(param_1 + 0x21) = 0;
    uVar2 = 3;
  }
  else if (((*(uint *)*param_1 & 4) == 4) &&
          (iVar3 = FUN_0800d5dc(param_1,0x400000,0,uVar2,0x1ffffff), iVar3 != 0)) {
    do {
      ExclusiveAccess((uint *)*param_1);
      bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
    } while (!bVar1);
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffedf;
    do {
      ExclusiveAccess((uint *)(*param_1 + 8));
      bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 8));
    } while (!bVar1);
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xfffffffe;
    param_1[0x23] = 0x20;
    *(undefined1 *)(param_1 + 0x21) = 0;
    uVar2 = 3;
  }
  else {
    param_1[0x22] = 0x20;
    param_1[0x23] = 0x20;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    uVar2 = 0;
  }
  return uVar2;
}


