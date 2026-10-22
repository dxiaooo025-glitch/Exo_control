
void FUN_0800eaec(int param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  
  if (((*(short *)(param_2 + 4) == 0) && (*(short *)(param_2 + 6) == 0)) &&
     (*(ushort *)(param_2 + 2) < 0x80)) {
    uVar1 = *(ushort *)(param_2 + 2);
    bVar2 = (byte)uVar1 & 0x7f;
    if (*(char *)(param_1 + 0x29c) == '\x03') {
      FUN_0800eea6(param_1,param_2);
    }
    else {
      *(byte *)(param_1 + 0x29e) = bVar2;
      FUN_080113b0(param_1,bVar2);
      FUN_0800f054(param_1);
      if ((uVar1 & 0x7f) == 0) {
        *(undefined1 *)(param_1 + 0x29c) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x29c) = 2;
      }
    }
  }
  else {
    FUN_0800eea6(param_1,param_2);
  }
  return;
}


