
undefined4 FUN_0800a4a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((char)param_1[0x26] == '\x02') {
    if ((*(uint *)(*param_1 + 0xc0) & 0x3f000000) == 0) {
      param_1[0x27] = param_1[0x27] | 0x20;
      uVar1 = 1;
    }
    else if ((*(uint *)(*param_1 + 0xc4) & 0x200000) == 0) {
      uVar2 = *(uint *)(*param_1 + 0xc4) >> 0x10 & 0x1f;
      FUN_0800b28c(param_1,param_2,param_3,uVar2);
      *(int *)(*param_1 + 0xd0) = 1 << uVar2;
      param_1[0x25] = 1 << uVar2;
      uVar1 = 0;
    }
    else {
      param_1[0x27] = param_1[0x27] | 0x200;
      uVar1 = 1;
    }
  }
  else {
    param_1[0x27] = param_1[0x27] | 8;
    uVar1 = 1;
  }
  return uVar1;
}


