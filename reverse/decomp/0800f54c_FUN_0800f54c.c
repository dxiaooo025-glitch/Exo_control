
undefined4 FUN_0800f54c(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) == 0) {
    uVar2 = 3;
  }
  else {
    iVar3 = *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
    if ((*(int *)((param_2 & 0xf) * 0x14 + param_1 + 0x18) == 0) ||
       (uVar1 = *(uint *)((param_2 & 0xf) * 0x14 + param_1 + 0x18),
       uVar4 = *(uint *)((param_2 & 0xf) * 0x24 + *(int *)(param_1 + 0x2c8) + 0x1c),
       uVar1 != (uVar1 / uVar4) * uVar4)) {
      *(undefined4 *)(iVar3 + 0x214) = 0;
      if (*(int *)(*(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) + 0x10) != 0) {
        (**(code **)(*(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) + 0x10))
                  (*(undefined4 *)(iVar3 + 0x208),iVar3 + 0x210,param_2);
      }
    }
    else {
      *(undefined4 *)((param_2 & 0xf) * 0x14 + param_1 + 0x18) = 0;
      FUN_080113ee(param_1,param_2,0,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


