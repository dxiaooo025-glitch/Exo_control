
undefined4 FUN_08001e62(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *local_c;
  
  if ((char)param_2 < '\0') {
    iVar1 = (param_2 & 0xf) * 9 + 5;
    *(undefined1 *)((int)param_1 + (param_2 & 0xf) * 0x24 + 0x15) = 1;
  }
  else {
    iVar1 = (param_2 & 0xf) * 9 + 0x95;
    *(undefined1 *)((int)param_1 + (param_2 & 0xf) * 0x24 + 0x255) = 0;
  }
  local_c = (byte *)(param_1 + iVar1);
  *local_c = param_2 & 0xf;
  if (*(char *)(param_1 + 0x125) == '\x01') {
    uVar2 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x125) = 1;
    FUN_08002e74(*param_1,local_c);
    *(undefined1 *)(param_1 + 0x125) = 0;
    uVar2 = 0;
  }
  return uVar2;
}


