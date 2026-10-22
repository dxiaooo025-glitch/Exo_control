
undefined1 FUN_0800df22(int param_1)

{
  int iVar1;
  undefined1 local_9;
  
  local_9 = 0;
  *(undefined1 *)(param_1 + 0x29c) = 1;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  if (((*(int *)(param_1 + 0x2b8) != 0) && (*(int *)(*(int *)(param_1 + 0x2b8) + 4) != 0)) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x2b8) + 4))(param_1,*(uint *)(param_1 + 4) & 0xff),
     iVar1 != 0)) {
    local_9 = 3;
  }
  FUN_08011252(param_1,0,0,0x40);
  *(undefined2 *)(param_1 + 0x164) = 1;
  *(undefined4 *)(param_1 + 0x160) = 0x40;
  FUN_08011252(param_1,0x80,0,0x40);
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0x40;
  return local_9;
}


