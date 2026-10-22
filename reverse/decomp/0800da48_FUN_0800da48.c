
undefined1 FUN_0800da48(undefined1 *param_1,int param_2,undefined1 param_3)

{
  undefined1 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    uVar1 = 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    if (param_2 != 0) {
      *(int *)(param_1 + 0x2b4) = param_2;
    }
    param_1[0x29c] = 1;
    *param_1 = param_3;
    uVar1 = FUN_08011178(param_1);
  }
  return uVar1;
}


