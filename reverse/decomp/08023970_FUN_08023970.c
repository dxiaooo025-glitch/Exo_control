
undefined4 * FUN_08023970(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar1 = (undefined4 *)FUN_08024ae4(0x10);
    *(undefined4 **)(param_1 + 0x1c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_08024a80(DAT_080239ec,0x6b,0,DAT_080239e8);
    }
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  iVar4 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar4 + 0xc) == 0) {
    uVar2 = FUN_08024abc(param_1,4,0x21);
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar4 + 0xc) = uVar2;
    if (*(int *)(iVar3 + 0xc) != 0) goto LAB_0802399e;
LAB_080239d4:
    puVar1 = (undefined4 *)0x0;
  }
  else {
LAB_0802399e:
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar1 = *(undefined4 **)(iVar4 + param_2 * 4);
    if (puVar1 == (undefined4 *)0x0) {
      iVar4 = 1 << (param_2 & 0xff);
      puVar1 = (undefined4 *)FUN_08024abc(param_1,1,(iVar4 + 5) * 4);
      if (puVar1 == (undefined4 *)0x0) goto LAB_080239d4;
      puVar1[1] = param_2;
      puVar1[2] = iVar4;
    }
    else {
      *(undefined4 *)(iVar4 + param_2 * 4) = *puVar1;
    }
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return puVar1;
}


