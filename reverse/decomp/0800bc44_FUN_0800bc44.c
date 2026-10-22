
void FUN_0800bc44(int *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*param_1 + 0x14);
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 8;
  *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x10;
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
  *(uint *)(*param_1 + 0x10) = DAT_0800bd80 & *(uint *)(*param_1 + 0x10);
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffff3fff;
  if ((*(char *)((int)param_1 + 0x81) != '\x04') && ((uVar1 & 0x20) != 0)) {
    param_1[0x21] = param_1[0x21] | 0x80;
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x20;
  }
  if ((*(char *)((int)param_1 + 0x81) != '\x03') && ((uVar1 & 0x40) != 0)) {
    param_1[0x21] = param_1[0x21] | 4;
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x40;
  }
  if ((uVar1 & 0x200) != 0) {
    param_1[0x21] = param_1[0x21] | 1;
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x200;
  }
  if ((uVar1 & 0x100) != 0) {
    param_1[0x21] = param_1[0x21] | 8;
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x100;
  }
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  *(undefined2 *)((int)param_1 + 0x6a) = 0;
  return;
}


