
void FUN_0800a97c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = *(uint *)(DAT_0800abdc + 0x14) & *(uint *)(DAT_0800abdc + 0x10);
  uVar1 = uVar11 << 0x1e;
  uVar2 = *(uint *)(*param_1 + 0x54) & *(uint *)(*param_1 + 0x50) & 0xf000;
  uVar3 = *(uint *)(*param_1 + 0x54) & *(uint *)(*param_1 + 0x50) & 0xf;
  uVar4 = *(uint *)(*param_1 + 0x54) & *(uint *)(*param_1 + 0x50) & 0xf0;
  uVar5 = *(uint *)(*param_1 + 0x54) & *(uint *)(*param_1 + 0x50) & 0x3c400000;
  uVar6 = *(uint *)(*param_1 + 0x54) & *(uint *)(*param_1 + 0x50) & 0x3800000;
  uVar7 = *(uint *)(*param_1 + 0x54);
  uVar8 = *(uint *)(*param_1 + 0x50);
  if (((uVar7 & 0x100) != 0) && ((uVar8 & 0x100) != 0)) {
    *(undefined4 *)(*param_1 + 0x50) = 0x100;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800aee8(param_1);
  }
  if (((uVar7 & 0x400) != 0) && ((uVar8 & 0x400) != 0)) {
    uVar9 = *(uint *)(*param_1 + 0xdc);
    uVar10 = *(uint *)(*param_1 + 0xe4);
    *(undefined4 *)(*param_1 + 0x50) = 0x400;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800ae96(param_1,uVar10 & uVar9);
  }
  if (uVar1 != 0) {
    *(uint *)(*param_1 + 0x50) = DAT_0800abe0 & uVar1;
    *(uint *)(DAT_0800abdc + 0x10) = uVar11 & 3;
    FUN_0800ae14(param_1,uVar1);
  }
  if (uVar2 != 0) {
    *(uint *)(*param_1 + 0x50) = DAT_0800abe0 & uVar2;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800ae2a(param_1,uVar2);
  }
  if (uVar3 != 0) {
    *(uint *)(*param_1 + 0x50) = DAT_0800abe0 & uVar3;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800ae40(param_1,uVar3);
  }
  if (uVar4 != 0) {
    *(uint *)(*param_1 + 0x50) = DAT_0800abe0 & uVar4;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800ae56(param_1,uVar4);
  }
  if (((uVar7 & 0x800) != 0) && ((uVar8 & 0x800) != 0)) {
    *(undefined4 *)(*param_1 + 0x50) = 0x800;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800ae6c(param_1);
  }
  if (((uVar7 & 0x200) != 0) && ((uVar8 & 0x200) != 0)) {
    uVar11 = *(uint *)(*param_1 + 0xd8);
    uVar1 = *(uint *)(*param_1 + 0xe0);
    *(undefined4 *)(*param_1 + 0x50) = 0x200;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800ae80(param_1,uVar1 & uVar11);
  }
  if (((uVar7 & 0x80000) != 0) && ((uVar8 & 0x80000) != 0)) {
    *(undefined4 *)(*param_1 + 0x50) = 0x80000;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800aeac(param_1);
  }
  if (((uVar7 & 0x10000) != 0) && ((uVar8 & 0x10000) != 0)) {
    *(undefined4 *)(*param_1 + 0x50) = 0x10000;
    *(undefined4 *)(DAT_0800abdc + 0x10) = 0;
    FUN_0800aec0(param_1);
  }
  if (((uVar7 & 0x40000) != 0) && ((uVar8 & 0x40000) != 0)) {
    *(undefined4 *)(*param_1 + 0x50) = 0x40000;
    *(undefined4 *)(DAT_0800ae08 + 0x10) = 0;
    FUN_0800aed4(param_1);
  }
  if (((uVar7 & 0x20000) != 0) && ((uVar8 & 0x20000) != 0)) {
    *(undefined4 *)(*param_1 + 0x50) = 0x20000;
    *(undefined4 *)(DAT_0800ae08 + 0x10) = 0;
    param_1[0x27] = param_1[0x27] | 0x80;
  }
  if (uVar6 != 0) {
    *(uint *)(*param_1 + 0x50) = DAT_0800ae0c & uVar6;
    *(undefined4 *)(DAT_0800ae08 + 0x10) = 0;
    FUN_0800af10(param_1,uVar6);
  }
  if (uVar5 != 0) {
    *(uint *)(*param_1 + 0x50) = DAT_0800ae0c & uVar5;
    *(undefined4 *)(DAT_0800ae08 + 0x10) = 0;
    param_1[0x27] = param_1[0x27] | uVar5;
  }
  if ((*param_1 == DAT_0800ae10) && ((*(uint *)(param_1[1] + 8) & 3) != 0)) {
    uVar11 = *(uint *)(param_1[1] + 0x24) & *(uint *)(param_1[1] + 0x20) & 0xf;
    uVar1 = *(uint *)(param_1[1] + 0x24) & *(uint *)(param_1[1] + 0x20) & 0x30;
    uVar2 = *(uint *)(param_1[1] + 0x24) & *(uint *)(param_1[1] + 0x20) & 0x180;
    uVar3 = *(uint *)(param_1[1] + 0x24) & *(uint *)(param_1[1] + 0x20) & 0x7e00;
    uVar4 = *(uint *)(param_1[1] + 0x24) & *(uint *)(param_1[1] + 0x20) & 0x78000;
    uVar5 = *(uint *)(param_1[1] + 0x24);
    uVar6 = *(uint *)(param_1[1] + 0x20);
    if (uVar11 != 0) {
      *(uint *)(param_1[1] + 0x20) = uVar11;
      FUN_0800af26(param_1,uVar11);
    }
    if (uVar1 != 0) {
      *(uint *)(param_1[1] + 0x20) = uVar1;
      FUN_0800af3c(param_1,uVar1);
    }
    if (((uVar5 & 0x40) != 0) && ((uVar6 & 0x40) != 0)) {
      uVar11 = *(uint *)(param_1[1] + 0x3c);
      uVar1 = *(uint *)(param_1[1] + 0x3c);
      *(undefined4 *)(param_1[1] + 0x20) = 0x40;
      FUN_0800af52(param_1,uVar11 >> 0x10,uVar1 & 0x3f);
    }
    if (uVar2 != 0) {
      *(uint *)(param_1[1] + 0x20) = uVar2;
      FUN_0800af6a(param_1,uVar2);
    }
    if (uVar3 != 0) {
      *(uint *)(param_1[1] + 0x20) = uVar3;
      param_1[0x27] = param_1[0x27] | uVar3;
    }
    if (uVar4 != 0) {
      *(uint *)(param_1[1] + 0x20) = uVar4;
      param_1[0x27] = param_1[0x27] | uVar4;
    }
  }
  if (param_1[0x27] != 0) {
    FUN_0800aefc(param_1);
  }
  return;
}


