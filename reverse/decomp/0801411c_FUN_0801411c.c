
void FUN_0801411c(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  char local_9;
  
  local_9 = *DAT_080141c4;
  if (((local_9 != '\x01') && (*DAT_080141c8 == DAT_080141cc)) &&
     (999 < (uint)(param_1 - *DAT_080141d0))) {
    *DAT_080141d0 = param_1;
    iVar1 = FUN_080142ac(DAT_080141d4,DAT_080141c8);
    local_9 = iVar1 == 0;
    *DAT_080141c4 = local_9;
  }
  if ((local_9 != '\0') && (0x31 < (uint)(param_1 - *DAT_080141d8))) {
    local_10 = 0;
    local_14 = 0;
    *DAT_080141d8 = param_1;
    iVar1 = FUN_08014490(DAT_080141d4,&local_10,&local_14);
    if (iVar1 == 0) {
      *(undefined4 *)(DAT_080141c4 + 4) = local_10;
      *(undefined4 *)(DAT_080141c4 + 8) = local_14;
    }
    else {
      *DAT_080141c4 = '\0';
    }
  }
  return;
}


