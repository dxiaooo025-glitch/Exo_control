
void FUN_08017850(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  uint local_1c;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_080141dc(local_5c);
    uVar1 = FUN_080148c4(local_58,DAT_080179c0);
    uVar2 = FUN_080148c4(local_54,DAT_080179c0);
    uVar3 = FUN_080148c4(local_4c,DAT_080179c4);
    uVar4 = FUN_080148c4(local_48,DAT_080179c4);
    uVar5 = FUN_080148c4(local_44,DAT_080179c4);
    uVar6 = FUN_080148c4(local_40,DAT_080179c0);
    uVar7 = FUN_080148c4(local_3c,DAT_080179c0);
    uVar8 = FUN_080148c4(local_38,DAT_080179c0);
    uVar9 = FUN_080148c4(local_34,DAT_080179c0);
    uVar10 = FUN_080148c4(local_30,DAT_080179c0);
    uVar11 = FUN_080148c4(local_2c,DAT_080179c0);
    local_1c = FUN_08022ea8(param_1,param_2,DAT_080179c8,param_3,local_5c[0] != '\0',uVar1,uVar2,
                            local_50 != '\0',uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                            ,local_28,local_20);
    if ((0 < (int)local_1c) && ((int)local_1c < param_2)) {
      FUN_080146a2(param_1,local_1c & 0xffff);
    }
  }
  return;
}


