
undefined4 FUN_08023d74(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((param_3 & 3) != 0) {
    param_2 = FUN_08023a34(param_1,param_2,*(undefined4 *)(DAT_08023e1c + ((param_3 & 3) - 1) * 4),0
                           ,param_4);
  }
  iVar3 = (int)param_3 >> 2;
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      puVar1 = (undefined4 *)FUN_08024ae4(0x10);
      *(undefined4 **)(param_1 + 0x1c) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_08024a80(DAT_08023e24,0x1b3,0,DAT_08023e20);
      }
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    puVar1 = *(undefined4 **)(iVar5 + 8);
    uVar4 = param_2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_08023bf4(param_1,0x271);
      *(undefined4 **)(iVar5 + 8) = puVar1;
      *puVar1 = 0;
    }
    while( true ) {
      param_2 = uVar4;
      if (iVar3 << 0x1f < 0) {
        param_2 = FUN_08023c20(param_1,uVar4,puVar1);
        FUN_080239f0(param_1,uVar4);
      }
      iVar3 = iVar3 >> 1;
      if (iVar3 == 0) break;
      puVar2 = (undefined4 *)*puVar1;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_08023c20(param_1,puVar1,puVar1);
        *puVar1 = puVar2;
        *puVar2 = 0;
      }
      puVar1 = puVar2;
      uVar4 = param_2;
    }
  }
  return param_2;
}


