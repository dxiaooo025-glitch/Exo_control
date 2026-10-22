
/* WARNING: Removing unreachable block (ram,0x08010b94) */

void FUN_08010b48(void)

{
  bool bVar1;
  
  if (*DAT_08010ba0 == -1) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    do {
    } while( true );
  }
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


