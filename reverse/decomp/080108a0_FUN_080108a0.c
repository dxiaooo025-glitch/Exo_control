
void FUN_080108a0(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + -8);
    if ((*DAT_0801095c & *(uint *)(param_1 + -4)) == 0) {
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
    if (*piVar2 != 0) {
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
    if (((*DAT_0801095c & *(uint *)(param_1 + -4)) != 0) && (*piVar2 == 0)) {
      *(uint *)(param_1 + -4) = *(uint *)(param_1 + -4) & ~*DAT_0801095c;
      FUN_08010008();
      *DAT_08010960 = *DAT_08010960 + *(int *)(param_1 + -4);
      FUN_08010a2c(piVar2);
      *DAT_08010964 = *DAT_08010964 + 1;
      FUN_08010024();
    }
  }
  return;
}


