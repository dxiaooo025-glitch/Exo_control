
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_08021ef0(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  uint uVar23;
  bool bVar24;
  uint in_fpscr;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  double dVar27;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int local_94;
  int local_90;
  byte *local_88;
  int local_84;
  byte *local_7c;
  byte *local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  
  local_60 = 0;
  for (pbVar13 = param_2; bVar2 = *pbVar13, bVar2 != 0x2b; pbVar13 = pbVar13 + 1) {
    if (0x2b < bVar2) {
      if (bVar2 != 0x2d) {
LAB_08021f24:
        local_84 = 0;
        local_64 = pbVar13;
        goto LAB_08021f28;
      }
      local_84 = 1;
      goto LAB_08021f78;
    }
    if (bVar2 < 0xe) {
      if (bVar2 < 9) {
        if (bVar2 != 0) goto LAB_08021f24;
        goto LAB_08021f84;
      }
    }
    else if (bVar2 != 0x20) goto LAB_08021f24;
  }
  local_84 = 0;
LAB_08021f78:
  local_64 = pbVar13 + 1;
  if (pbVar13[1] == 0) goto LAB_08021f84;
LAB_08021f28:
  pbVar13 = local_64;
  if (*local_64 == 0x30) {
    if ((local_64[1] & 0xdf) == 0x58) {
      uVar5 = FUN_0802324c(param_1,&local_64,DAT_08022188,&local_5c,&local_60,local_84,param_4);
      uVar18 = uVar5 & 0xf;
      dVar28 = 0.0;
      if (uVar18 != 0) {
        if (uVar18 == 6) {
          if (param_3 == (undefined4 *)0x0) {
            return 0;
          }
          *param_3 = pbVar13 + 1;
          return 0;
        }
        if (local_60 != 0) {
          FUN_0802424e(&local_58,0x35);
          FUN_080239f0(param_1,local_60);
        }
        iVar17 = 0;
        uVar23 = 0;
        switch(uVar18) {
        case 1:
        case 5:
          iVar17 = local_58;
          uVar23 = local_54 & 0xffefffff | (local_5c + 0x433) * 0x100000;
          break;
        case 2:
          iVar17 = local_58;
          uVar23 = local_54;
          break;
        case 3:
          uVar23 = DAT_08022190;
          break;
        case 4:
          iVar17 = -1;
          uVar23 = 0x7fffffff;
        }
        if ((int)(uVar5 << 0x17) < 0) {
          uVar23 = uVar23 | 0x80000000;
        }
        dVar28 = (double)CONCAT44(uVar23,iVar17);
        if ((uVar23 & 0x7ff00000) == 0) {
          puVar6 = (undefined4 *)FUN_08023058();
          *puVar6 = 0x22;
          dVar28 = (double)CONCAT44(uVar23,iVar17);
        }
      }
      goto LAB_08021fd8;
    }
    do {
      pbVar10 = local_64 + 1;
      pbVar13 = local_64 + 1;
      local_64 = pbVar10;
    } while (*pbVar13 == 0x30);
    dVar28 = 0.0;
    if (*pbVar13 == 0) goto LAB_08021fd8;
    bVar24 = true;
  }
  else {
    bVar24 = false;
  }
  local_88 = local_64;
  local_94 = 0;
  local_90 = 0;
  iVar17 = 0;
  while( true ) {
    uVar5 = (uint)*local_64;
    uVar18 = uVar5 - 0x30;
    if (9 < (uVar18 & 0xff)) break;
    if (iVar17 < 9) {
      local_90 = local_90 * 10 + uVar18;
    }
    else {
      local_94 = local_94 * 10 + uVar18;
    }
    local_64 = local_64 + 1;
    iVar17 = iVar17 + 1;
  }
  iVar7 = FUN_08022fa6(local_64,DAT_0802218c,1);
  iVar12 = iVar17;
  if (iVar7 == 0) {
    uVar5 = (uint)local_64[1];
    if (iVar17 != 0) {
      iVar14 = 0;
      iVar21 = 0;
      local_64 = local_64 + 1;
      goto LAB_080220d2;
    }
    iVar7 = 0;
    local_64 = local_64 + 1;
    while (uVar5 == 0x30) {
      iVar7 = iVar7 + 1;
      uVar5 = (uint)local_64[1];
      local_64 = local_64 + 1;
    }
    if (uVar5 - 0x31 < 9) {
      local_88 = local_64;
      iVar14 = 0;
      iVar12 = 0;
      do {
        iVar19 = uVar5 - 0x30;
        iVar21 = iVar14 + 1;
        if (iVar19 != 0) {
          iVar7 = iVar7 + iVar14 + 1;
          iVar21 = iVar12;
          while (iVar14 + iVar12 != iVar21) {
            iVar8 = iVar21 + 1;
            if (iVar21 < 9) {
              local_90 = local_90 * 10;
              iVar21 = iVar8;
            }
            else {
              iVar21 = iVar8;
              if (iVar8 < 0x11) {
                local_94 = local_94 * 10;
              }
            }
          }
          iVar21 = iVar12 + iVar14;
          iVar12 = iVar12 + 1 + iVar14;
          if (iVar21 < 9) {
            local_90 = local_90 * 10 + iVar19;
          }
          else if (iVar21 < 0x10) {
            local_94 = local_94 * 10 + iVar19;
          }
          iVar21 = 0;
        }
        iVar14 = iVar21;
        uVar5 = (uint)local_64[1];
        iVar21 = iVar7;
        local_64 = local_64 + 1;
LAB_080220d2:
        iVar7 = iVar21;
      } while (uVar5 - 0x30 < 10);
      bVar4 = true;
      iVar7 = iVar14;
      goto LAB_08022066;
    }
    if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
      iVar21 = 0;
      bVar4 = true;
LAB_08022070:
      if (!bVar24 && iVar7 == 0) goto LAB_08021f84;
      iVar12 = 0;
      goto LAB_08022078;
    }
    bVar4 = true;
LAB_080221e0:
    dVar28 = 0.0;
    if (iVar7 != 0 || bVar24) goto LAB_08021fd8;
    if (bVar4) goto LAB_08021f84;
    if (uVar5 != 0x69) {
      if (uVar5 < 0x6a) {
        if (uVar5 == 0x49) goto LAB_08022242;
        bVar24 = uVar5 == 0x4e;
      }
      else {
        bVar24 = uVar5 == 0x6e;
      }
      if ((!bVar24) || (iVar17 = FUN_08023690(&local_64,DAT_08022450), iVar17 == 0)) {
LAB_08021f84:
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        *param_3 = param_2;
        return 0;
      }
      if ((*local_64 == 0x28) &&
         (iVar17 = FUN_080236b8(&local_64,DAT_08022454,&local_58), iVar17 == 5)) {
        dVar28 = (double)(CONCAT44(local_54,local_58) | 0x7ff0000000000000);
      }
      else {
        uVar25 = FUN_080230d0(DAT_08022460);
        dVar28 = (double)CONCAT44(extraout_s1,uVar25);
      }
      goto LAB_08021fd8;
    }
LAB_08022242:
    iVar17 = FUN_08023690(&local_64,DAT_08022458);
    if (iVar17 == 0) goto LAB_08021f84;
    local_64 = local_64 + -1;
    iVar17 = FUN_08023690(&local_64,DAT_0802245c);
    if (iVar17 == 0) {
      local_64 = local_64 + 1;
    }
  }
  else {
    iVar21 = 0;
    bVar4 = false;
    iVar7 = 0;
LAB_08022066:
    if ((uVar5 == 0x65) || (uVar5 == 0x45)) {
      if (iVar12 == 0) goto LAB_08022070;
LAB_08022078:
      param_2 = local_64;
      uVar5 = (uint)local_64[1];
      if (uVar5 == 0x2b) {
        bVar3 = false;
LAB_08022176:
        uVar5 = (uint)local_64[2];
        local_64 = local_64 + 2;
      }
      else {
        if (uVar5 == 0x2d) {
          bVar3 = true;
          goto LAB_08022176;
        }
        bVar3 = false;
        local_64 = local_64 + 1;
      }
      if (9 < uVar5 - 0x30) {
        local_64 = param_2;
        goto LAB_080220a0;
      }
      while (pbVar13 = local_64, uVar5 == 0x30) {
        uVar5 = (uint)local_64[1];
        local_64 = local_64 + 1;
      }
      if (8 < uVar5 - 0x31) goto LAB_080220a0;
      while( true ) {
        iVar19 = uVar5 - 0x30;
        pbVar10 = local_64 + 1;
        uVar5 = (uint)local_64[1];
        local_64 = pbVar10;
        if (9 < uVar5 - 0x30) break;
        uVar5 = iVar19 * 10 + uVar5;
      }
      iVar14 = 19999;
      if (((int)pbVar10 - (int)pbVar13 < 9) && (iVar19 < 20000)) {
        iVar14 = iVar19;
      }
      if (bVar3) {
        iVar14 = -iVar14;
      }
    }
    else {
LAB_080220a0:
      iVar14 = 0;
    }
    if (iVar12 == 0) goto LAB_080221e0;
    uVar5 = iVar14 - iVar21;
    dVar28 = (double)VectorUnsignedToFloat(local_90,(byte)(in_fpscr >> 0x16) & 3);
    if (iVar17 == 0) {
      iVar17 = iVar12;
    }
    iVar7 = iVar12;
    if (0xf < iVar12) {
      iVar7 = 0x10;
    }
    if (iVar12 < 10) {
LAB_080222a0:
      if (uVar5 == 0) goto LAB_08021fd8;
      if ((int)uVar5 < 1) {
        if (-0x17 < (int)uVar5) {
          dVar28 = dVar28 / *(double *)(DAT_08022464 + (iVar21 - iVar14) * 8);
          goto LAB_08021fd8;
        }
        goto LAB_080222e6;
      }
      if ((int)uVar5 < 0x17) {
        dVar29 = *(double *)(DAT_08022464 + uVar5 * 8);
      }
      else {
        if (0x25 - iVar12 < (int)uVar5) {
          uVar18 = (iVar12 - iVar7) + uVar5;
          goto LAB_0802233a;
        }
        dVar29 = *(double *)(DAT_08022464 + (0xf - iVar12) * 8) * dVar28;
        dVar28 = *(double *)(DAT_08022464 + (uVar5 - (0xf - iVar12)) * 8);
      }
      dVar28 = dVar29 * dVar28;
      goto LAB_08021fd8;
    }
    dVar29 = (double)VectorUnsignedToFloat(local_94,(byte)(in_fpscr >> 0x16) & 3);
    dVar28 = dVar29 + dVar28 * *(double *)(DAT_08022464 + iVar7 * 8 + -0x48);
    if (iVar12 < 0x10) goto LAB_080222a0;
LAB_080222e6:
    uVar18 = (iVar12 - iVar7) + uVar5;
    if ((int)uVar18 < 1) {
      if (uVar18 == 0) {
LAB_08022434:
        iVar7 = 0;
      }
      else {
        uVar23 = -uVar18 & 0xf;
        if (uVar23 != 0) {
          dVar28 = (double)(((ulonglong)dVar28 & 0xffffffff00000000) +
                           ((ulonglong)dVar28 & 0xffffffff)) /
                   *(double *)(DAT_08022464 + uVar23 * 8);
        }
        uVar18 = (int)-uVar18 >> 4;
        if (uVar18 == 0) goto LAB_08022434;
        if (0x1f < (int)uVar18) {
LAB_0802231e:
          dVar28 = 0.0;
          *param_1 = 0x22;
          goto LAB_08021fd8;
        }
        dVar29 = (double)(((ulonglong)dVar28 & 0xffffffff00000000) +
                         ((ulonglong)dVar28 & 0xffffffff));
        iVar19 = 0;
        if ((uVar18 & 0x10) != 0) {
          iVar19 = 0x6a;
        }
        bVar24 = false;
        pdVar9 = DAT_08022740;
        do {
          if ((uVar18 & 1) != 0) {
            bVar24 = true;
            dVar29 = dVar29 * *pdVar9;
          }
          uVar18 = (int)uVar18 >> 1;
          pdVar9 = pdVar9 + 1;
        } while (uVar18 != 0);
        if (bVar24) {
          dVar28 = dVar29;
        }
        uVar18 = (uint)((ulonglong)dVar28 >> 0x20);
        iVar7 = 0;
        if (iVar19 != 0) {
          uVar23 = (uVar18 & 0x7fffffff) >> 0x14;
          uVar16 = 0x6b - uVar23;
          if (0 < (int)uVar16) {
            if ((int)uVar16 < 0x20) {
              dVar28 = (double)CONCAT44(uVar18,-1 << (uVar16 & 0xff) & SUB84(dVar28,0));
            }
            else {
              if ((int)uVar16 < 0x35) {
                uVar18 = -1 << (0x4b - uVar23 & 0xff) & uVar18;
              }
              else {
                uVar18 = 0x3700000;
              }
              dVar28 = (double)((ulonglong)uVar18 << 0x20);
            }
          }
          iVar7 = 0x6a;
        }
        in_fpscr = in_fpscr & 0xfffffff;
        if (dVar28 == 0.0) goto LAB_0802231e;
      }
      iVar17 = FUN_08023ac0(param_1,local_88,iVar17,iVar12,local_90);
      dVar29 = DAT_08022738;
      if (iVar17 != 0) {
        pbVar13 = (byte *)(iVar21 - iVar14);
        if (-1 < (int)uVar5) {
          pbVar13 = (byte *)0x0;
        }
        uVar18 = uVar5 & ~((int)uVar5 >> 0x1f);
        local_90 = 0;
        iVar12 = 0;
        while( true ) {
          uVar23 = (uint)((ulonglong)dVar28 >> 0x20);
          uVar16 = SUB84(dVar28,0);
          local_94 = FUN_08023970(param_1,*(undefined4 *)(iVar17 + 4));
          if (local_94 == 0) break;
          dVar31 = (double)(((ulonglong)uVar23 << 0x20) + ((ulonglong)dVar28 & 0xffffffff));
          FUN_080230b2(local_94 + 0xc,iVar17 + 0xc,(*(int *)(iVar17 + 0x10) + 2) * 4);
          iVar21 = SUB84(dVar31,0);
          local_60 = FUN_08024140(iVar21,param_1,&local_5c,&local_58);
          if (local_60 == 0) break;
          iVar12 = FUN_08023bf4(param_1,1);
          if (iVar12 == 0) {
LAB_08022546:
            iVar12 = 0;
            break;
          }
          if (local_5c < 0) {
            pbVar10 = pbVar13;
            uVar1 = uVar18 - local_5c;
          }
          else {
            pbVar10 = pbVar13 + local_5c;
            uVar1 = uVar18;
            local_88 = pbVar10;
          }
          if (local_5c < 0) {
            local_88 = pbVar10;
          }
          iVar14 = 0x36 - local_58;
          uVar15 = ((local_5c - iVar7) + local_58) - 1;
          if ((int)uVar15 < DAT_08022744) {
            uVar11 = DAT_08022744 - uVar15;
            if (0x1f < (int)uVar11) {
              uVar15 = 0xfffffb00 - uVar15;
            }
            uVar20 = 1;
            if (0x1f < (int)uVar11) {
              uVar15 = uVar15 + 0xe2;
            }
            iVar14 = iVar14 - uVar11;
            if ((int)uVar11 < 0x20) {
              uVar20 = 1 << (uVar11 & 0xff);
              uVar15 = 0;
            }
            else {
              uVar15 = 1 << (uVar15 & 0xff);
            }
          }
          else {
            uVar15 = 0;
            uVar20 = 1;
          }
          local_7c = local_88 + iVar14;
          pbVar10 = local_7c;
          if ((int)local_88 <= (int)local_7c) {
            pbVar10 = local_88;
          }
          pbVar22 = (byte *)(uVar1 + iVar14 + iVar7);
          if ((int)pbVar22 <= (int)pbVar10) {
            pbVar10 = pbVar22;
          }
          if (0 < (int)pbVar10) {
            local_7c = local_7c + -(int)pbVar10;
            pbVar22 = pbVar22 + -(int)pbVar10;
            local_88 = local_88 + -(int)pbVar10;
          }
          if (0 < (int)pbVar13) {
            iVar12 = FUN_08023d74(param_1,iVar12,pbVar13);
            if (iVar12 == 0) goto LAB_08022546;
            iVar14 = FUN_08023c20(param_1,iVar12,local_60);
            if (iVar14 == 0) break;
            FUN_080239f0(param_1,local_60);
            local_60 = iVar14;
          }
          if ((0 < (int)local_7c) &&
             (local_60 = FUN_08023e28(param_1,local_60,local_7c), local_60 == 0)) break;
          if (((0 < (int)uVar5) && (local_94 = FUN_08023d74(param_1,local_94,uVar18), local_94 == 0)
              ) || ((0 < (int)pbVar22 &&
                    (local_94 = FUN_08023e28(param_1,local_94,pbVar22), local_94 == 0)))) {
            local_94 = 0;
            break;
          }
          if (((0 < (int)local_88) && (iVar12 = FUN_08023e28(param_1,iVar12,local_88), iVar12 == 0))
             || (local_90 = FUN_08023f38(param_1,local_60,local_94), local_90 == 0)) break;
          local_88 = *(byte **)(local_90 + 0xc);
          *(undefined4 *)(local_90 + 0xc) = 0;
          iVar14 = FUN_08023f00(local_90,iVar12);
          if (iVar14 < 0) {
            if (((local_88 == (byte *)0x0 && uVar16 == 0) &&
                (((ulonglong)dVar28 & 0xfffff00000000) == 0)) &&
               ((0x6b00000 < (uVar23 & 0x7ff00000) &&
                ((*(int *)(local_90 + 0x14) != 0 || (1 < *(int *)(local_90 + 0x10))))))) {
              local_90 = FUN_08023e28(param_1,local_90,1);
              iVar21 = FUN_08023f00(local_90,iVar12);
              if (iVar21 < 1) goto LAB_08022830;
LAB_080226f8:
              uVar23 = uVar23 & 0x7ff00000;
              if (iVar7 == 0) {
                dVar28 = (double)CONCAT44(~(~(uVar23 - 0x100000 >> 0x14) << 0x14),0xffffffff);
                goto LAB_080223b8;
              }
              if (uVar23 < 0x6b00001) {
                if (uVar23 < 0x3700001) goto LAB_08022710;
              }
              else {
                dVar28 = (double)CONCAT44(~(~(uVar23 - 0x100000 >> 0x14) << 0x14),0xffffffff);
              }
            }
            else {
LAB_08022830:
              if (iVar7 == 0) goto LAB_080223b8;
            }
LAB_080227a0:
            dVar28 = dVar28 * DAT_08022a28;
            if ((DAT_08022a48 & (uint)((ulonglong)dVar28 >> 0x20)) == 0) {
LAB_08022718:
              *param_1 = 0x22;
            }
            goto LAB_080223b8;
          }
          if (iVar14 == 0) {
            if (local_88 == (byte *)0x0) {
              if (((ulonglong)dVar28 & 0xfffff00000000) == 0) {
                if (uVar16 == 0) goto LAB_080226f8;
                if (uVar15 != 0) goto LAB_080227ec;
                bVar24 = (uVar16 & uVar20) == 0;
              }
              else if (uVar15 == 0) {
                bVar24 = (uVar20 & uVar16) == 0;
              }
              else {
LAB_080227ec:
                bVar24 = (uVar15 & uVar23) == 0;
              }
              if (bVar24) goto LAB_08022830;
              uVar25 = FUN_08021ebc(uVar16,uVar23,iVar7);
              dVar28 = dVar31 - (double)CONCAT44(extraout_s1_01,uVar25);
              if (dVar28 != 0.0) goto LAB_08022830;
LAB_08022710:
              dVar28 = 0.0;
              goto LAB_08022718;
            }
            if ((uVar23 & 0xfffff) == DAT_08022a40) {
              if (iVar7 != 0) {
                uVar5 = uVar23 & DAT_08022a48;
                if (uVar5 < 0x6a00001) {
                  if (uVar16 != -1 << (0x6b - (uVar5 >> 0x14) & 0xff)) goto LAB_080227d4;
                }
                else {
                  if (uVar16 != 0xffffffff) {
LAB_080227d4:
                    if (uVar15 == 0) {
                      uVar15 = uVar16 & uVar20;
                    }
                    else {
                      uVar15 = uVar15 & uVar23;
                    }
                    if (uVar15 == 0) goto LAB_080227a0;
                    goto LAB_0802281e;
                  }
                  if (uVar23 == DAT_08022a44) break;
                }
                dVar28 = (double)((ulonglong)(uVar5 + 0x100000) << 0x20);
                goto LAB_080227a0;
              }
              if (uVar16 == 0xffffffff) {
                if (uVar23 != DAT_08022a44) {
                  dVar28 = (double)((ulonglong)((uVar23 & DAT_08022a48) + 0x100000) << 0x20);
                  goto LAB_080223b8;
                }
                break;
              }
              if (uVar15 == 0) {
                uVar15 = uVar16 & uVar20;
              }
              else {
                uVar15 = uVar15 & uVar23;
              }
              if (uVar15 == 0) goto LAB_080223b8;
            }
            else {
              if (uVar15 == 0) {
                uVar15 = uVar20 & uVar16;
              }
              else {
                uVar15 = uVar15 & uVar23;
              }
              if (uVar15 == 0) goto LAB_08022830;
            }
LAB_0802281e:
            uVar25 = FUN_08021ebc(uVar16,uVar23,iVar7);
            dVar28 = dVar31 + (double)CONCAT44(extraout_s1_00,uVar25);
            goto LAB_08022830;
          }
          uVar25 = FUN_080241f0(local_90,iVar12);
          uVar20 = DAT_08022a48;
          dVar27 = (double)CONCAT44(extraout_s1_02,uVar25);
          uVar1 = in_fpscr & 0xfffffff;
          uVar15 = uVar1 | (uint)(dVar27 == 2.0) << 0x1e;
          in_fpscr = uVar15 | (uint)(2.0 <= dVar27) << 0x1d;
          if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar15 >> 0x1e,0)) {
            dVar30 = dVar27 * 0.5;
            if (local_88 == (byte *)0x0) {
LAB_080228c4:
              dVar27 = -dVar30;
            }
            else {
              dVar27 = dVar30;
            }
          }
          else if (local_88 == (byte *)0x0) {
            if (uVar16 == 0) {
              dVar30 = 1.0;
              if (((ulonglong)dVar28 & 0xfffff00000000) == 0) {
                dVar30 = 0.5;
                in_fpscr = uVar1;
                if (1.0 <= dVar27) {
                  dVar30 = dVar27 * 0.5;
                }
                goto LAB_080228c4;
              }
              dVar27 = -1.0;
            }
            else {
              if (dVar28 == 4.94065645841247e-324) goto LAB_08022710;
              dVar30 = 1.0;
              dVar27 = -1.0;
            }
          }
          else {
            dVar30 = 1.0;
            dVar27 = 1.0;
          }
          uVar16 = uVar23 & DAT_08022a48;
          iVar14 = (int)((ulonglong)dVar27 >> 0x20);
          uVar25 = SUB84(dVar27,0);
          if (uVar16 == DAT_08022a4c) {
            dVar28 = (double)(((ulonglong)(uVar23 + 0xfcb00000) << 0x20) +
                             ((ulonglong)dVar28 & 0xffffffff));
            uVar25 = FUN_08024060(SUB84(dVar28,0));
            dVar28 = dVar28 + (double)CONCAT44(extraout_s1_03,uVar25) * dVar27;
            uVar23 = (uint)((ulonglong)dVar28 >> 0x20);
            if ((uVar23 & uVar20) <= DAT_08022a50) {
              dVar28 = (double)CONCAT44(uVar23 + 0x3500000,SUB84(dVar28,0));
              goto LAB_0802297e;
            }
            if (((uint)((ulonglong)dVar31 >> 0x20) == DAT_08022a44) && (iVar21 == -1)) break;
            dVar28 = (double)CONCAT44(DAT_08022a44,0xffffffff);
          }
          else {
            if ((iVar7 != 0) && (uVar16 < 0x6a00001)) {
              uVar23 = in_fpscr & 0xfffffff | (uint)(dVar30 == dVar29) << 0x1e;
              in_fpscr = uVar23 | (uint)(dVar29 <= dVar30) << 0x1d;
              if (!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar23 >> 0x1e,0)) {
                iVar14 = VectorFloatToUnsigned(dVar30,3);
                if (iVar14 == 0) {
                  iVar14 = 1;
                }
                dVar30 = (double)VectorUnsignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
                if (local_88 == (byte *)0x0) {
                  dVar28 = -dVar30;
                }
                else {
                  dVar28 = dVar30;
                }
                iVar14 = (int)((ulonglong)dVar28 >> 0x20);
                uVar25 = SUB84(dVar28,0);
              }
              iVar14 = (iVar14 + 0x6b00000) - uVar16;
            }
            uVar26 = FUN_08024060(iVar21);
            dVar28 = dVar31 + (double)CONCAT44(iVar14,uVar25) *
                              (double)CONCAT44(extraout_s1_04,uVar26);
LAB_0802297e:
            if ((iVar7 == 0) && (uVar16 == ((uint)((ulonglong)dVar28 >> 0x20) & 0x7ff00000))) {
              FUN_080250cc(SUB84(dVar30,0),(int)((ulonglong)dVar30 >> 0x20));
              dVar31 = (double)FUN_080005ec();
              dVar30 = dVar30 - dVar31;
              if ((((ulonglong)dVar28 & 0xfffff00000000) == 0 && SUB84(dVar28,0) == 0) &&
                  local_88 == (byte *)0x0) {
                in_fpscr = in_fpscr & 0xfffffff;
                if (dVar30 < DAT_08022a78) goto LAB_080223b8;
              }
              else if ((dVar30 < DAT_08022a30) ||
                      (uVar23 = in_fpscr & 0xfffffff | (uint)(dVar30 < DAT_08022a38) << 0x1f |
                                (uint)(dVar30 == DAT_08022a38) << 0x1e,
                      in_fpscr = uVar23 | (uint)(NAN(dVar30) || NAN(DAT_08022a38)) << 0x1c,
                      bVar2 = (byte)(uVar23 >> 0x18),
                      !(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
              goto LAB_080223b8;
            }
          }
          FUN_080239f0(param_1,local_60);
          FUN_080239f0(param_1,local_94);
          FUN_080239f0(param_1,iVar12);
          FUN_080239f0(param_1,local_90);
        }
        uVar5 = DAT_08022470;
        *param_1 = 0x22;
        dVar28 = (double)((ulonglong)uVar5 << 0x20);
LAB_080223b8:
        FUN_080239f0(param_1,local_60);
        FUN_080239f0(param_1,local_94);
        FUN_080239f0(param_1,iVar12);
        FUN_080239f0(param_1,iVar17);
        FUN_080239f0(param_1,local_90);
        goto LAB_08021fd8;
      }
    }
    else {
LAB_0802233a:
      if ((uVar18 & 0xf) != 0) {
        dVar28 = *(double *)(DAT_08022464 + (uVar18 & 0xf) * 8) *
                 (double)(((ulonglong)dVar28 & 0xffffffff00000000) +
                         ((ulonglong)dVar28 & 0xffffffff));
      }
      if ((uVar18 & 0xfffffff0) == 0) goto LAB_08022434;
      if ((int)(uVar18 & 0xfffffff0) < 0x135) {
        bVar24 = false;
        dVar29 = (double)(((ulonglong)dVar28 & 0xffffffff00000000) +
                         ((ulonglong)dVar28 & 0xffffffff));
        iVar7 = 0;
        pdVar9 = DAT_08022468;
        for (uVar18 = (int)uVar18 >> 4; 1 < (int)uVar18; uVar18 = (int)uVar18 >> 1) {
          if ((uVar18 & 1) != 0) {
            bVar24 = true;
            dVar29 = dVar29 * *pdVar9;
          }
          iVar7 = iVar7 + 1;
          pdVar9 = pdVar9 + 1;
        }
        if (bVar24) {
          dVar28 = dVar29;
        }
        dVar28 = DAT_08022468[iVar7] *
                 (double)(((ulonglong)((int)((ulonglong)dVar28 >> 0x20) + 0xfcb00000) << 0x20) +
                         ((ulonglong)dVar28 & 0xffffffff));
        uVar23 = (uint)((ulonglong)dVar28 >> 0x20);
        uVar18 = DAT_08022470 & uVar23;
        if (uVar18 <= DAT_0802246c) {
          if (DAT_0802246c - 0x100000 < uVar18) {
            dVar28 = (double)CONCAT44(DAT_08022474,0xffffffff);
          }
          else {
            dVar28 = (double)CONCAT44(uVar23 + 0x3500000,SUB84(dVar28,0));
          }
          goto LAB_08022434;
        }
      }
    }
    *param_1 = 0x22;
  }
  dVar28 = (double)((ulonglong)DAT_08022470 << 0x20);
LAB_08021fd8:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_64;
  }
  if (local_84 == 0) {
    return SUB84(dVar28,0);
  }
  return SUB84(-dVar28,0);
}


