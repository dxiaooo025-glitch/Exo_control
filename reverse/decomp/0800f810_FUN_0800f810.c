
undefined4 FUN_0800f810(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0800e1e6(DAT_0800f87c,0x82);
  iVar2 = FUN_0800e1e6(DAT_0800f87c,1);
  iVar3 = FUN_0800e1e6(DAT_0800f87c,0x81);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 6) = 0x10;
  }
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 4) = 0x40;
    *(undefined1 *)(iVar2 + 5) = 0;
  }
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 4) = 0x40;
    *(undefined1 *)(iVar3 + 5) = 0;
  }
  *param_1 = 0x43;
  return DAT_0800f87c;
}


