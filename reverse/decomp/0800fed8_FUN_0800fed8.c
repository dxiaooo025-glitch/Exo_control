
void FUN_0800fed8(int param_1)

{
  bool bVar1;
  int local_c;
  
  local_c = 0;
  if (param_1 != 0) {
    if (*DAT_0800ff3c != 0) {
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
    FUN_08010008();
    FUN_08010538(param_1,0);
    local_c = FUN_08010024();
  }
  if (local_c == 0) {
    *DAT_0800ff40 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}


