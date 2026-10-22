
void FUN_0800ff44(void)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  uint local_c;
  
  local_18[0] = 0;
  local_1c = 0;
  FUN_08011d50(local_18,&local_1c,&local_20);
  iVar2 = FUN_0800fba8(DAT_0800fff4,DAT_0800fff0,local_20,0,0,local_1c,local_18[0]);
  *DAT_0800fff8 = iVar2;
  local_c = (uint)(*DAT_0800fff8 != 0);
  if (local_c == 1) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x50);
    }
    InstructionSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    local_10 = 0x50;
    *DAT_0800fffc = 0xffffffff;
    *DAT_08010000 = 1;
    *DAT_08010004 = 0;
    FUN_08010c00();
  }
  else if (local_c == 0xffffffff) {
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
  return;
}


