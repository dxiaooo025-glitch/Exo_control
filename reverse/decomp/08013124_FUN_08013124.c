
undefined4 FUN_08013124(int *param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_34 [20];
  int local_20;
  
  FUN_08022f96(auStack_34,0,0x2c);
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_2 == (char *)0x0)) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_0800a830(*param_1,auStack_34);
    if (iVar1 == 0) {
      *param_2 = local_20 != 0;
      if (*param_2 != '\0') {
        *(uint *)(*(int *)*param_1 + 0x18) = *(uint *)(*(int *)*param_1 + 0x18) & 0xfffffffe;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


