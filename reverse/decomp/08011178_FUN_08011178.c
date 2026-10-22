
undefined4 FUN_08011178(char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\x01') {
    DAT_08011214[0x138] = param_1;
    *(undefined4 **)(param_1 + 0x2c8) = DAT_08011214;
    *DAT_08011214 = DAT_08011218;
    *(undefined1 *)(DAT_08011214 + 1) = 9;
    *(undefined1 *)((int)DAT_08011214 + 7) = 2;
    *(undefined1 *)((int)DAT_08011214 + 6) = 0;
    *(undefined1 *)((int)DAT_08011214 + 9) = 2;
    *(undefined1 *)((int)DAT_08011214 + 10) = 0;
    *(undefined1 *)((int)DAT_08011214 + 0xb) = 0;
    *(undefined1 *)(DAT_08011214 + 3) = 0;
    *(undefined1 *)((int)DAT_08011214 + 0xe) = 0;
    *(undefined1 *)((int)DAT_08011214 + 0xf) = 0;
    *(undefined1 *)(DAT_08011214 + 4) = 0;
    iVar1 = FUN_0800112c(DAT_08011214);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    FUN_080025e6(DAT_08011214,0x200);
    FUN_08002558(DAT_08011214,0,0x80);
    FUN_08002558(DAT_08011214,1,0x174);
  }
  return 0;
}


