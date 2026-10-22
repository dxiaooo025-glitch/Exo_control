
undefined4 FUN_0800e0f2(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xae) * 4) == 0) {
    uVar1 = 3;
  }
  else {
    if ((*(char *)(param_1 + 0x29c) == '\x03') &&
       (*(int *)(*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xae) * 4) + 0x24) != 0)) {
      (**(code **)(*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xae) * 4) + 0x24))
                (param_1,param_2);
    }
    uVar1 = 0;
  }
  return uVar1;
}


