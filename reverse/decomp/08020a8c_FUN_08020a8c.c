
void FUN_08020a8c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort local_22;
  
  iVar2 = FUN_0801f4f4();
  uVar3 = FUN_0801f4f4();
  *(undefined4 *)(DAT_08020c90 + 0x46a0) = uVar3;
  *(uint *)(DAT_08020c90 + 0x46b4) = param_2;
  *(undefined1 *)(DAT_08020c90 + 0x46a8) = 0;
  if (*(char *)(DAT_08020c90 + 0x46b9) != '\0') {
    uVar6 = param_1 - *(int *)(DAT_08020c90 + 0x46b0);
    uVar7 = iVar2 - *(int *)(DAT_08020c90 + 0x46ac);
    uVar4 = FUN_08000904((int)((ulonglong)*DAT_08020c94 * (ulonglong)param_2),
                         (int)((ulonglong)*DAT_08020c94 * (ulonglong)param_2 >> 0x20),1000,0);
    if (param_2 < uVar6) {
      uVar8 = uVar6 - param_2;
    }
    else {
      uVar8 = param_2 - uVar6;
    }
    *(int *)(DAT_08020c90 + 0x3a64) = *(int *)(DAT_08020c90 + 0x3a64) + 1;
    iVar9 = DAT_08020c90;
    uVar5 = *(uint *)(DAT_08020c90 + 0x3a68);
    piVar1 = (int *)(DAT_08020c90 + 0x3a6c);
    *(uint *)(DAT_08020c90 + 0x3a68) = uVar5 + uVar6;
    *(uint *)(iVar9 + 0x3a6c) = *piVar1 + (uint)CARRY4(uVar5,uVar6);
    if (*(uint *)(DAT_08020c90 + 0x3a70) < uVar6) {
      *(uint *)(DAT_08020c90 + 0x3a70) = uVar6;
    }
    if (*(uint *)(DAT_08020c90 + 0x3a74) < uVar8) {
      *(uint *)(DAT_08020c90 + 0x3a74) = uVar8;
    }
    if (param_2 + 2 < uVar6) {
      *(int *)(DAT_08020c90 + 0x3a78) = *(int *)(DAT_08020c90 + 0x3a78) + 1;
      local_22 = *(short *)(DAT_08020c90 + 0x467e) + *(short *)(DAT_08020c90 + 0x467c);
      if (*(short *)(DAT_08020c90 + 0x467e) == 0x80) {
        *(ushort *)(DAT_08020c90 + 0x467c) = *(short *)(DAT_08020c90 + 0x467c) + 1U & 0x7f;
        *(int *)(DAT_08020c90 + 0x4680) = *(int *)(DAT_08020c90 + 0x4680) + 1;
        local_22 = (*(short *)(DAT_08020c90 + 0x467e) + *(short *)(DAT_08020c90 + 0x467c)) - 1;
      }
      else {
        *(short *)(DAT_08020ea4 + 0x467e) = *(short *)(DAT_08020ea4 + 0x467e) + 1;
      }
      local_22 = local_22 & 0x7f;
      uVar6 = uVar7 - uVar4;
      uVar4 = (uint)(uVar7 < uVar4);
      iVar9 = -uVar4 + ((((uVar4 * -0x20 | uVar6 >> 0x1b) + uVar4) - (uint)(uVar6 * 0x20 < uVar6)) *
                        0x200 | uVar6 * 0x1f >> 0x17) + (uint)CARRY4(uVar6 * 0x3e00,uVar6);
      uVar3 = FUN_08000864(uVar6 * 1000000,
                           -uVar4 + (((iVar9 * 0x40 | uVar6 * 0x3e01 >> 0x1a) - iVar9) -
                                    (uint)(uVar6 * 0xf8040 < uVar6 * 0x3e01)) +
                                    (uint)CARRY4(uVar6 * 999999,uVar6),*DAT_08020ea8,0);
      *(undefined4 *)(DAT_08020ea4 + (uint)local_22 * 0x18 + 0x3a7c) =
           *(undefined4 *)(DAT_08020ea4 + 0x3a50);
      *(uint *)((uint)local_22 * 0x18 + DAT_08020ea4 + 0x3a80) =
           *(int *)(DAT_08020ea4 + 0x46b0) + param_2;
      *(int *)(DAT_08020ea4 + (uint)local_22 * 0x18 + 0x3a84) = param_1;
      *(undefined4 *)(DAT_08020ea4 + (uint)local_22 * 0x18 + 0x3a88) = 0;
      *(undefined4 *)(DAT_08020ea4 + (uint)local_22 * 0x18 + 0x3a8c) = uVar3;
      *(undefined4 *)(DAT_08020ea4 + (uint)local_22 * 0x18 + 0x3a90) =
           *(undefined4 *)(DAT_08020ea4 + 0x4688);
      *(uint *)(DAT_08020ea4 + 0x46a4) = (uint)local_22;
      *(undefined1 *)(DAT_08020ea4 + 0x46a8) = 1;
    }
  }
  *(int *)(DAT_08020ea4 + 0x46b0) = param_1;
  *(int *)(DAT_08020ea4 + 0x46ac) = iVar2;
  *(undefined4 *)(DAT_08020ea4 + 0x4688) = 0;
  *(undefined1 *)(DAT_08020ea4 + 0x46b9) = 1;
  return;
}


