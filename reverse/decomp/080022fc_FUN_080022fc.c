
undefined4 FUN_080022fc(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x40);
  uVar3 = *(uint *)(iVar1 + param_2 * 0x20 + 0xb08);
  if (*(char *)((int)param_1 + 6) == '\x01') {
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 0x20) == 0) {
        if ((uVar3 & 0x28) == 0) {
          if ((DAT_080024c4 < uVar2) && ((uVar3 & 0x8000) != 0)) {
            *(undefined4 *)(iVar1 + param_2 * 0x20 + 0xb08) = 0x8000;
          }
          else {
            param_1[param_2 * 9 + 0x9a] =
                 param_1[param_2 * 9 + 0x9d] - (*(uint *)(iVar1 + param_2 * 0x20 + 0xb10) & 0x7ffff)
            ;
            if (param_2 == 0) {
              if (param_1[0x99] == 0) {
                FUN_08003bf0(*param_1,1,param_1 + 0x127);
              }
              else {
                param_1[0x98] = param_1[0x98] + param_1[0x9a];
              }
            }
            FUN_08010fb8(param_1,param_2 & 0xff);
          }
        }
      }
      else {
        *(undefined4 *)(iVar1 + param_2 * 0x20 + 0xb08) = 0x20;
      }
    }
    else if ((DAT_080024c4 < uVar2) && ((uVar3 & 0x8000) != 0)) {
      *(undefined4 *)(iVar1 + param_2 * 0x20 + 0xb08) = 0x8000;
    }
  }
  else if (uVar2 == DAT_080024c8) {
    if ((uVar3 & 0x8000) == 0) {
      if ((uVar3 & 0x20) != 0) {
        *(undefined4 *)(iVar1 + param_2 * 0x20 + 0xb08) = 0x20;
      }
      FUN_08010fb8(param_1,param_2 & 0xff);
    }
    else {
      *(undefined4 *)(iVar1 + param_2 * 0x20 + 0xb08) = 0x8000;
    }
  }
  else {
    if ((param_2 == 0) && (param_1[0x99] == 0)) {
      FUN_08003bf0(*param_1,0,param_1 + 0x127);
    }
    FUN_08010fb8(param_1,param_2 & 0xff);
  }
  return 0;
}


