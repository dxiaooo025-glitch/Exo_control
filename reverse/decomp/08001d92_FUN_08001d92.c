
undefined1 FUN_08001d92(undefined4 *param_1,byte param_2,ushort param_3,byte param_4)

{
  int iVar1;
  undefined1 local_d;
  byte *local_c;
  
  local_d = 0;
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
  *(uint *)(local_c + 8) = (uint)param_3;
  local_c[4] = param_4;
  if (local_c[1] != 0) {
    *(ushort *)(local_c + 0x1a) = (ushort)*local_c;
  }
  if (param_4 == 2) {
    local_c[5] = 0;
  }
  if (*(char *)(param_1 + 0x125) == '\x01') {
    local_d = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x125) = 1;
    FUN_08002d64(*param_1,local_c);
    *(undefined1 *)(param_1 + 0x125) = 0;
  }
  return local_d;
}


