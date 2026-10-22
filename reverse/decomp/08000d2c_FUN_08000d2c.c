
void FUN_08000d2c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*param_1 + 0xc);
  uVar2 = *(uint *)(*param_1 + 0x10);
  if (((uVar2 & 2) != 0) && ((uVar1 & 2) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffffd;
    *(undefined1 *)(param_1 + 7) = 1;
    if ((*(uint *)(*param_1 + 0x18) & 3) == 0) {
      FUN_08000f3a(param_1);
      FUN_08000f62(param_1);
    }
    else {
      FUN_08000f4e(param_1);
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (((uVar2 & 4) != 0) && ((uVar1 & 4) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffffb;
    *(undefined1 *)(param_1 + 7) = 2;
    if ((*(uint *)(*param_1 + 0x18) & 0x300) == 0) {
      FUN_08000f3a(param_1);
      FUN_08000f62(param_1);
    }
    else {
      FUN_08000f4e(param_1);
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (((uVar2 & 8) != 0) && ((uVar1 & 8) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffff7;
    *(undefined1 *)(param_1 + 7) = 4;
    if ((*(uint *)(*param_1 + 0x1c) & 3) == 0) {
      FUN_08000f3a(param_1);
      FUN_08000f62(param_1);
    }
    else {
      FUN_08000f4e(param_1);
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (((uVar2 & 0x10) != 0) && ((uVar1 & 0x10) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffffef;
    *(undefined1 *)(param_1 + 7) = 8;
    if ((*(uint *)(*param_1 + 0x1c) & 0x300) == 0) {
      FUN_08000f3a(param_1);
      FUN_08000f62(param_1);
    }
    else {
      FUN_08000f4e(param_1);
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (((uVar2 & 1) != 0) && ((uVar1 & 1) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffffe;
    FUN_08011c3c(param_1);
  }
  if ((((uVar2 & 0x80) != 0) || ((uVar2 & 0x2000) != 0)) && ((uVar1 & 0x80) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffdf7f;
    FUN_08001104(param_1);
  }
  if (((uVar2 & 0x100) != 0) && ((uVar1 & 0x80) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xfffffeff;
    FUN_08001118(param_1);
  }
  if (((uVar2 & 0x40) != 0) && ((uVar1 & 0x40) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffffbf;
    FUN_08000f76(param_1);
  }
  if (((uVar2 & 0x20) != 0) && ((uVar1 & 0x20) != 0)) {
    *(undefined4 *)(*param_1 + 0x10) = 0xffffffdf;
    FUN_080010f0(param_1);
  }
  return;
}


