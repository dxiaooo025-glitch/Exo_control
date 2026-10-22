
undefined1 FUN_08013c0c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  char local_15;
  byte local_14;
  byte local_13;
  char local_12;
  char local_11;
  
  local_15 = '\0';
  local_11 = '\0';
  local_12 = '\0';
  for (local_13 = 0; local_13 < 2; local_13 = local_13 + 1) {
    FUN_08013a30((uint)local_13 * 8 + DAT_08013d10,0,&local_15);
    iVar3 = FUN_08013a30((uint)local_13 * 8 + DAT_08013d10,0,&local_15);
    piVar1 = DAT_08013d14;
    if ((iVar3 != 0) && (local_15 == '\x1e')) {
      piVar6 = (int *)((uint)local_13 * 8 + DAT_08013d10);
      iVar3 = piVar6[1];
      *DAT_08013d14 = *piVar6;
      piVar1[1] = iVar3;
      local_11 = '\x01';
      break;
    }
  }
  local_14 = 0;
  do {
    if (1 < local_14) {
LAB_08013cee:
      if ((local_11 == '\0') || (local_12 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      return uVar5;
    }
    if ((((local_11 == '\0') || (*(int *)(DAT_08013d10 + (uint)local_14 * 8) != *DAT_08013d14)) ||
        (*(short *)((uint)local_14 * 8 + DAT_08013d10 + 4) != (short)DAT_08013d14[1])) &&
       ((iVar3 = FUN_080139d8((uint)local_14 * 8 + DAT_08013d10,0,&local_15), puVar2 = DAT_08013d18,
        iVar3 != 0 && (local_15 == '\x0f')))) {
      puVar7 = (undefined4 *)((uint)local_14 * 8 + DAT_08013d10);
      uVar4 = puVar7[1];
      *DAT_08013d18 = *puVar7;
      puVar2[1] = uVar4;
      local_12 = '\x01';
      goto LAB_08013cee;
    }
    local_14 = local_14 + 1;
  } while( true );
}


