
void FUN_080179cc(int param_1,int param_2,undefined4 param_3,undefined1 param_4,int param_5,
                 undefined1 *param_6,int param_7,int param_8)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  
  if (((((param_1 != 0) && (param_2 != 0)) && (param_5 != 0)) &&
      ((param_6 != (undefined1 *)0x0 && (param_7 != 0)))) && (param_8 != 0)) {
    uVar1 = *param_6;
    uVar2 = *(undefined2 *)(param_6 + 0x20);
    uVar19 = *(undefined4 *)(param_6 + 0x28);
    uVar3 = FUN_080148c4(*(undefined4 *)(param_6 + 4),DAT_08017bd4);
    uVar4 = FUN_080148c4(*(undefined4 *)(param_7 + 0x1c),DAT_08017bd4);
    uVar5 = FUN_080148c4(*(undefined4 *)(param_7 + 0x24),DAT_08017bd4);
    uVar6 = FUN_080148c4(*(undefined4 *)(param_7 + 0x2c),DAT_08017bd4);
    uVar7 = FUN_080148c4(*(undefined4 *)(param_7 + 0x34),DAT_08017bd8);
    uVar8 = FUN_080148c4(*(undefined4 *)(param_7 + 0x50),DAT_08017bd4);
    uVar9 = FUN_080148c4(*(undefined4 *)(param_7 + 0x54),DAT_08017bd4);
    uVar10 = FUN_080148c4(*(undefined4 *)(param_7 + 0x58),DAT_08017bd4);
    uVar11 = FUN_080148c4(*(undefined4 *)(param_8 + 0x1c),DAT_08017bd4);
    uVar12 = FUN_080148c4(*(undefined4 *)(param_8 + 0x24),DAT_08017bd4);
    uVar13 = FUN_080148c4(*(undefined4 *)(param_8 + 0x2c),DAT_08017bd4);
    uVar14 = FUN_080148c4(*(undefined4 *)(param_8 + 0x34),DAT_08017bd8);
    uVar15 = FUN_080148c4(*(undefined4 *)(param_8 + 0x50),DAT_08017bd4);
    uVar16 = FUN_080148c4(*(undefined4 *)(param_8 + 0x54),DAT_08017bd4);
    uVar17 = FUN_080148c4(*(undefined4 *)(param_8 + 0x58),DAT_08017bd4);
    uVar18 = FUN_08022ea8(param_1,param_2,DAT_08017bdc,param_3,param_4,uVar1,uVar2,uVar19,uVar3,
                          uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                          uVar15,uVar16,uVar17,*(undefined4 *)(param_7 + 0x5c),
                          *(undefined4 *)(param_8 + 0x5c));
    if ((0 < (int)uVar18) && ((int)uVar18 < param_2)) {
      FUN_080146a2(param_1,uVar18 & 0xffff);
    }
  }
  return;
}


