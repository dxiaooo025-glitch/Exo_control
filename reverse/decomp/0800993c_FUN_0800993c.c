
undefined4
FUN_0800993c(int *param_1,undefined2 param_2,undefined2 param_3,short param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_08009db4(param_1,param_2,(char)param_4,0,DAT_080099e0);
  iVar1 = FUN_08009ade(param_1,param_5,param_6);
  if (iVar1 == 0) {
    if (param_4 == 1) {
      *(uint *)(*param_1 + 0x28) = (uint)(byte)param_3;
    }
    else {
      *(uint *)(*param_1 + 0x28) = (uint)(byte)((ushort)param_3 >> 8);
      iVar1 = FUN_08009ade(param_1,param_5,param_6);
      if (iVar1 != 0) {
        return 1;
      }
      *(uint *)(*param_1 + 0x28) = (uint)(byte)param_3;
    }
    iVar1 = FUN_08009a2c(param_1,0x40,0,param_5,param_6);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


