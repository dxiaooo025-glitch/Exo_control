
undefined1 FUN_0800e16c(int param_1)

{
  int iVar1;
  undefined1 local_9;
  
  local_9 = 0;
  *(undefined1 *)(param_1 + 0x29c) = 1;
  if ((*(int *)(param_1 + 0x2b8) != 0) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x2b8) + 4))(param_1,*(uint *)(param_1 + 4) & 0xff),
     iVar1 != 0)) {
    local_9 = 3;
  }
  return local_9;
}


