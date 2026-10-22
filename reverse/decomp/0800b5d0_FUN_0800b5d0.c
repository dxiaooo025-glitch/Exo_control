
undefined4 FUN_0800b5d0(int *param_1,int param_2,int param_3,ushort param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  ushort local_10;
  ushort local_e;
  uint local_c;
  
  iVar4 = *param_1;
  puVar5 = (undefined2 *)(*param_1 + 0x30);
  uVar1 = (short)((uint)param_1[0xf] >> 5) + 1;
  iVar2 = FUN_080092a0();
  if (*(char *)((int)param_1 + 0x81) == '\x01') {
    if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
      uVar6 = 1;
    }
    else if ((char)param_1[0x20] == '\x01') {
      uVar6 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(undefined1 *)((int)param_1 + 0x81) = 5;
      param_1[0x21] = 0;
      param_1[0x19] = param_3;
      *(ushort *)((int)param_1 + 0x6a) = param_4;
      *(ushort *)(param_1 + 0x1a) = param_4;
      param_1[0x17] = param_2;
      *(ushort *)((int)param_1 + 0x62) = param_4;
      *(ushort *)(param_1 + 0x18) = param_4;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xfff9ffff;
      if (((*param_1 == DAT_0800b864) || (*param_1 == DAT_0800b868)) || (*param_1 == DAT_0800b86c))
      {
        local_c = 0x10;
      }
      else {
        local_c = 8;
      }
      *(uint *)(*param_1 + 4) = DAT_0800b870 & *(uint *)(*param_1 + 4) | (uint)param_4;
      *(uint *)*param_1 = *(uint *)*param_1 | 1;
      if (param_1[1] == 0x400000) {
        *(uint *)*param_1 = *(uint *)*param_1 | 0x200;
      }
      local_10 = param_4;
      local_e = param_4;
      if ((uint)param_1[3] < 0x10) {
        if (7 < (uint)param_1[3]) {
          while ((local_e != 0 || (local_10 != 0))) {
            if (((*(uint *)(*param_1 + 0x14) & 2) == 2) &&
               ((local_e != 0 && ((uint)local_10 < (local_c >> 1) + (uint)local_e)))) {
              *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)param_1[0x17];
              param_1[0x17] = param_1[0x17] + 2;
              *(short *)((int)param_1 + 0x62) = *(short *)((int)param_1 + 0x62) + -1;
              local_e = *(ushort *)((int)param_1 + 0x62);
            }
            if (local_10 != 0) {
              if ((*(uint *)(*param_1 + 0x14) & 1) == 1) {
                *(undefined2 *)param_1[0x19] = *puVar5;
                param_1[0x19] = param_1[0x19] + 2;
                *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
                local_10 = *(ushort *)((int)param_1 + 0x6a);
              }
              else if ((local_10 < uVar1) && ((*(uint *)(*param_1 + 0x14) & 0x8000) != 0)) {
                *(undefined2 *)param_1[0x19] = *puVar5;
                param_1[0x19] = param_1[0x19] + 2;
                *(undefined2 *)param_1[0x19] = *puVar5;
                param_1[0x19] = param_1[0x19] + 2;
                *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -2;
                local_10 = *(ushort *)((int)param_1 + 0x6a);
              }
              else if ((local_10 == 1) && ((*(uint *)(*param_1 + 0x14) & 0x2000) != 0)) {
                *(undefined2 *)param_1[0x19] = *puVar5;
                param_1[0x19] = param_1[0x19] + 2;
                *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
                local_10 = *(ushort *)((int)param_1 + 0x6a);
              }
              else {
                iVar3 = FUN_080092a0();
                if (((param_5 <= (uint)(iVar3 - iVar2)) && (param_5 != 0xffffffff)) ||
                   (param_5 == 0)) {
                  FUN_0800bc44(param_1);
                  param_1[0x21] = param_1[0x21] | 0x100;
                  *(undefined1 *)((int)param_1 + 0x81) = 1;
                  *(undefined1 *)(param_1 + 0x20) = 0;
                  return 3;
                }
              }
            }
          }
LAB_0800bbee:
          iVar2 = FUN_0800bd84(param_1,8,0,param_5,iVar2);
          if (iVar2 != 0) {
            param_1[0x21] = param_1[0x21] | 0x20;
          }
          FUN_0800bc44(param_1);
          *(undefined1 *)((int)param_1 + 0x81) = 1;
          *(undefined1 *)(param_1 + 0x20) = 0;
          if (param_1[0x21] == 0) {
            return 0;
          }
          return 1;
        }
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                do {
                  if ((local_e == 0) && (local_10 == 0)) goto LAB_0800bbee;
                  if ((((*(uint *)(*param_1 + 0x14) & 2) == 2) && (local_e != 0)) &&
                     ((uint)local_10 < local_c + local_e)) {
                    *(undefined1 *)(*param_1 + 0x20) = *(undefined1 *)param_1[0x17];
                    param_1[0x17] = param_1[0x17] + 1;
                    *(short *)((int)param_1 + 0x62) = *(short *)((int)param_1 + 0x62) + -1;
                    local_e = *(ushort *)((int)param_1 + 0x62);
                  }
                } while (local_10 == 0);
                if ((*(uint *)(*param_1 + 0x14) & 1) != 1) break;
                *(undefined1 *)param_1[0x19] = *(undefined1 *)(*param_1 + 0x30);
                param_1[0x19] = param_1[0x19] + 1;
                *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
                local_10 = *(ushort *)((int)param_1 + 0x6a);
              }
              if ((uVar1 <= local_10) || ((*(uint *)(*param_1 + 0x14) & 0x8000) == 0)) break;
              *(undefined1 *)param_1[0x19] = *(undefined1 *)(*param_1 + 0x30);
              param_1[0x19] = param_1[0x19] + 1;
              *(undefined1 *)param_1[0x19] = *(undefined1 *)(*param_1 + 0x30);
              param_1[0x19] = param_1[0x19] + 1;
              *(undefined1 *)param_1[0x19] = *(undefined1 *)(*param_1 + 0x30);
              param_1[0x19] = param_1[0x19] + 1;
              *(undefined1 *)param_1[0x19] = *(undefined1 *)(*param_1 + 0x30);
              param_1[0x19] = param_1[0x19] + 1;
              *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -4;
              local_10 = *(ushort *)((int)param_1 + 0x6a);
            }
            if ((3 < local_10) || ((*(uint *)(*param_1 + 0x14) & 0x6000) == 0)) break;
            *(undefined1 *)param_1[0x19] = *(undefined1 *)(*param_1 + 0x30);
            param_1[0x19] = param_1[0x19] + 1;
            *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
            local_10 = *(ushort *)((int)param_1 + 0x6a);
          }
          iVar4 = FUN_080092a0();
        } while ((((uint)(iVar4 - iVar2) < param_5) || (param_5 == 0xffffffff)) && (param_5 != 0));
        FUN_0800bc44(param_1);
        param_1[0x21] = param_1[0x21] | 0x100;
        *(undefined1 *)((int)param_1 + 0x81) = 1;
        *(undefined1 *)(param_1 + 0x20) = 0;
        uVar6 = 3;
      }
      else {
        do {
          while( true ) {
            while( true ) {
              do {
                if ((local_e == 0) && (local_10 == 0)) goto LAB_0800bbee;
                if (((*(uint *)(*param_1 + 0x14) & 2) == 2) &&
                   ((local_e != 0 && ((uint)local_10 < (local_c >> 2) + (uint)local_e)))) {
                  *(undefined4 *)(*param_1 + 0x20) = *(undefined4 *)param_1[0x17];
                  param_1[0x17] = param_1[0x17] + 4;
                  *(short *)((int)param_1 + 0x62) = *(short *)((int)param_1 + 0x62) + -1;
                  local_e = *(ushort *)((int)param_1 + 0x62);
                }
              } while (local_10 == 0);
              if ((*(uint *)(*param_1 + 0x14) & 1) != 1) break;
              *(undefined4 *)param_1[0x19] = *(undefined4 *)(*param_1 + 0x30);
              param_1[0x19] = param_1[0x19] + 4;
              *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
              local_10 = *(ushort *)((int)param_1 + 0x6a);
            }
            if ((uVar1 <= local_10) || ((*(uint *)(*param_1 + 0x14) & 0x8000) == 0)) break;
            *(undefined4 *)param_1[0x19] = *(undefined4 *)(*param_1 + 0x30);
            param_1[0x19] = param_1[0x19] + 4;
            *(short *)((int)param_1 + 0x6a) = *(short *)((int)param_1 + 0x6a) + -1;
            local_10 = *(ushort *)((int)param_1 + 0x6a);
          }
          iVar4 = FUN_080092a0();
        } while ((((uint)(iVar4 - iVar2) < param_5) || (param_5 == 0xffffffff)) && (param_5 != 0));
        FUN_0800bc44(param_1);
        param_1[0x21] = param_1[0x21] | 0x100;
        *(undefined1 *)((int)param_1 + 0x81) = 1;
        *(undefined1 *)(param_1 + 0x20) = 0;
        uVar6 = 3;
      }
    }
  }
  else {
    uVar6 = 2;
  }
  return uVar6;
}


