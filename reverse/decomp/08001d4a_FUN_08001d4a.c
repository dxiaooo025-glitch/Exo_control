
undefined4 FUN_08001d4a(undefined4 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x125) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x125) = 1;
    *(undefined1 *)((int)param_1 + 0x11) = param_2;
    FUN_08003994(*param_1,param_2);
    *(undefined1 *)(param_1 + 0x125) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


