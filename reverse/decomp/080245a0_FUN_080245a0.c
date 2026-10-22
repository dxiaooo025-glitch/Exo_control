
undefined4
FUN_080245a0(undefined4 param_1,uint *param_2,uint *param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_2[4];
  if ((int)param_2[4] < (int)param_2[2]) {
    uVar3 = param_2[2];
  }
  *param_3 = uVar3;
  if (*(char *)((int)param_2 + 0x43) != '\0') {
    *param_3 = uVar3 + 1;
  }
  if ((int)(*param_2 << 0x1a) < 0) {
    *param_3 = *param_3 + 2;
  }
  uVar3 = *param_2 & 6;
  if (uVar3 == 0) {
    for (; (int)uVar3 < (int)(param_2[3] - *param_3); uVar3 = uVar3 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x19,1);
      if (iVar1 == -1) goto LAB_08024644;
    }
  }
  uVar4 = (uint)(*(char *)((int)param_2 + 0x43) != '\0');
  if ((int)(*param_2 << 0x1a) < 0) {
    *(undefined1 *)((int)param_2 + uVar4 + 0x43) = 0x30;
    *(undefined1 *)((int)param_2 + uVar4 + 0x44) = *(undefined1 *)((int)param_2 + 0x45);
    uVar4 = uVar4 + 2;
  }
  iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x43,uVar4);
  if (iVar1 == -1) {
LAB_08024644:
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (*param_2 & 6) == 4;
    if (bVar5) {
      uVar3 = param_2[3] - *param_3;
    }
    if (bVar5) {
      uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
    }
    else {
      uVar3 = 0;
    }
    if ((int)param_2[4] < (int)param_2[2]) {
      uVar3 = uVar3 + (param_2[2] - param_2[4]);
    }
    for (uVar4 = 0; uVar3 != uVar4; uVar4 = uVar4 + 1) {
      iVar1 = (*param_5)(param_1,param_4,(int)param_2 + 0x1a,1);
      if (iVar1 == -1) goto LAB_08024644;
    }
    uVar2 = 0;
  }
  return uVar2;
}


