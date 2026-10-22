
undefined4 FUN_08013072(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08022f96(&local_28,0,0x20);
  if ((((param_1 == (int *)0x0) || (param_2 == 0)) || (param_3 == '\0')) || (param_3 == -1)) {
    uVar2 = 1;
  }
  else {
    *param_1 = param_2;
    *(char *)(param_1 + 1) = param_3;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 1;
    local_18 = 0;
    local_14 = 0x7ff;
    iVar1 = FUN_0800a304(*param_1,&local_28);
    if (iVar1 == 0) {
      iVar1 = FUN_0800a3f0(*param_1,2,2,1,1);
      if (iVar1 == 0) {
        iVar1 = FUN_0800a44a(*param_1);
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
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


