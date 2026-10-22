
undefined4 FUN_08010bd8(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte *pbVar4;
  undefined4 unaff_r8;
  undefined4 in_cr14;
  byte bStack_1d;
  
  pbVar4 = DAT_08010d30;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setMainStackPointer(*(undefined4 *)*puRam08010bfc);
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setThreadModePrivileged(1);
    bVar2 = (bool)isThreadMode();
    if (bVar2) {
      cVar3 = isUsingMainStack();
      setStackMode(cVar3 == '\x01');
    }
  }
  enableIRQinterrupts();
  enableFIQinterrupts();
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  software_interrupt(0);
  coprocessor_store(0,in_cr14,unaff_r8);
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
  bStack_1d = *pbVar4;
  *DAT_08010d34 = bStack_1d & 0x50;
  *DAT_08010d38 = 7;
  for (; (bStack_1d & 0x80) == 0x80; bStack_1d = bStack_1d << 1) {
    *DAT_08010d38 = *DAT_08010d38 - 1;
  }
  if (*DAT_08010d38 == 3) {
    *DAT_08010d38 = *DAT_08010d38 << 8;
    *DAT_08010d38 = *DAT_08010d38 & 0x700;
    *pbVar4 = bVar1;
    *DAT_08010d3c = *DAT_08010d3c | 0xf00000;
    *DAT_08010d3c = *DAT_08010d3c | 0xf0000000;
    FUN_08010eac(0);
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


