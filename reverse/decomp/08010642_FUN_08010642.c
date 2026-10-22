
undefined4 FUN_08010642(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_1c [2];
  
  if ((param_1[5] == 0) || (param_1[6] == 0)) {
    uVar4 = param_1[1];
    uVar5 = *param_1;
    uVar3 = param_1[4];
    uVar1 = FUN_08010604((int)*(short *)(param_1 + 2));
    iVar2 = FUN_0800fc68(uVar4,uVar5,uVar3 & 0xffff,param_2,uVar1,local_1c);
    if (iVar2 != 1) {
      return 0;
    }
  }
  else {
    uVar4 = param_1[1];
    uVar5 = *param_1;
    uVar6 = param_1[4];
    uVar1 = FUN_08010604((int)*(short *)(param_1 + 2));
    local_1c[0] = FUN_0800fba8(uVar4,uVar5,uVar6,param_2,uVar1,param_1[5],param_1[6]);
  }
  return local_1c[0];
}


