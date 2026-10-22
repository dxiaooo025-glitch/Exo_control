
undefined4 FUN_08010024(void)

{
  bool bVar1;
  int iVar2;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  if (*DAT_0801013c == 0) {
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
  FUN_08010d48();
  *DAT_0801013c = *DAT_0801013c + -1;
  if ((*DAT_0801013c == 0) && (*DAT_08010140 != 0)) {
    while (*DAT_08010144 != 0) {
      local_c = *(int *)(DAT_08010144[3] + 0xc);
      FUN_0800fb54(local_c + 0x18);
      FUN_0800fb54(local_c + 4);
      *DAT_08010148 = *DAT_08010148 | 1 << (*(uint *)(local_c + 0x2c) & 0xff);
      FUN_0800fa9a(DAT_0801014c + *(int *)(local_c + 0x2c) * 0x14,local_c + 4);
      if (*(uint *)(*DAT_08010150 + 0x2c) <= *(uint *)(local_c + 0x2c)) {
        *DAT_08010154 = 1;
      }
    }
    if (local_c != 0) {
      FUN_080104f8();
    }
    local_14 = *DAT_08010158;
    if (local_14 != 0) {
      do {
        iVar2 = FUN_08010160();
        if (iVar2 != 0) {
          *DAT_08010154 = 1;
        }
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      *DAT_08010158 = 0;
    }
    if (*DAT_08010154 != 0) {
      local_10 = 1;
      *DAT_0801015c = 0x10000000;
      DataSynchronizationBarrier(0xf);
      InstructionSynchronizationBarrier(0xf);
    }
  }
  FUN_08010dac();
  return local_10;
}


