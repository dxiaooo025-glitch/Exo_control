
/* WARNING: Removing unreachable block (ram,0x0801075a) */
/* WARNING: Removing unreachable block (ram,0x0801075e) */
/* WARNING: Removing unreachable block (ram,0x08010762) */
/* WARNING: Removing unreachable block (ram,0x08010770) */

uint FUN_08010704(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint local_2c;
  uint local_14;
  int *local_10;
  int *local_c;
  
  local_14 = 0;
  FUN_08010008();
  if (*DAT_08010888 == 0) {
    FUN_08010968();
  }
  if ((param_1 & *DAT_0801088c) == 0) {
    local_2c = param_1;
    if ((param_1 != 0) && (local_2c = param_1 + 8, (local_2c & 7) != 0)) {
      local_2c = (local_2c & 0xfffffff8) + 8;
    }
    if ((local_2c != 0) && (local_2c <= *DAT_08010890)) {
      local_10 = DAT_08010894;
      for (local_c = (int *)*DAT_08010894; ((uint)local_c[1] < local_2c && (*local_c != 0));
          local_c = (int *)*local_c) {
        local_10 = local_c;
      }
      if (local_c != (int *)*DAT_08010888) {
        local_14 = *local_10 + 8;
        *local_10 = *local_c;
        if (0x10 < local_c[1] - local_2c) {
          uVar2 = local_2c + (int)local_c;
          if ((uVar2 & 7) != 0) {
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
          *(uint *)(uVar2 + 4) = local_c[1] - local_2c;
          local_c[1] = local_2c;
          FUN_08010a2c(uVar2);
        }
        *DAT_08010890 = *DAT_08010890 - local_c[1];
        if (*DAT_08010890 < *DAT_08010898) {
          *DAT_08010898 = *DAT_08010890;
        }
        local_c[1] = local_c[1] | *DAT_0801088c;
        *local_c = 0;
        *DAT_0801089c = *DAT_0801089c + 1;
      }
    }
  }
  FUN_08010024();
  if ((local_14 & 7) == 0) {
    return local_14;
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


