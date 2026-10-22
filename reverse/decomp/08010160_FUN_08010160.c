
undefined4 FUN_08010160(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  
  local_c = 0;
  if (*DAT_080102a8 == 0) {
    uVar2 = *DAT_080102ac + 1;
    *DAT_080102ac = uVar2;
    if (uVar2 == 0) {
      if (*(int *)*DAT_080102b0 != 0) {
        bVar1 = (bool)isCurrentModePrivileged();
        if (bVar1) {
          setBasePriority(0x50);
        }
        InstructionSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar3 = *DAT_080102b0;
      *DAT_080102b0 = *DAT_080102b4;
      *DAT_080102b4 = iVar3;
      *DAT_080102b8 = *DAT_080102b8 + 1;
      FUN_080104f8();
    }
    if (*DAT_080102bc <= uVar2) {
      while (*(int *)*DAT_080102b0 != 0) {
        iVar3 = *(int *)(*(int *)(*DAT_080102b0 + 0xc) + 0xc);
        if (uVar2 < *(uint *)(iVar3 + 4)) {
          *DAT_080102bc = *(uint *)(iVar3 + 4);
          goto LAB_08010268;
        }
        FUN_0800fb54(iVar3 + 4);
        if (*(int *)(iVar3 + 0x28) != 0) {
          FUN_0800fb54(iVar3 + 0x18);
        }
        *DAT_080102c0 = *DAT_080102c0 | 1 << (*(uint *)(iVar3 + 0x2c) & 0xff);
        FUN_0800fa9a(DAT_080102c4 + *(int *)(iVar3 + 0x2c) * 0x14,iVar3 + 4);
        if (*(uint *)(*DAT_080102c8 + 0x2c) <= *(uint *)(iVar3 + 0x2c)) {
          local_c = 1;
        }
      }
      *DAT_080102bc = 0xffffffff;
    }
LAB_08010268:
    if (1 < *(uint *)(*(int *)(*DAT_080102c8 + 0x2c) * 0x14 + DAT_080102c4)) {
      local_c = 1;
    }
    if (*DAT_080102cc != 0) {
      local_c = 1;
    }
  }
  else {
    *DAT_080102d0 = *DAT_080102d0 + 1;
  }
  return local_c;
}


