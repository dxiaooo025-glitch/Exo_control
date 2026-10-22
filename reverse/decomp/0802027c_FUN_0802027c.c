
undefined4 FUN_0802027c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  iVar2 = *(int *)(DAT_08020360 + 0x3a40);
  uVar3 = *(undefined4 *)(DAT_08020360 + 0x3a44);
  uVar4 = *(undefined4 *)(DAT_08020360 + 0x3a48);
  if (iVar2 == 0) {
    fVar5 = DAT_08020368;
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (fVar8 * DAT_08020364) / fVar5;
  }
  if (*(int *)(DAT_08020360 + 0x3a50) == 0) {
    fVar8 = DAT_08020368;
  }
  else {
    fVar8 = (float)FUN_080007d8(*(undefined4 *)(DAT_08020360 + 0x3a58),
                                *(undefined4 *)(DAT_08020360 + 0x3a5c));
    fVar6 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(DAT_08020360 + 0x3a50),(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = fVar8 / fVar6;
  }
  if (*(int *)(DAT_08020360 + 0x3a64) == 0) {
    fVar6 = DAT_08020368;
  }
  else {
    fVar6 = (float)FUN_080007d8(*(undefined4 *)(DAT_08020360 + 0x3a68),
                                *(undefined4 *)(DAT_08020360 + 0x3a6c));
    fVar7 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(DAT_08020360 + 0x3a64),(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = fVar6 / fVar7;
  }
  uVar9 = VectorUnsignedToFloat(*DAT_080205f0,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = FUN_0801f70c(param_1,param_2,0,DAT_080205f4);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_080205f8);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,iVar2);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_080205fc);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,uVar3);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020600);
  uVar3 = FUN_0801f770(param_1,param_2,uVar1,uVar3);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020604);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,uVar4);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020608);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,uVar4);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_0802060c);
  uVar3 = FUN_0801f830(fVar5,param_1,param_2,uVar3);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020610);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x3a4c));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020618);
  uVar3 = FUN_0801f830(fVar8,param_1,param_2,uVar3);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_0802061c);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x3a60));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020620);
  uVar3 = FUN_0801f830(fVar6,param_1,param_2,uVar3);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020624);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x3a70));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020628);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x3a74));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_0802062c);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x3a78));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020630);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined2 *)(DAT_08020614 + 0x467e));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020634);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x4680));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020638);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x468c));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_0802063c);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x4690));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020640);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_08020614 + 0x4694));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_08020644);
  uVar3 = FUN_0801f770(param_1,param_2,uVar3,*(undefined4 *)(DAT_080206b8 + 0x4698));
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_080206bc);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_080206c0);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_080206c4);
  uVar3 = FUN_0801f830(uVar9,param_1,param_2,uVar3);
  uVar3 = FUN_0801f70c(param_1,param_2,uVar3,DAT_080206c8);
  return uVar3;
}


