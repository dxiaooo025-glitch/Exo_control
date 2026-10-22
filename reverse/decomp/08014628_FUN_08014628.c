
void FUN_08014628(void)

{
  DataSynchronizationBarrier(0xf);
  *(uint *)(DAT_0801464c + 0xc) = DAT_08014650 | *(uint *)(DAT_0801464c + 0xc) & 0x700;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


