
bool FUN_0800a44a(int *param_1)

{
  bool bVar1;
  
  bVar1 = (char)param_1[0x26] != '\x01';
  if (bVar1) {
    param_1[0x27] = param_1[0x27] | 4;
  }
  else {
    *(undefined1 *)(param_1 + 0x26) = 2;
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xfffffffe;
    param_1[0x27] = 0;
  }
  return bVar1;
}


