
undefined4 FUN_0800d930(int *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x21] == '\x01') {
    uVar1 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x21) = 1;
    param_1[0x22] = 0x24;
    uVar1 = *(undefined4 *)*param_1;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    *(uint *)(*param_1 + 8) = param_2 | *(uint *)(*param_1 + 8) & 0xf1ffffff;
    FUN_0800d9ac(param_1);
    *(undefined4 *)*param_1 = uVar1;
    param_1[0x22] = 0x20;
    *(undefined1 *)(param_1 + 0x21) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


