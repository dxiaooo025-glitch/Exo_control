
undefined4 FUN_0800f64a(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
  if (*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = FUN_08011472(param_1,param_2);
    *(undefined4 *)(iVar1 + 0x20c) = uVar2;
    (**(code **)(*(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) + 0xc))
              (*(undefined4 *)(iVar1 + 0x204),iVar1 + 0x20c);
    uVar2 = 0;
  }
  return uVar2;
}


