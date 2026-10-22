
undefined1 FUN_0800e488(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  undefined4 *puVar6;
  undefined1 local_9;
  
  local_9 = 0;
  bVar1 = (byte)*(ushort *)(param_2 + 4);
  bVar5 = *param_2 & 0x60;
  if (bVar5 == 0x40) {
LAB_0800e4b8:
    cVar2 = FUN_0800e1cc(param_1,bVar1);
    if (((cVar2 != -1) && (cVar2 == '\0')) &&
       (*(undefined4 *)(param_1 + 0x2d4) = 0, *(int *)(*(int *)(param_1 + 0x2b8) + 8) != 0)) {
      local_9 = (**(code **)(*(int *)(param_1 + 0x2b8) + 8))(param_1,param_2);
    }
  }
  else {
    if (bVar5 < 0x41) {
      if ((*param_2 & 0x60) == 0) {
        bVar5 = param_2[1];
        if (bVar5 == 3) {
          if (*(char *)(param_1 + 0x29c) != '\x02') {
            if (*(char *)(param_1 + 0x29c) != '\x03') {
              FUN_0800eea6(param_1,param_2);
              return 0;
            }
            if ((((*(short *)(param_2 + 2) == 0) && (bVar1 != 0)) && (bVar1 != 0x80)) &&
               (*(short *)(param_2 + 6) == 0)) {
              FUN_080112dc(param_1,bVar1);
            }
            FUN_0800f054(param_1);
            return 0;
          }
          if ((bVar1 == 0) || (bVar1 == 0x80)) {
            FUN_0800eea6(param_1,param_2);
            return 0;
          }
          FUN_080112dc(param_1,bVar1);
          FUN_080112dc(param_1,0x80);
          return 0;
        }
        if (bVar5 < 4) {
          if (bVar5 == 0) {
            if (*(char *)(param_1 + 0x29c) != '\x02') {
              if (*(char *)(param_1 + 0x29c) != '\x03') {
                FUN_0800eea6(param_1,param_2);
                return 0;
              }
              if ((char)bVar1 < '\0') {
                if (*(short *)((bVar1 & 0xf) * 0x14 + param_1 + 0x24) == 0) {
                  FUN_0800eea6(param_1,param_2);
                  return 0;
                }
              }
              else if (*(short *)((bVar1 & 0xf) * 0x14 + param_1 + 0x164) == 0) {
                FUN_0800eea6(param_1,param_2);
                return 0;
              }
              if ((char)bVar1 < '\0') {
                puVar6 = (undefined4 *)((bVar1 & 0x7f) * 0x14 + param_1 + 0x14);
              }
              else {
                puVar6 = (undefined4 *)((bVar1 & 0x7f) * 0x14 + param_1 + 0x154);
              }
              if ((bVar1 == 0) || (bVar1 == 0x80)) {
                *puVar6 = 0;
              }
              else {
                iVar4 = FUN_08011358(param_1,bVar1);
                if (iVar4 == 0) {
                  *puVar6 = 0;
                }
                else {
                  *puVar6 = 1;
                }
              }
              FUN_0800efa0(param_1,puVar6,2);
              return 0;
            }
            if ((bVar1 != 0) && (bVar1 != 0x80)) {
              FUN_0800eea6(param_1,param_2);
              return 0;
            }
            if ((char)bVar1 < '\0') {
              puVar6 = (undefined4 *)((bVar1 & 0x7f) * 0x14 + param_1 + 0x14);
            }
            else {
              puVar6 = (undefined4 *)((bVar1 & 0x7f) * 0x14 + param_1 + 0x154);
            }
            *puVar6 = 0;
            FUN_0800efa0(param_1,puVar6,2);
            return 0;
          }
          if (bVar5 == 1) {
            if (*(char *)(param_1 + 0x29c) == '\x02') {
              if ((bVar1 == 0) || (bVar1 == 0x80)) {
                FUN_0800eea6(param_1,param_2);
                return 0;
              }
              FUN_080112dc(param_1,bVar1);
              FUN_080112dc(param_1,0x80);
              return 0;
            }
            if (*(char *)(param_1 + 0x29c) != '\x03') {
              FUN_0800eea6(param_1,param_2);
              return 0;
            }
            if (*(short *)(param_2 + 2) != 0) {
              return 0;
            }
            if ((*(ushort *)(param_2 + 4) & 0x7f) != 0) {
              FUN_0801131a(param_1,bVar1);
            }
            FUN_0800f054(param_1);
            cVar2 = FUN_0800e1cc(param_1,bVar1);
            if (cVar2 == -1) {
              return 0;
            }
            if (cVar2 != '\0') {
              return 0;
            }
            *(undefined4 *)(param_1 + 0x2d4) = 0;
            if (*(int *)(*(int *)(param_1 + 0x2b8) + 8) == 0) {
              return 0;
            }
            uVar3 = (**(code **)(*(int *)(param_1 + 0x2b8) + 8))(param_1,param_2);
            return uVar3;
          }
        }
        FUN_0800eea6(param_1,param_2);
        return 0;
      }
      if (bVar5 == 0x20) goto LAB_0800e4b8;
    }
    FUN_0800eea6(param_1,param_2);
  }
  return local_9;
}


