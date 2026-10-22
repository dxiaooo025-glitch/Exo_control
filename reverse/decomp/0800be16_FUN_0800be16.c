
undefined4 FUN_0800be16(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    if (param_1[0x22] == 0) {
      *(undefined1 *)(param_1 + 0x21) = 0;
      FUN_080125d8(param_1);
    }
    param_1[0x22] = 0x24;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    if (param_1[10] != 0) {
      FUN_0800d344(param_1);
    }
    iVar1 = FUN_0800c66c(param_1);
    if (iVar1 == 1) {
      uVar2 = 1;
    }
    else {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xffffb7ff;
      *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffffd5;
      *(uint *)*param_1 = *(uint *)*param_1 | 1;
      uVar2 = FUN_0800d488(param_1);
    }
  }
  return uVar2;
}


