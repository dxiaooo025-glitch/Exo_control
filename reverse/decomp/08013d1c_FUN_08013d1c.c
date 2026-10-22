
undefined4 FUN_08013d1c(void)

{
  char cVar1;
  char local_a;
  char local_9;
  
  local_9 = '\0';
  local_a = '\0';
  *DAT_08013e84 = 0;
  cVar1 = FUN_08013c0c();
  if ((((cVar1 == '\x01') && (cVar1 = FUN_08013a30(DAT_08013e88,0,&local_9), cVar1 == '\x01')) &&
      (local_9 == '\x1e')) &&
     (((cVar1 = FUN_080139d8(DAT_08013e8c,0,&local_a), cVar1 == '\x01' && (local_a == '\x0f')) &&
      (cVar1 = FUN_08013a9c(DAT_08013e88,0x7e,0xb6), cVar1 == '\x01')))) {
    FUN_080092b8(2);
    FUN_08013a30(DAT_08013e88,0,&local_9);
    cVar1 = FUN_08013a9c(DAT_08013e88,0x7c,0);
    if (((cVar1 == '\x01') && (cVar1 = FUN_08013a9c(DAT_08013e88,0x7d,4), cVar1 == '\x01')) &&
       ((cVar1 = FUN_08013a9c(DAT_08013e88,0x40,0xa8), cVar1 == '\x01' &&
        (cVar1 = FUN_08013a9c(DAT_08013e88,0x41,3), cVar1 == '\x01')))) {
      cVar1 = FUN_08013a9c(DAT_08013e8c,0x14,0xb6);
      if (cVar1 != '\x01') {
        return 0;
      }
      FUN_080092b8(0x23);
      cVar1 = FUN_08013a9c(DAT_08013e8c,0x11,0);
      if (((cVar1 == '\x01') && (cVar1 = FUN_08013a9c(DAT_08013e8c,0xf,0), cVar1 == '\x01')) &&
         (cVar1 = FUN_08013a9c(DAT_08013e8c,0x10,7), cVar1 == '\x01')) {
        *DAT_08013e84 = 1;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


