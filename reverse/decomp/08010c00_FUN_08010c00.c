
undefined4 FUN_08010c00(void)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  byte local_1d;
  
  pbVar3 = DAT_08010d30;
  if (*DAT_08010d24 == DAT_08010d28) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*DAT_08010d24 == DAT_08010d2c) {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar1 = *DAT_08010d30;
  *DAT_08010d30 = 0xff;
  local_1d = *pbVar3;
  *DAT_08010d34 = local_1d & 0x50;
  *DAT_08010d38 = 7;
  for (; (local_1d & 0x80) == 0x80; local_1d = local_1d << 1) {
    *DAT_08010d38 = *DAT_08010d38 - 1;
  }
  if (*DAT_08010d38 == 3) {
    *DAT_08010d38 = *DAT_08010d38 << 8;
    *DAT_08010d38 = *DAT_08010d38 & 0x700;
    *pbVar3 = bVar1;
    *DAT_08010d3c = *DAT_08010d3c | 0xf00000;
    *DAT_08010d3c = *DAT_08010d3c | 0xf0000000;
    FUN_08010eac();
    *DAT_08010d40 = 0;
    FUN_08010ef4();
    *DAT_08010d44 = *DAT_08010d44 | 0xc0000000;
    FUN_08010bd8();
    FUN_080102d4();
    FUN_08010b48();
    return 0;
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x50);
  }
  InstructionSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


