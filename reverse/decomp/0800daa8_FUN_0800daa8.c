
undefined4 FUN_0800daa8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 local_a;
  
  local_a = 0;
  if (param_2 == 0) {
    uVar1 = 3;
  }
  else {
    *(int *)(param_1 + 0x2b8) = param_2;
    if (*(int *)(*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xae) * 4) + 0x2c) != 0) {
      uVar1 = (**(code **)(*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xae) * 4) + 0x2c))
                        (&local_a);
      *(undefined4 *)(param_1 + 0x2d0) = uVar1;
    }
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 1;
    uVar1 = 0;
  }
  return uVar1;
}


