
bool FUN_08004c60(uint *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char local_22;
  char local_21;
  
  local_21 = '\0';
  local_22 = '\0';
  if ((*param_1 & 0x8000000) != 0) {
    uVar4 = param_1[0x19];
    if (uVar4 != 0x300000) {
      if (uVar4 < 0x300001) {
        if (uVar4 == 0x200000) {
          local_21 = FUN_08006680(param_1 + 10,2);
        }
        else {
          if (0x200000 < uVar4) goto LAB_08004cf0;
          if (uVar4 == 0) {
            *(uint *)(DAT_08004f64 + 0x2c) = *(uint *)(DAT_08004f64 + 0x2c) | 0x20000;
          }
          else {
            if (uVar4 != 0x100000) goto LAB_08004cf0;
            local_21 = FUN_0800651c(param_1 + 2,2);
          }
        }
      }
      else {
LAB_08004cf0:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08004f64 + 0x50) = param_1[0x19] | *(uint *)(DAT_08004f64 + 0x50) & 0xffcfffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x100) != 0) {
    switch(param_1[0x16]) {
    case 0:
      *(uint *)(DAT_08004f64 + 0x2c) = *(uint *)(DAT_08004f64 + 0x2c) | 0x20000;
      break;
    case 1:
      local_21 = FUN_0800651c(param_1 + 2,0);
      break;
    case 2:
      local_21 = FUN_08006680(param_1 + 10,0);
      break;
    case 3:
    case 4:
      break;
    default:
      local_21 = '\x01';
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08004f64 + 0x50) = param_1[0x16] | *(uint *)(DAT_08004f64 + 0x50) & 0xfffffff8;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x400) != 0) {
    uVar4 = param_1[0x29];
    if (uVar4 != 0xa00000) {
      if (uVar4 < 0xa00001) {
        if (uVar4 != 0x800000) {
          if (0x800000 < uVar4) goto LAB_08004e5a;
          if (uVar4 != 0x600000) {
            if (0x600000 < uVar4) goto LAB_08004e5a;
            if (uVar4 == 0x400000) {
              local_21 = FUN_08006680(param_1 + 10,0);
            }
            else {
              if (0x400000 < uVar4) goto LAB_08004e5a;
              if (uVar4 == 0) {
                *(uint *)(DAT_08004f64 + 0x2c) = *(uint *)(DAT_08004f64 + 0x2c) | 0x20000;
              }
              else {
                if (uVar4 != 0x200000) goto LAB_08004e5a;
                local_21 = FUN_0800651c(param_1 + 2,0);
              }
            }
          }
        }
      }
      else {
LAB_08004e5a:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08004f64 + 0x58) = param_1[0x29] | *(uint *)(DAT_08004f64 + 0x58) & 0xff1fffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x800) != 0) {
    uVar4 = param_1[0x2a];
    if (uVar4 != 0x5000000) {
      if (uVar4 < 0x5000001) {
        if (uVar4 != 0x4000000) {
          if (0x4000000 < uVar4) goto LAB_08004f32;
          if (uVar4 != 0x3000000) {
            if (0x3000000 < uVar4) goto LAB_08004f32;
            if (uVar4 == 0x2000000) {
              local_21 = FUN_08006680(param_1 + 10,0);
            }
            else {
              if (0x2000000 < uVar4) goto LAB_08004f32;
              if (uVar4 == 0) {
                *(uint *)(DAT_08004f64 + 0x2c) = *(uint *)(DAT_08004f64 + 0x2c) | 0x20000;
              }
              else {
                if (uVar4 != 0x1000000) goto LAB_08004f32;
                local_21 = FUN_0800651c(param_1 + 2,0);
              }
            }
          }
        }
      }
      else {
LAB_08004f32:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08004f64 + 0x58) = param_1[0x2a] | *(uint *)(DAT_08004f64 + 0x58) & 0xf8ffffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x2000000) != 0) {
    uVar4 = param_1[0x13];
    if (uVar4 != 0x30) {
      if (uVar4 < 0x31) {
        if (uVar4 == 0x20) {
          local_21 = FUN_0800651c(param_1 + 2,2);
        }
        else {
          if (0x20 < uVar4) goto LAB_08004fd2;
          if (uVar4 != 0) {
            if (uVar4 != 0x10) goto LAB_08004fd2;
            *(uint *)(DAT_08005258 + 0x2c) = *(uint *)(DAT_08005258 + 0x2c) | 0x20000;
          }
        }
      }
      else {
LAB_08004fd2:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005258 + 0x4c) = param_1[0x13] | *(uint *)(DAT_08005258 + 0x4c) & 0xffffffcf;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x1000) != 0) {
    uVar4 = param_1[0x17];
    if (uVar4 != 0x4000) {
      if (uVar4 < 0x4001) {
        if (uVar4 != 0x3000) {
          if (0x3000 < uVar4) goto LAB_08005096;
          if (uVar4 == 0x2000) {
            local_21 = FUN_08006680(param_1 + 10,0);
          }
          else {
            if (0x2000 < uVar4) goto LAB_08005096;
            if (uVar4 == 0) {
              *(uint *)(DAT_08005258 + 0x2c) = *(uint *)(DAT_08005258 + 0x2c) | 0x20000;
            }
            else {
              if (uVar4 != 0x1000) goto LAB_08005096;
              local_21 = FUN_0800651c(param_1 + 2,0);
            }
          }
        }
      }
      else {
LAB_08005096:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005258 + 0x50) = param_1[0x17] | *(uint *)(DAT_08005258 + 0x50) & 0xffff8fff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x2000) != 0) {
    uVar4 = param_1[0x18];
    if (uVar4 != 0x50000) {
      if (uVar4 < 0x50001) {
        if (uVar4 != 0x40000) {
          if (0x40000 < uVar4) goto LAB_08005156;
          if (uVar4 != 0x30000) {
            if (0x30000 < uVar4) goto LAB_08005156;
            if (uVar4 == 0x20000) {
              local_21 = FUN_08006680(param_1 + 10,1);
            }
            else {
              if (0x20000 < uVar4) goto LAB_08005156;
              if (uVar4 != 0) {
                if (uVar4 != 0x10000) goto LAB_08005156;
                local_21 = FUN_0800651c(param_1 + 2,1);
              }
            }
          }
        }
      }
      else {
LAB_08005156:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005258 + 0x50) = param_1[0x18] | *(uint *)(DAT_08005258 + 0x50) & 0xfff8ffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x4000) != 0) {
    uVar4 = param_1[0x2b];
    if (uVar4 != 0x50000000) {
      if (uVar4 < 0x50000001) {
        if (uVar4 != 0x40000000) {
          if (0x40000000 < uVar4) goto LAB_08005220;
          if (uVar4 != 0x30000000) {
            if (0x30000000 < uVar4) goto LAB_08005220;
            if (uVar4 == 0x20000000) {
              local_21 = FUN_08006680(param_1 + 10,1);
            }
            else {
              if (0x20000000 < uVar4) goto LAB_08005220;
              if (uVar4 != 0) {
                if (uVar4 != 0x10000000) goto LAB_08005220;
                local_21 = FUN_0800651c(param_1 + 2,1);
              }
            }
          }
        }
      }
      else {
LAB_08005220:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005258 + 0x58) = param_1[0x2b] | *(uint *)(DAT_08005258 + 0x58) & 0x8fffffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x8000) != 0) {
    uVar4 = param_1[0x1b];
    if (uVar4 == 0x20000000) {
      local_21 = FUN_0800651c(param_1 + 2,1);
    }
    else if (uVar4 < 0x20000001) {
      if (uVar4 != 0) {
        if (uVar4 != 0x10000000) goto LAB_080052c4;
        *(uint *)(DAT_080055b4 + 0x2c) = *(uint *)(DAT_080055b4 + 0x2c) | 0x20000;
      }
    }
    else {
LAB_080052c4:
      local_21 = '\x01';
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080055b4 + 0x50) = param_1[0x1b] | *(uint *)(DAT_080055b4 + 0x50) & 0xcfffffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x1000000) != 0) {
    switch(param_1[0x12]) {
    case 0:
    case 3:
      break;
    case 1:
      *(uint *)(DAT_080055b4 + 0x2c) = *(uint *)(DAT_080055b4 + 0x2c) | 0x20000;
      break;
    case 2:
      local_21 = FUN_0800651c(param_1 + 2,2);
      break;
    default:
      local_21 = '\x01';
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080055b4 + 0x4c) = param_1[0x12] | *(uint *)(DAT_080055b4 + 0x4c) & 0xfffffffc;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x400000) != 0) {
    *DAT_080055b8 = *DAT_080055b8 | 0x100;
    iVar2 = FUN_080092a0();
    do {
      if ((*DAT_080055b8 & 0x100) != 0) goto LAB_080053e4;
      iVar3 = FUN_080092a0();
    } while ((uint)(iVar3 - iVar2) < 0x65);
    local_21 = '\x03';
LAB_080053e4:
    if (local_21 == '\0') {
      if (((param_1[0x2c] ^ *(uint *)(DAT_080055b4 + 0x70)) & 0x300) != 0) {
        uVar4 = *(uint *)(DAT_080055b4 + 0x70);
        *(uint *)(DAT_080055b4 + 0x70) = *(uint *)(DAT_080055b4 + 0x70) | 0x10000;
        *(uint *)(DAT_080055b4 + 0x70) = *(uint *)(DAT_080055b4 + 0x70) & 0xfffeffff;
        *(uint *)(DAT_080055b4 + 0x70) = uVar4 & 0xfffffcff;
      }
      if (param_1[0x2c] == 0x100) {
        iVar2 = FUN_080092a0();
        do {
          if ((*(uint *)(DAT_080055b4 + 0x70) & 2) != 0) goto LAB_0800546e;
          iVar3 = FUN_080092a0();
        } while ((uint)(iVar3 - iVar2) < 0x1389);
        local_21 = '\x03';
      }
LAB_0800546e:
      if (local_21 == '\0') {
        if ((param_1[0x2c] & 0x300) == 0x300) {
          *(uint *)(DAT_080055b4 + 0x10) =
               DAT_080055bc & param_1[0x2c] >> 4 | *(uint *)(DAT_080055b4 + 0x10) & 0xffffc0ff;
        }
        else {
          *(uint *)(DAT_080055b4 + 0x10) = *(uint *)(DAT_080055b4 + 0x10) & 0xffffc0ff;
        }
        *(uint *)(DAT_080055b4 + 0x70) = param_1[0x2c] & 0xfff | *(uint *)(DAT_080055b4 + 0x70);
      }
      else {
        local_22 = local_21;
      }
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 1) != 0) {
    switch(param_1[0x1e]) {
    case 0:
    case 0x18:
    case 0x20:
    case 0x28:
      break;
    default:
      local_21 = '\x01';
      break;
    case 8:
      local_21 = FUN_0800651c(param_1 + 2,1);
      break;
    case 0x10:
      local_21 = FUN_08006680(param_1 + 10,1);
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080058fc + 0x54) = param_1[0x1e] | *(uint *)(DAT_080058fc + 0x54) & 0xffffffc7;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 2) != 0) {
    switch(param_1[0x1d]) {
    case 0:
    case 3:
    case 4:
    case 5:
      break;
    case 1:
      local_21 = FUN_0800651c(param_1 + 2,1);
      break;
    case 2:
      local_21 = FUN_08006680(param_1 + 10,1);
      break;
    default:
      local_21 = '\x01';
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080058fc + 0x54) = param_1[0x1d] | *(uint *)(DAT_080058fc + 0x54) & 0xfffffff8;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 4) != 0) {
    switch(param_1[0x24]) {
    case 0:
    case 3:
    case 4:
    case 5:
      break;
    case 1:
      local_21 = FUN_0800651c(param_1 + 2,1);
      break;
    case 2:
      local_21 = FUN_08006680(param_1 + 10,1);
      break;
    default:
      local_21 = '\x01';
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080058fc + 0x58) = param_1[0x24] | *(uint *)(DAT_080058fc + 0x58) & 0xfffffff8;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x20) != 0) {
    uVar4 = param_1[0x23];
    if (uVar4 != 0x50000000) {
      if (uVar4 < 0x50000001) {
        if (uVar4 != 0x40000000) {
          if (0x40000000 < uVar4) goto LAB_080057f8;
          if (uVar4 != 0x30000000) {
            if (0x30000000 < uVar4) goto LAB_080057f8;
            if (uVar4 == 0x20000000) {
              local_21 = FUN_08006680(param_1 + 10,2);
            }
            else {
              if (0x20000000 < uVar4) goto LAB_080057f8;
              if (uVar4 != 0) {
                if (uVar4 != 0x10000000) goto LAB_080057f8;
                local_21 = FUN_0800651c(param_1 + 2,0);
              }
            }
          }
        }
      }
      else {
LAB_080057f8:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080058fc + 0x54) = param_1[0x23] | *(uint *)(DAT_080058fc + 0x54) & 0x8fffffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x40) != 0) {
    uVar4 = param_1[0x26];
    if (uVar4 != 0x1400) {
      if (uVar4 < 0x1401) {
        if (uVar4 != 0x1000) {
          if (0x1000 < uVar4) goto LAB_080058c4;
          if (uVar4 != 0xc00) {
            if (0xc00 < uVar4) goto LAB_080058c4;
            if (uVar4 == 0x800) {
              local_21 = FUN_08006680(param_1 + 10,2);
            }
            else {
              if (0x800 < uVar4) goto LAB_080058c4;
              if (uVar4 != 0) {
                if (uVar4 != 0x400) goto LAB_080058c4;
                local_21 = FUN_0800651c(param_1 + 2,0);
              }
            }
          }
        }
      }
      else {
LAB_080058c4:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_080058fc + 0x58) = param_1[0x26] | *(uint *)(DAT_080058fc + 0x58) & 0xffffe3ff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x80) != 0) {
    uVar4 = param_1[0x27];
    if (uVar4 != 0xa000) {
      if (uVar4 < 0xa001) {
        if (uVar4 != 0x8000) {
          if (0x8000 < uVar4) goto LAB_08005996;
          if (uVar4 != 0x6000) {
            if (0x6000 < uVar4) goto LAB_08005996;
            if (uVar4 == 0x4000) {
              local_21 = FUN_08006680(param_1 + 10,2);
            }
            else {
              if (0x4000 < uVar4) goto LAB_08005996;
              if (uVar4 != 0) {
                if (uVar4 != 0x2000) goto LAB_08005996;
                local_21 = FUN_0800651c(param_1 + 2,0);
              }
            }
          }
        }
      }
      else {
LAB_08005996:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005c38 + 0x58) = param_1[0x27] | *(uint *)(DAT_08005c38 + 0x58) & 0xffff1fff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 8) != 0) {
    if ((param_1[0x20] == 0x1000) && (iVar2 = FUN_08006680(param_1 + 10,2), iVar2 != 0)) {
      local_22 = '\x01';
    }
    *(uint *)(DAT_08005c38 + 0x54) = param_1[0x20] | *(uint *)(DAT_08005c38 + 0x54) & 0xffffcfff;
  }
  if ((*param_1 & 0x10) != 0) {
    if ((param_1[0x25] == 0x100) && (iVar2 = FUN_08006680(param_1 + 10,2), iVar2 != 0)) {
      local_22 = '\x01';
    }
    *(uint *)(DAT_08005c38 + 0x58) = param_1[0x25] | *(uint *)(DAT_08005c38 + 0x58) & 0xfffffcff;
  }
  if ((*param_1 & 0x80000) != 0) {
    uVar4 = param_1[0x28];
    if (uVar4 != 0x20000) {
      if (uVar4 < 0x20001) {
        if (uVar4 == 0) {
          local_21 = FUN_0800651c(param_1 + 2,0);
        }
        else {
          if (uVar4 != 0x10000) goto LAB_08005af8;
          local_21 = FUN_08006680(param_1 + 10,2);
        }
      }
      else {
LAB_08005af8:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005c38 + 0x58) = param_1[0x28] | *(uint *)(DAT_08005c38 + 0x58) & 0xfffcffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x40000) != 0) {
    uVar4 = param_1[0x21];
    if (uVar4 != 0x300000) {
      if (uVar4 < 0x300001) {
        if (uVar4 == 0x100000) {
          *(uint *)(DAT_08005c38 + 0x2c) = *(uint *)(DAT_08005c38 + 0x2c) | 0x20000;
        }
        else {
          if (uVar4 != 0x200000) goto LAB_08005b8c;
          local_21 = FUN_08006680(param_1 + 10,1);
        }
      }
      else {
LAB_08005b8c:
        local_21 = '\x01';
      }
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005c38 + 0x54) = param_1[0x21] | *(uint *)(DAT_08005c38 + 0x54) & 0xffcfffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if ((*param_1 & 0x10000) != 0) {
    if (param_1[0x14] == 0) {
      *(uint *)(DAT_08005c38 + 0x2c) = *(uint *)(DAT_08005c38 + 0x2c) | 0x20000;
    }
    else if (param_1[0x14] == 0x10000) {
      local_21 = FUN_0800651c(param_1 + 2,2);
    }
    else {
      local_21 = '\x01';
    }
    if (local_21 == '\0') {
      *(uint *)(DAT_08005c38 + 0x4c) = param_1[0x14] | *(uint *)(DAT_08005c38 + 0x4c) & 0xfffeffff;
    }
    else {
      local_22 = local_21;
    }
  }
  if (((*param_1 & 0x20000000) != 0) && (iVar2 = FUN_08006680(param_1 + 10,2), iVar2 != 0)) {
    local_22 = '\x01';
  }
  if ((*param_1 & 0x20000) == 0) goto LAB_08005d04;
  uVar4 = param_1[0x1f];
  if (uVar4 != 0x300) {
    if (uVar4 < 0x301) {
      if (uVar4 != 0x200) {
        if (0x200 < uVar4) goto LAB_08005ccc;
        if (uVar4 != 0) {
          if (uVar4 != 0x100) goto LAB_08005ccc;
          *(uint *)(DAT_08005f9c + 0x2c) = *(uint *)(DAT_08005f9c + 0x2c) | 0x20000;
        }
      }
    }
    else {
LAB_08005ccc:
      local_21 = '\x01';
    }
  }
  if (local_21 == '\0') {
    *(uint *)(DAT_08005f9c + 0x54) = param_1[0x1f] | *(uint *)(DAT_08005f9c + 0x54) & 0xfffffcff;
  }
  else {
    local_22 = local_21;
  }
LAB_08005d04:
  if ((*param_1 & 0x100000) != 0) {
    *(uint *)(DAT_08005f9c + 0x50) = param_1[0x1c] | *(uint *)(DAT_08005f9c + 0x50) & 0x7fffffff;
  }
  if ((*param_1 & 0x200000) != 0) {
    *(uint *)(DAT_08005f9c + 0x50) = param_1[0x1a] | *(uint *)(DAT_08005f9c + 0x50) & 0xfeffffff;
  }
  if ((*param_1 & 0x40000000) != 0) {
    *(uint *)(DAT_08005f9c + 0x10) = *(uint *)(DAT_08005f9c + 0x10) & 0xffff7fff;
    *(uint *)(DAT_08005f9c + 0x10) = param_1[0x2d] | *(uint *)(DAT_08005f9c + 0x10);
  }
  if ((*param_1 & 0x80000000) != 0) {
    *(uint *)(DAT_08005f9c + 0x4c) = param_1[0x15] | *(uint *)(DAT_08005f9c + 0x4c) & 0xcfffffff;
  }
  if ((*param_1 & 0x800000) != 0) {
    *(uint *)(DAT_08005f9c + 0x54) = param_1[0x22] | *(uint *)(DAT_08005f9c + 0x54) & 0xff3fffff;
  }
  if (((param_1[1] & 1) != 0) && (cVar1 = FUN_0800651c(param_1 + 2,0), cVar1 != '\0')) {
    local_22 = cVar1;
  }
  if (((param_1[1] & 2) != 0) && (cVar1 = FUN_0800651c(param_1 + 2,1), cVar1 != '\0')) {
    local_22 = cVar1;
  }
  if (((param_1[1] & 4) != 0) && (cVar1 = FUN_0800651c(param_1 + 2,2), cVar1 != '\0')) {
    local_22 = cVar1;
  }
  if (((param_1[1] & 8) != 0) && (cVar1 = FUN_08006680(param_1 + 10,0), cVar1 != '\0')) {
    local_22 = cVar1;
  }
  if (((param_1[1] & 0x10) != 0) && (cVar1 = FUN_08006680(param_1 + 10,1), cVar1 != '\0')) {
    local_22 = cVar1;
  }
  if (((param_1[1] & 0x20) != 0) && (cVar1 = FUN_08006680(param_1 + 10,2), cVar1 != '\0')) {
    local_22 = cVar1;
  }
  return local_22 != '\0';
}


