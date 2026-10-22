
uint FUN_08024b92(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  iVar2 = param_3[2] + -1;
  param_3[2] = iVar2;
  if ((-1 < iVar2) || ((param_3[6] <= iVar2 && (param_2 != 10)))) {
    puVar4 = (undefined1 *)*param_3;
    *param_3 = (int)(puVar4 + 1);
    *puVar4 = (char)param_2;
    return param_2;
  }
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) == 0)) {
    FUN_08022e3c();
  }
  param_3[2] = param_3[6];
  uVar3 = (uint)*(ushort *)(param_3 + 3);
  iVar1 = uVar3 << 0x1c;
  if (((iVar1 < 0) && (uVar3 = 0, param_3[4] != 0)) ||
     (iVar2 = FUN_08024e90(param_1,param_3,iVar1,uVar3,iVar2), iVar2 == 0)) {
    iVar2 = *param_3 - param_3[4];
    uVar3 = param_2 & 0xff;
    if (param_3[5] <= iVar2) {
      iVar1 = FUN_080249dc(param_1,param_3);
      iVar2 = 0;
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    param_3[2] = param_3[2] + -1;
    puVar4 = (undefined1 *)*param_3;
    *param_3 = (int)(puVar4 + 1);
    *puVar4 = (char)param_2;
    if (param_3[5] != iVar2 + 1) {
      if (-1 < (int)((uint)*(ushort *)(param_3 + 3) << 0x1f)) {
        return uVar3;
      }
      if (uVar3 != 10) {
        return uVar3;
      }
    }
    iVar2 = FUN_080249dc(param_1,param_3);
    if (iVar2 == 0) {
      return uVar3;
    }
  }
  return 0xffffffff;
}


