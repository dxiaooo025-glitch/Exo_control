
/* WARNING: Removing unreachable block (ram,0x0800fbfc) */
/* WARNING: Removing unreachable block (ram,0x0800fc00) */
/* WARNING: Removing unreachable block (ram,0x0800fc04) */
/* WARNING: Removing unreachable block (ram,0x0800fc12) */

undefined4
FUN_0800fba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  bool bVar1;
  undefined4 local_1c [4];
  int local_c;
  
  if (param_6 == 0) {
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
  if (param_7 == 0) {
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
  if ((param_7 == 0) || (param_6 == 0)) {
    local_1c[0] = 0;
  }
  else {
    local_c = param_7;
    *(int *)(param_7 + 0x30) = param_6;
    *(undefined1 *)(param_7 + 0x51) = 2;
    FUN_0800fcf2(param_1,param_2,param_3,param_4,param_5,local_1c,param_7,0);
    FUN_0800fe04(local_c);
  }
  return local_1c[0];
}


