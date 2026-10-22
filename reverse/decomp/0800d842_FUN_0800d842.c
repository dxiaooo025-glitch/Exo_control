
undefined4 FUN_0800d842(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x21) == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x21) = 1;
    param_1[0x22] = 0x24;
    uVar2 = *(uint *)*param_1;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    param_1[0x19] = 0;
    *(uint *)*param_1 = uVar2 & 0xdfffffff;
    param_1[0x22] = 0x20;
    *(undefined1 *)(param_1 + 0x21) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


