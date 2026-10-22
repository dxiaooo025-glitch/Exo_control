
void FUN_080176e8(int param_1,int param_2,undefined4 param_3,undefined1 *param_4,undefined1 *param_5
                 )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != (undefined1 *)0x0)) &&
     (param_5 != (undefined1 *)0x0)) {
    uVar1 = FUN_080148c4(*(undefined4 *)(param_4 + 4),DAT_08017844);
    uVar2 = FUN_080148c4(*(float *)(param_4 + 4) * *(float *)(param_4 + 8),DAT_08017844);
    uVar3 = FUN_080148c4(*(undefined4 *)(param_4 + 0x10),DAT_08017848);
    uVar8 = FUN_08014950(*(undefined4 *)(param_4 + 0x24));
    uVar8 = FUN_080148c4(uVar8,DAT_08017848);
    uVar4 = FUN_080148c4(*(undefined4 *)(param_5 + 4),DAT_08017844);
    uVar5 = FUN_080148c4(*(float *)(param_5 + 4) * *(float *)(param_5 + 8),DAT_08017844);
    uVar6 = FUN_080148c4(*(undefined4 *)(param_5 + 0x10),DAT_08017848);
    uVar9 = FUN_08014950(*(undefined4 *)(param_5 + 0x24));
    uVar9 = FUN_080148c4(uVar9,DAT_08017848);
    uVar7 = FUN_08022ea8(param_1,param_2,DAT_0801784c,param_3,*param_4,uVar1,uVar2,uVar3,uVar8,
                         *param_5,uVar4,uVar5,uVar6,uVar9);
    if ((0 < (int)uVar7) && ((int)uVar7 < param_2)) {
      FUN_080146a2(param_1,uVar7 & 0xffff);
    }
  }
  return;
}


