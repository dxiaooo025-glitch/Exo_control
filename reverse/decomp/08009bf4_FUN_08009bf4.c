
char FUN_08009bf4(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  char local_9;
  
  local_9 = '\0';
  local_10 = 0;
  if ((*(uint *)(*param_1 + 0x18) & 0x10) != 0) {
    *(undefined4 *)(*param_1 + 0x1c) = 0x10;
    local_14 = param_3;
LAB_08009cbe:
    do {
      if (((*(uint *)(*param_1 + 0x18) & 0x20) == 0x20) || (local_9 != '\0')) goto LAB_08009cd4;
      if (param_2 != 0xffffffff) {
        iVar1 = FUN_080092a0();
        if ((param_2 < (uint)(iVar1 - local_14)) || (param_2 == 0)) {
          if (((*(uint *)(*param_1 + 0x18) & 0x8000) == 0x8000) &&
             (((*(uint *)(*param_1 + 4) & 0x4000) != 0x4000 &&
              (*(char *)((int)param_1 + 0x42) != ' ')))) {
            *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x4000;
            local_14 = FUN_080092a0();
          }
          do {
            if ((*(uint *)(*param_1 + 0x18) & 0x20) == 0x20) goto LAB_08009cbe;
            iVar1 = FUN_080092a0();
          } while ((uint)(iVar1 - local_14) < 0x1a);
          local_10 = 0x20;
          local_9 = '\x01';
        }
      }
    } while( true );
  }
LAB_08009cf2:
  uVar2 = *(uint *)(*param_1 + 0x18);
  if ((uVar2 & 0x100) != 0) {
    local_10 = local_10 | 1;
    *(undefined4 *)(*param_1 + 0x1c) = 0x100;
    local_9 = '\x01';
  }
  if ((uVar2 & 0x400) != 0) {
    local_10 = local_10 | 8;
    *(undefined4 *)(*param_1 + 0x1c) = 0x400;
    local_9 = '\x01';
  }
  if ((uVar2 & 0x200) != 0) {
    local_10 = local_10 | 2;
    *(undefined4 *)(*param_1 + 0x1c) = 0x200;
    local_9 = '\x01';
  }
  if (local_9 != '\0') {
    FUN_080099e4(param_1);
    *(uint *)(*param_1 + 4) = DAT_08009db0 & *(uint *)(*param_1 + 4);
    param_1[0x11] = param_1[0x11] | local_10;
    *(undefined1 *)((int)param_1 + 0x41) = 0x20;
    *(undefined1 *)((int)param_1 + 0x42) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return local_9;
LAB_08009cd4:
  if (local_9 == '\0') {
    *(undefined4 *)(*param_1 + 0x1c) = 0x20;
  }
  local_10 = local_10 | 4;
  local_9 = '\x01';
  goto LAB_08009cf2;
}


