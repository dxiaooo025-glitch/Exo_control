
undefined4 FUN_08000b5c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x3d) == '\0') {
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08000c0a(param_1);
    }
    *(undefined1 *)((int)param_1 + 0x3d) = 2;
    FUN_08000f8c(*param_1,param_1 + 1);
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined1 *)((int)param_1 + 0x3e) = 1;
    *(undefined1 *)((int)param_1 + 0x3f) = 1;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined1 *)((int)param_1 + 0x41) = 1;
    *(undefined1 *)((int)param_1 + 0x42) = 1;
    *(undefined1 *)((int)param_1 + 0x43) = 1;
    *(undefined1 *)(param_1 + 0x11) = 1;
    *(undefined1 *)((int)param_1 + 0x45) = 1;
    *(undefined1 *)((int)param_1 + 0x46) = 1;
    *(undefined1 *)((int)param_1 + 0x47) = 1;
    *(undefined1 *)((int)param_1 + 0x3d) = 1;
    uVar1 = 0;
  }
  return uVar1;
}


