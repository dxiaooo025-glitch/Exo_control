
undefined4
FUN_08009660(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,int param_5,
            short param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0x41) == ' ') {
    if ((param_5 == 0) || (param_6 == 0)) {
      param_1[0x11] = 0x200;
      uVar2 = 1;
    }
    else if ((char)param_1[0x10] == '\x01') {
      uVar2 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 1;
      uVar2 = FUN_080092a0();
      iVar1 = FUN_08009a2c(param_1,0x8000,1,0x19,uVar2);
      if (iVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x41) = 0x22;
        *(undefined1 *)((int)param_1 + 0x42) = 0x40;
        param_1[0x11] = 0;
        param_1[9] = param_5;
        *(short *)((int)param_1 + 0x2a) = param_6;
        param_1[0xd] = 0;
        iVar1 = FUN_0800993c(param_1,param_2,param_3,param_4,param_7,uVar2);
        if (iVar1 == 0) {
          if (*(ushort *)((int)param_1 + 0x2a) < 0x100) {
            *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
            FUN_08009db4(param_1,param_2,(char)param_1[10],0x2000000,DAT_0800988c);
          }
          else {
            *(undefined2 *)(param_1 + 10) = 0xff;
            FUN_08009db4(param_1,param_2,(char)param_1[10],0x1000000,DAT_0800988c);
          }
          do {
            iVar1 = FUN_08009a2c(param_1,4,0,param_7,uVar2);
            if (iVar1 != 0) {
              return 1;
            }
            *(char *)param_1[9] = (char)*(undefined4 *)(*param_1 + 0x24);
            param_1[9] = param_1[9] + 1;
            *(short *)(param_1 + 10) = (short)param_1[10] + -1;
            *(short *)((int)param_1 + 0x2a) = *(short *)((int)param_1 + 0x2a) + -1;
            if ((*(short *)((int)param_1 + 0x2a) != 0) && ((short)param_1[10] == 0)) {
              iVar1 = FUN_08009a2c(param_1,0x80,0,param_7,uVar2);
              if (iVar1 != 0) {
                return 1;
              }
              if (*(ushort *)((int)param_1 + 0x2a) < 0x100) {
                *(undefined2 *)(param_1 + 10) = *(undefined2 *)((int)param_1 + 0x2a);
                FUN_08009db4(param_1,param_2,(char)param_1[10],0x2000000,0);
              }
              else {
                *(undefined2 *)(param_1 + 10) = 0xff;
                FUN_08009db4(param_1,param_2,(char)param_1[10],0x1000000,0);
              }
            }
          } while (*(short *)((int)param_1 + 0x2a) != 0);
          iVar1 = FUN_08009b6c(param_1,param_7,uVar2);
          if (iVar1 == 0) {
            *(undefined4 *)(*param_1 + 0x1c) = 0x20;
            *(uint *)(*param_1 + 4) = DAT_08009890 & *(uint *)(*param_1 + 4);
            *(undefined1 *)((int)param_1 + 0x41) = 0x20;
            *(undefined1 *)((int)param_1 + 0x42) = 0;
            *(undefined1 *)(param_1 + 0x10) = 0;
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x10) = 0;
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


