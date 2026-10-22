
undefined4 FUN_0801f1b4(int param_1,undefined1 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (param_2 == (undefined1 *)0x0)) {
    uVar3 = 0;
  }
  else {
    FUN_0801e2fa(param_2);
    iVar1 = FUN_0801e5a0(param_1,param_2);
    if (((iVar1 == 0) &&
        (((((iVar1 = FUN_0801e668(param_1,param_2), iVar1 == 0 &&
            (iVar1 = FUN_0801e748(param_1,param_2), iVar1 == 0)) &&
           (iVar1 = FUN_0801e864(param_1,param_2), iVar1 == 0)) &&
          ((iVar1 = FUN_0801e968(param_1,param_2), iVar1 == 0 &&
           (iVar1 = FUN_0801ed24(param_1,param_2), iVar1 == 0)))) &&
         (iVar1 = FUN_0801ee40(param_1,param_2), iVar1 == 0)))) &&
       ((((iVar1 = FUN_0801ef4c(param_1,param_2), iVar1 == 0 &&
          (iVar1 = FUN_0801eb48(param_1,param_2), iVar1 == 0)) &&
         (iVar1 = FUN_0801ea6c(param_1,param_2), iVar1 == 0)) &&
        (iVar1 = FUN_0801f084(param_1,param_2), iVar1 == 0)))) {
      iVar1 = FUN_0801e270(param_1,DAT_0801f498);
      if ((iVar1 == 0) && (iVar1 = FUN_0801e270(param_1,DAT_0801f49c), iVar1 == 0)) {
        iVar1 = FUN_0801e270(param_1,DAT_0801f4a0);
        if ((iVar1 == 0) &&
           ((iVar1 = FUN_0801e270(param_1,DAT_0801f4a4), iVar1 == 0 &&
            (iVar1 = FUN_0801e270(param_1,DAT_0801f4a8), iVar1 == 0)))) {
          iVar1 = FUN_0801e270(param_1,DAT_0801f4ac);
          if ((iVar1 == 0) && (iVar1 = FUN_0801e270(param_1,DAT_0801f4b0), iVar1 == 0)) {
            iVar1 = FUN_0801e270(param_1,DAT_0801f4b4);
            if (iVar1 == 0) {
              iVar1 = FUN_0801e270(param_1,DAT_0801f4b8);
              if (iVar1 == 0) {
                iVar1 = FUN_0801e270(param_1,DAT_0801f4bc);
                if ((((iVar1 == 0) && (iVar1 = FUN_0801e270(param_1,DAT_0801f4c0), iVar1 == 0)) &&
                    (iVar1 = FUN_0801e270(param_1,DAT_0801f4c4), iVar1 == 0)) &&
                   (iVar1 = FUN_0801e270(param_1,DAT_0801f4c8), iVar1 == 0)) {
                  iVar1 = FUN_0801e270(param_1,DAT_0801f4cc);
                  if ((iVar1 == 0) && (iVar1 = FUN_0801e270(param_1,DAT_0801f4d0), iVar1 == 0)) {
                    iVar1 = FUN_0801e270(param_1,DAT_0801f4d4);
                    if ((iVar1 == 0) && (iVar1 = FUN_0801e270(param_1,DAT_0801f4d8), iVar1 == 0)) {
                      iVar1 = FUN_0801e270(param_1,DAT_0801f4dc);
                      if ((iVar1 == 0) && (iVar1 = FUN_0801e270(param_1,DAT_0801f4e0), iVar1 == 0))
                      {
                        iVar1 = FUN_0801e270(param_1,DAT_0801f4e4);
                        if ((iVar1 == 0) &&
                           (((iVar1 = FUN_0801e270(param_1,DAT_0801f4e8), iVar1 == 0 &&
                             (iVar1 = FUN_0801e270(param_1,DAT_0801f4ec), iVar1 == 0)) &&
                            (iVar1 = FUN_0801e270(param_1,DAT_0801f4f0), iVar1 == 0)))) {
                          uVar3 = 0;
                        }
                        else {
                          pcVar2 = (char *)FUN_0801e1fa(param_1);
                          *param_2 = 0x10;
                          param_2[1] = *pcVar2;
                          if ((*pcVar2 == '1') || (*pcVar2 == '2')) {
                            param_2[2] = 1;
                          }
                          else {
                            param_2[2] = 2;
                          }
                          if ((*pcVar2 == '1') || (*pcVar2 == '3')) {
                            param_2[4] = 1;
                          }
                          else {
                            param_2[4] = 0xff;
                          }
                          uVar3 = 1;
                        }
                      }
                      else {
                        *param_2 = 0x11;
                        param_2[1] = 0x37;
                        uVar3 = 1;
                      }
                    }
                    else {
                      *param_2 = 0x11;
                      param_2[1] = 0x36;
                      uVar3 = 1;
                    }
                  }
                  else {
                    *param_2 = 0x11;
                    param_2[1] = 0x35;
                    uVar3 = 1;
                  }
                }
                else {
                  *param_2 = 0x11;
                  param_2[1] = 0x74;
                  uVar3 = 1;
                }
              }
              else {
                *param_2 = 5;
                uVar3 = 1;
              }
            }
            else {
              *param_2 = 4;
              uVar3 = 1;
            }
          }
          else {
            *param_2 = 3;
            param_2[1] = 0x7a;
            uVar3 = 1;
          }
        }
        else {
          *param_2 = 2;
          param_2[1] = 0x78;
          uVar3 = 1;
        }
      }
      else {
        *param_2 = 1;
        param_2[1] = 0x61;
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


