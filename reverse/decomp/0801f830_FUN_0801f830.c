
uint FUN_0801f830(float param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  uint local_44;
  
  uVar1 = DAT_0801f974;
  if ((param_2 == 0) || (param_3 <= param_4)) {
    param_3 = param_4;
  }
  else if (ABS(param_1) <= DAT_0801f96c) {
    if (param_1 < 0.0) {
      dVar6 = -(double)param_1;
    }
    else {
      dVar6 = (double)param_1;
    }
    dVar5 = (double)FUN_080005dc(DAT_0801f974,0);
    dVar6 = dVar5 * dVar6 + 0.5;
    uVar7 = FUN_08021bc0(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20));
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = FUN_08000904((int)uVar7,uVar4,uVar1,0);
    FUN_08000904((int)uVar7,uVar4,uVar1,0);
    local_44 = param_4;
    if (param_1 < 0.0) {
      local_44 = FUN_0801f70c(param_2,param_3,param_4,DAT_0801f978);
    }
    if (local_44 < param_3) {
      uVar3 = FUN_08022ea8(param_2 + local_44,param_3 - local_44,DAT_0801f97c,uVar2,extraout_r2);
      if ((0 < (int)uVar3) && (uVar3 < param_3 - local_44)) {
        param_3 = local_44 + uVar3;
      }
    }
    else {
      param_3 = local_44;
    }
  }
  else {
    param_3 = FUN_0801f70c(param_2,param_3,param_4,DAT_0801f970);
  }
  return param_3;
}


