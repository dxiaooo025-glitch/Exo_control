
void FUN_080102d4(void)

{
  bool bVar1;
  int iVar2;
  
  if (*DAT_08010378 == 0) {
    *DAT_0801037c = 0;
    if (*(int *)((0x1f - LZCOUNT(*DAT_08010380)) * 0x14 + DAT_08010384) == 0) {
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
    iVar2 = (0x1f - LZCOUNT(*DAT_08010380)) * 0x14 + DAT_08010384;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(*(int *)(iVar2 + 4) + 4);
    if (*(int *)(iVar2 + 4) == iVar2 + 8) {
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(*(int *)(iVar2 + 4) + 4);
    }
    *DAT_08010388 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0xc);
  }
  else {
    *DAT_0801037c = 1;
  }
  return;
}


