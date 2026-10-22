
void FUN_080013ae(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  iVar5 = *param_1;
  iVar2 = FUN_08003b8a(*param_1);
  if ((iVar2 == 0) && (iVar2 = FUN_08003a64(*param_1), iVar2 != 0)) {
    param_1[0x135] = *(uint *)(iVar5 + 0x808) >> 8 & 0x3fff;
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 2) == 2) {
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 2;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x10) == 0x10) {
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) & 0xffffffef;
      uVar6 = *(uint *)(iVar5 + 0x20);
      uVar3 = uVar6 & 0xf;
      if ((uVar6 >> 0x11 & 0xf) == 2) {
        if ((uVar6 & 0x7ff0) != 0) {
          FUN_0800373c(iVar5,param_1[uVar3 * 9 + 0x98],uVar6 >> 4 & 0x7ff);
          param_1[uVar3 * 9 + 0x98] = param_1[uVar3 * 9 + 0x98] + (uVar6 >> 4 & 0x7ff);
          param_1[uVar3 * 9 + 0x9a] = param_1[uVar3 * 9 + 0x9a] + (uVar6 >> 4 & 0x7ff);
        }
      }
      else if ((uVar6 >> 0x11 & 0xf) == 6) {
        FUN_0800373c(iVar5,param_1 + 0x127,8);
        param_1[uVar3 * 9 + 0x9a] = param_1[uVar3 * 9 + 0x9a] + (uVar6 >> 4 & 0x7ff);
      }
      *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 0x10;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x80000) == 0x80000) {
      local_1c = 0;
      for (local_18 = FUN_08003a8a(*param_1); local_18 != 0; local_18 = local_18 >> 1) {
        if ((local_18 & 1) != 0) {
          uVar3 = FUN_08003af2(*param_1,local_1c & 0xff);
          if ((uVar3 & 1) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0xb08) = 1;
            FUN_080022fc(param_1,local_1c);
          }
          if ((uVar3 & 8) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0xb08) = 8;
            FUN_080024cc(param_1,local_1c);
          }
          if ((uVar3 & 0x10) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0xb08) = 0x10;
          }
          if ((uVar3 & 2) != 0) {
            if ((*(uint *)(iVar5 + 0x14) & 0x80) == 0x80) {
              *(uint *)(iVar5 + 0x804) = *(uint *)(iVar5 + 0x804) | 0x400;
            }
            if (*(char *)((int)param_1 + local_1c * 0x24 + 599) == '\x01') {
              *(undefined1 *)((int)param_1 + local_1c * 0x24 + 599) = 0;
              FUN_080110f8(param_1,local_1c & 0xff);
            }
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0xb08) = 2;
          }
          if ((uVar3 & 0x20) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0xb08) = 0x20;
          }
          if ((uVar3 & 0x2000) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0xb08) = 0x2000;
          }
        }
        local_1c = local_1c + 1;
      }
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x40000) == 0x40000) {
      local_18 = FUN_08003abe(*param_1);
      local_1c = 0;
      for (; local_18 != 0; local_18 = local_18 >> 1) {
        if ((local_18 & 1) != 0) {
          uVar3 = FUN_08003b2e(*param_1,local_1c & 0xff);
          if ((uVar3 & 1) != 0) {
            *(uint *)(iVar5 + 0x834) = ~(1 << (local_1c & 0xf)) & *(uint *)(iVar5 + 0x834);
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0x908) = 1;
            if (((*(char *)((int)param_1 + 6) == '\x01') &&
                (param_1[local_1c * 9 + 8] = param_1[local_1c * 9 + 8] + param_1[local_1c * 9 + 7],
                local_1c == 0)) && (param_1[9] == 0)) {
              FUN_08003bf0(*param_1,1,param_1 + 0x127);
            }
            FUN_08010fee(param_1,local_1c & 0xff);
          }
          if ((uVar3 & 8) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0x908) = 8;
          }
          if ((uVar3 & 0x10) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0x908) = 0x10;
          }
          if ((uVar3 & 0x40) != 0) {
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0x908) = 0x40;
          }
          if ((uVar3 & 2) != 0) {
            FUN_08002c28(iVar5,local_1c);
            if (*(char *)((int)param_1 + local_1c * 0x24 + 0x17) == '\x01') {
              *(undefined1 *)((int)param_1 + local_1c * 0x24 + 0x17) = 0;
              FUN_0801111c(param_1,local_1c & 0xff);
            }
            *(undefined4 *)(iVar5 + local_1c * 0x20 + 0x908) = 2;
          }
          if ((uVar3 & 0x80) != 0) {
            FUN_080021e4(param_1,local_1c);
          }
        }
        local_1c = local_1c + 1;
      }
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x80000000) == 0x80000000) {
      *(uint *)(iVar5 + 0x804) = *(uint *)(iVar5 + 0x804) & 0xfffffffe;
      if ((char)param_1[0x133] == '\x01') {
        *(undefined1 *)(param_1 + 0x133) = 0;
        FUN_08002650(param_1,0);
      }
      else {
        FUN_080110dc(param_1);
      }
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x80000000;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x800) == 0x800) {
      if ((*(uint *)(iVar5 + 0x808) & 1) == 1) {
        FUN_08011090(param_1);
      }
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x800;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x8000000) == 0x8000000) {
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x8000000;
      if ((char)param_1[0x133] == '\0') {
        *(undefined1 *)(param_1 + 0x133) = 1;
        param_1[0x134] = *(uint *)(*param_1 + 0x54) >> 2 & 0xf;
        FUN_08002650(param_1,1);
      }
      else {
        FUN_08011090(param_1);
      }
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x1000) == 0x1000) {
      *(uint *)(iVar5 + 0x804) = *(uint *)(iVar5 + 0x804) & 0xfffffffe;
      FUN_08002c28(*param_1,0x10);
      for (local_14 = 0; local_14 < *(byte *)(param_1 + 1); local_14 = local_14 + 1) {
        *(undefined4 *)(iVar5 + local_14 * 0x20 + 0x908) = 0xfb7f;
        *(uint *)(iVar5 + local_14 * 0x20 + 0x900) =
             *(uint *)(iVar5 + local_14 * 0x20 + 0x900) & 0xffdfffff;
        *(undefined4 *)(iVar5 + local_14 * 0x20 + 0xb08) = 0xfb7f;
        *(uint *)(iVar5 + local_14 * 0x20 + 0xb00) =
             *(uint *)(iVar5 + local_14 * 0x20 + 0xb00) & 0xffdfffff;
        *(uint *)(iVar5 + local_14 * 0x20 + 0xb00) =
             *(uint *)(iVar5 + local_14 * 0x20 + 0xb00) | 0x8000000;
      }
      *(uint *)(iVar5 + 0x81c) = *(uint *)(iVar5 + 0x81c) | 0x10001;
      if (*(char *)((int)param_1 + 0xf) == '\0') {
        *(uint *)(iVar5 + 0x814) = *(uint *)(iVar5 + 0x814) | 0x202b;
        *(uint *)(iVar5 + 0x810) = *(uint *)(iVar5 + 0x810) | 0xb;
      }
      else {
        *(uint *)(iVar5 + 0x884) = *(uint *)(iVar5 + 0x884) | 0xb;
        *(uint *)(iVar5 + 0x844) = *(uint *)(iVar5 + 0x844) | 0xb;
      }
      *(uint *)(iVar5 + 0x800) = *(uint *)(iVar5 + 0x800) & 0xfffff80f;
      FUN_08003bf0(*param_1,*(undefined1 *)((int)param_1 + 6),param_1 + 0x127);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x1000;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x2000) == 0x2000) {
      FUN_08003ba8(*param_1);
      uVar1 = FUN_08002d1a(*param_1);
      *(undefined1 *)((int)param_1 + 7) = uVar1;
      iVar2 = *param_1;
      uVar4 = FUN_08004b24();
      FUN_0800274c(iVar2,uVar4,*(undefined1 *)((int)param_1 + 7));
      FUN_0801103e(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x2000;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 8) == 8) {
      FUN_08011022(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 8;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x80) == 0x80) {
      *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) & 0xffffff7f;
      for (local_1c = 1; local_1c < *(byte *)(param_1 + 1); local_1c = local_1c + 1) {
        if (*(char *)((int)param_1 + local_1c * 0x24 + 599) == '\x01') {
          FUN_08002182(param_1,local_1c & 0xff);
        }
      }
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x100000) == 0x100000) {
      for (local_1c = 1; local_1c < *(byte *)(param_1 + 1); local_1c = local_1c + 1) {
        if (((char)param_1[local_1c * 9 + 6] == '\x01') &&
           (*(int *)(iVar5 + local_1c * 0x20 + 0x900) < 0)) {
          *(undefined1 *)((int)param_1 + local_1c * 0x24 + 0x17) = 1;
          FUN_08002182(param_1,local_1c & 0xff | 0x80);
        }
      }
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x100000;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x200000) == 0x200000) {
      for (local_1c = 1; local_1c < *(byte *)(param_1 + 1); local_1c = local_1c + 1) {
        uVar3 = *(uint *)(iVar5 + local_1c * 0x20 + 0xb00);
        if ((((char)param_1[local_1c * 9 + 0x96] == '\x01') && ((int)uVar3 < 0)) &&
           ((uVar3 & 0x10000) == (param_1[0x135] & 1U))) {
          *(undefined1 *)((int)param_1 + local_1c * 0x24 + 599) = 1;
          *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | 0x80;
          if ((*(uint *)(iVar5 + 0x14) & 0x80) == 0) {
            *(uint *)(iVar5 + 0x804) = *(uint *)(iVar5 + 0x804) | 0x200;
            break;
          }
        }
      }
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x200000;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 0x40000000) == 0x40000000) {
      FUN_08011140(param_1);
      *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0x40000000;
    }
    uVar3 = FUN_08003a64(*param_1);
    if ((uVar3 & 4) == 4) {
      uVar3 = *(uint *)(*param_1 + 4);
      if ((uVar3 & 4) != 0) {
        FUN_0801115c(param_1);
      }
      *(uint *)(*param_1 + 4) = uVar3 | *(uint *)(*param_1 + 4);
    }
  }
  return;
}


