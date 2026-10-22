
undefined4
FUN_080168a4(int param_1,char param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            undefined4 *param_7,undefined1 *param_8)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  float local_14;
  char local_d;
  int local_c;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_4 == 0)) ||
     (((param_5 == 0 || (param_6 == (undefined4 *)0x0)) ||
      ((param_7 == (undefined4 *)0x0 || (param_8 == (undefined1 *)0x0)))))) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_08014dae(param_1,param_8);
    if (iVar2 == 0) {
      iVar2 = FUN_08014cc6(param_1,DAT_08016ba0);
      if (iVar2 == 0) {
        iVar2 = FUN_08014cc6(param_1,DAT_08016ba4);
        if (((iVar2 == 0) && (iVar2 = FUN_08014cc6(param_1,DAT_08016ba8), iVar2 == 0)) &&
           (iVar2 = FUN_08014cc6(param_1,DAT_08016bac), iVar2 == 0)) {
          iVar2 = FUN_08014cc6(param_1,DAT_08016bb0);
          if (iVar2 == 0) {
            iVar2 = FUN_08014cc6(param_1,DAT_08016bb4);
            if (iVar2 == 0) {
              iVar2 = FUN_08014cc6(param_1,DAT_08016bb8);
              if (iVar2 == 0) {
                iVar2 = FUN_08014cc6(param_1,DAT_08016bbc);
                if (iVar2 == 0) {
                  iVar2 = FUN_08014cc6(param_1,DAT_08016bc0);
                  if (iVar2 == 0) {
                    local_c = 0;
                    local_d = param_2 == '\x03';
                    local_14 = 0.0;
                    local_18 = 0;
                    local_c = FUN_08014e0e(param_1,DAT_08016bc4);
                    if (local_c == 0) {
                      local_c = FUN_08014e0e(param_1,DAT_08016bd8);
                      if (local_c == 0) {
                        local_c = FUN_08014e0e(param_1,DAT_08016bdc);
                        if (local_c == 0) {
                          local_c = FUN_08014e0e(param_1,DAT_08016be0);
                          if (local_c == 0) {
                            local_c = FUN_08014e0e(param_1,DAT_08016be4);
                            if (local_c == 0) {
                              local_c = FUN_08014e0e(param_1,DAT_08016be8);
                            }
                            if (local_c == 0) {
                              local_c = FUN_08014e0e(param_1,DAT_08016ec0);
                              if (local_c == 0) {
                                if (local_d == '\0') {
                                  local_c = FUN_08014e0e(param_1,DAT_08016ec8);
                                  if (local_c == 0) {
                                    local_c = FUN_08014e0e(param_1,DAT_08016ecc);
                                    if (local_c == 0) {
                                      local_c = FUN_08014e0e(param_1,DAT_08016ed4);
                                      if (local_c == 0) {
                                        local_c = FUN_08014e0e(param_1,DAT_08016edc);
                                        if (local_c == 0) {
                                          local_c = FUN_08014e0e(param_1,DAT_08016ee0);
                                          if (local_c == 0) {
                                            local_c = FUN_08014e0e(param_1,DAT_08016ee8);
                                            if (local_c == 0) {
                                              local_c = FUN_08014e0e(param_1,DAT_08016ef0);
                                              if (local_c == 0) {
                                                local_c = FUN_08014e0e(param_1,DAT_08016f8c);
                                                if (local_c == 0) {
                                                  local_c = FUN_08014e0e(param_1,DAT_08016f94);
                                                  if (local_c == 0) {
                                                    uVar4 = 0;
                                                  }
                                                  else {
                                                    iVar2 = FUN_08014eb8(local_c,&local_14);
                                                    if (iVar2 == 0) {
                                                      uVar4 = 0;
                                                    }
                                                    else {
                                                      param_7[2] = (local_14 * DAT_08016f98) /
                                                                   DAT_08016f9c;
                                                      uVar4 = 1;
                                                    }
                                                  }
                                                }
                                                else {
                                                  iVar2 = FUN_08014eb8(local_c,&local_14);
                                                  if (iVar2 == 0) {
                                                    uVar4 = 0;
                                                  }
                                                  else {
                                                    if (0.0 <= local_14) {
                                                      uVar4 = 0x3f800000;
                                                    }
                                                    else {
                                                      uVar4 = DAT_08016f90;
                                                    }
                                                    *param_7 = uVar4;
                                                    uVar4 = 1;
                                                  }
                                                }
                                              }
                                              else {
                                                iVar2 = FUN_08014eb8(local_c,&local_14);
                                                if (iVar2 == 0) {
                                                  uVar4 = 0;
                                                }
                                                else {
                                                  if (0.0 <= local_14) {
                                                    uVar4 = 0x3f800000;
                                                  }
                                                  else {
                                                    uVar4 = DAT_08016ef4;
                                                  }
                                                  *param_6 = uVar4;
                                                  uVar4 = 1;
                                                }
                                              }
                                            }
                                            else {
                                              iVar2 = FUN_08014eb8(local_c,&local_14);
                                              if (iVar2 == 0) {
                                                uVar4 = 0;
                                              }
                                              else {
                                                local_14 = (float)FUN_08014804(local_14,0x3f800000,
                                                                               DAT_08016eec);
                                                uVar4 = FUN_080148c4(local_14,DAT_08016ed0);
                                                *(undefined4 *)(param_3 + 0x24) = uVar4;
                                                uVar4 = 1;
                                              }
                                            }
                                          }
                                          else {
                                            iVar2 = FUN_08014f02(local_c,&local_18);
                                            if (iVar2 == 0) {
                                              uVar4 = 0;
                                            }
                                            else {
                                              if (local_18 < 1000) {
                                                local_18 = 1000;
                                              }
                                              else if (DAT_08016ee4 < local_18) {
                                                local_18 = DAT_08016ee4;
                                              }
                                              *(uint *)(param_3 + 0x24) = local_18;
                                              uVar4 = 1;
                                            }
                                          }
                                        }
                                        else {
                                          iVar2 = FUN_08014eb8(local_c,&local_14);
                                          if (iVar2 == 0) {
                                            uVar4 = 0;
                                          }
                                          else {
                                            uVar4 = FUN_08014804(local_14,0xc1700000,0x41700000);
                                            *(undefined4 *)(param_3 + 8) = uVar4;
                                            uVar4 = 1;
                                          }
                                        }
                                      }
                                      else {
                                        iVar2 = FUN_08014eb8(local_c,&local_14);
                                        if (iVar2 == 0) {
                                          uVar4 = 0;
                                        }
                                        else {
                                          uVar4 = FUN_08014804(local_14,DAT_08016ed8,0x41a00000);
                                          *(undefined4 *)(param_3 + 4) = uVar4;
                                          uVar4 = 1;
                                        }
                                      }
                                    }
                                    else {
                                      iVar2 = FUN_08014eb8(local_c,&local_14);
                                      if (iVar2 == 0) {
                                        uVar4 = 0;
                                      }
                                      else {
                                        if (local_14 <= 5.0) {
                                          local_14 = local_14 * DAT_08016ed0;
                                        }
                                        local_14 = (float)FUN_08014804(local_14,0x41a00000,
                                                                       DAT_08016ed0);
                                        uVar1 = FUN_080148c4(local_14,0x3f800000);
                                        *(undefined2 *)(param_3 + 0x20) = uVar1;
                                        uVar4 = 1;
                                      }
                                    }
                                  }
                                  else {
                                    iVar2 = FUN_08014f02(local_c,&local_18);
                                    if (((iVar2 == 0) || (local_18 == 0)) ||
                                       (uVar3 = FUN_0801506c(), uVar3 < local_18)) {
                                      uVar4 = 0;
                                    }
                                    else {
                                      FUN_08015bd0(local_18 - 1,param_4,param_5,param_3);
                                      uVar4 = 1;
                                    }
                                  }
                                }
                                else {
                                  uVar4 = 0;
                                }
                              }
                              else {
                                iVar2 = FUN_08014eb8(local_c,&local_14);
                                if (iVar2 == 0) {
                                  uVar4 = 0;
                                }
                                else {
                                  fVar5 = (float)FUN_08014788(local_14);
                                  if (20.0 < fVar5) {
                                    uVar4 = FUN_080148c4(local_14,0x3f800000);
                                    *(undefined4 *)(param_3 + 0x28) = uVar4;
                                  }
                                  else {
                                    uVar4 = FUN_080148c4(local_14,DAT_08016ec4);
                                    *(undefined4 *)(param_3 + 0x28) = uVar4;
                                  }
                                  uVar4 = 1;
                                }
                              }
                            }
                            else {
                              iVar2 = FUN_08014eb8(local_c,&local_14);
                              if (iVar2 == 0) {
                                uVar4 = 0;
                              }
                              else {
                                uVar4 = FUN_08014804(local_14,DAT_08016bf0,DAT_08016bec);
                                *(undefined4 *)(param_3 + 0x1c) = uVar4;
                                uVar4 = 1;
                              }
                            }
                          }
                          else {
                            iVar2 = FUN_08014eb8(local_c,&local_14);
                            if (iVar2 == 0) {
                              uVar4 = 0;
                            }
                            else {
                              uVar4 = FUN_08014804(local_14,DAT_08016bcc,DAT_08016bd4);
                              *(undefined4 *)(param_3 + 0x14) = uVar4;
                              uVar4 = 1;
                            }
                          }
                        }
                        else {
                          iVar2 = FUN_08014eb8(local_c,&local_14);
                          if (iVar2 == 0) {
                            uVar4 = 0;
                          }
                          else {
                            uVar4 = FUN_08014804(local_14,DAT_08016bcc,DAT_08016bd0);
                            *(undefined4 *)(param_3 + 0x10) = uVar4;
                            uVar4 = 1;
                          }
                        }
                      }
                      else {
                        iVar2 = FUN_08014eb8(local_c,&local_14);
                        if (iVar2 == 0) {
                          uVar4 = 0;
                        }
                        else {
                          uVar4 = FUN_08014804(local_14,DAT_08016bcc,DAT_08016bc8);
                          *(undefined4 *)(param_3 + 0xc) = uVar4;
                          uVar4 = 1;
                        }
                      }
                    }
                    else {
                      local_1c = 0;
                      local_20 = 0;
                      local_24 = 0;
                      iVar2 = FUN_08014f4c(local_c,&local_1c,&local_20,&local_24);
                      if (iVar2 == 0) {
                        uVar4 = 0;
                      }
                      else {
                        uVar4 = FUN_08014804(local_1c,DAT_08016bcc,DAT_08016bc8);
                        *(undefined4 *)(param_3 + 0xc) = uVar4;
                        uVar4 = FUN_08014804(local_20,DAT_08016bcc,DAT_08016bd0);
                        *(undefined4 *)(param_3 + 0x10) = uVar4;
                        uVar4 = FUN_08014804(local_24,DAT_08016bcc,DAT_08016bd4);
                        *(undefined4 *)(param_3 + 0x14) = uVar4;
                        uVar4 = 1;
                      }
                    }
                  }
                  else {
                    *param_8 = 0x37;
                    uVar4 = 1;
                  }
                }
                else {
                  *param_8 = 0x36;
                  uVar4 = 1;
                }
              }
              else {
                *param_8 = 0x35;
                uVar4 = 1;
              }
            }
            else {
              *param_8 = 0x7a;
              uVar4 = 1;
            }
          }
          else {
            *param_8 = 0x78;
            uVar4 = 1;
          }
        }
        else {
          *param_8 = 0x74;
          uVar4 = 1;
        }
      }
      else {
        *param_8 = 0x61;
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}


