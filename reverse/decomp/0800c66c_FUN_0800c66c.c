
uint FUN_0800c66c(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_2c;
  byte local_26;
  byte local_25;
  uint local_24;
  
  local_26 = 0;
  *(uint *)*param_1 =
       DAT_0800c994 & *(uint *)*param_1 | param_1[7] | param_1[2] | param_1[4] | param_1[5];
  *(uint *)(*param_1 + 4) = param_1[3] | *(uint *)(*param_1 + 4) & 0xffffcfff;
  local_24 = param_1[6];
  if (*param_1 != DAT_0800c998) {
    local_24 = param_1[8] | local_24;
  }
  *(uint *)(*param_1 + 8) = DAT_0800c99c & *(uint *)(*param_1 + 8) | local_24;
  *(uint *)(*param_1 + 0x2c) = param_1[9] | *(uint *)(*param_1 + 0x2c) & 0xfffffff0;
  if (*param_1 == DAT_0800c9a0) {
    switch(*(uint *)(DAT_0800c9a4 + 0x54) & 0x38) {
    case 0:
      local_25 = 1;
      break;
    case 8:
      local_25 = 4;
      break;
    case 0x10:
      local_25 = 8;
      break;
    case 0x18:
      local_25 = 0x10;
      break;
    case 0x20:
      local_25 = 0x20;
      break;
    case 0x28:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800c9a8) {
    switch(*(uint *)(DAT_0800c9a4 + 0x54) & 7) {
    case 0:
      local_25 = 0;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800c9ac) {
    switch(*(uint *)(DAT_0800c9a4 + 0x54) & 7) {
    case 0:
      local_25 = 0;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800c9b0) {
    switch(*(uint *)(DAT_0800c9a4 + 0x54) & 7) {
    case 0:
      local_25 = 0;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800c9b4) {
    switch(*(uint *)(DAT_0800c9a4 + 0x54) & 7) {
    case 0:
      local_25 = 0;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800cc9c) {
    switch(*(uint *)(DAT_0800cca0 + 0x54) & 0x38) {
    case 0:
      local_25 = 1;
      break;
    case 8:
      local_25 = 4;
      break;
    case 0x10:
      local_25 = 8;
      break;
    case 0x18:
      local_25 = 0x10;
      break;
    case 0x20:
      local_25 = 0x20;
      break;
    case 0x28:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800cca4) {
    switch(*(uint *)(DAT_0800cca0 + 0x54) & 7) {
    case 0:
      local_25 = 0;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800cca8) {
    switch(*(uint *)(DAT_0800cca0 + 0x54) & 7) {
    case 0:
      local_25 = 0;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800ccac) {
    switch(*(uint *)(DAT_0800cca0 + 0x54) & 0x38) {
    case 0:
      local_25 = 1;
      break;
    case 8:
      local_25 = 4;
      break;
    case 0x10:
      local_25 = 8;
      break;
    case 0x18:
      local_25 = 0x10;
      break;
    case 0x20:
      local_25 = 0x20;
      break;
    case 0x28:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800cf6c) {
    switch(*(uint *)(DAT_0800cf70 + 0x54) & 0x38) {
    case 0:
      local_25 = 1;
      break;
    case 8:
      local_25 = 4;
      break;
    case 0x10:
      local_25 = 8;
      break;
    case 0x18:
      local_25 = 0x10;
      break;
    case 0x20:
      local_25 = 0x20;
      break;
    case 0x28:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else if (*param_1 == DAT_0800cf74) {
    switch(*(uint *)(DAT_0800cf70 + 0x58) & 7) {
    case 0:
      local_25 = 2;
      break;
    case 1:
      local_25 = 4;
      break;
    case 2:
      local_25 = 8;
      break;
    case 3:
      local_25 = 0x10;
      break;
    case 4:
      local_25 = 0x20;
      break;
    case 5:
      local_25 = 0x40;
      break;
    default:
      local_25 = 0x80;
    }
  }
  else {
    local_25 = 0x80;
  }
  if (*param_1 != DAT_0800cf74) {
    if (param_1[7] != 0x8000) {
      uVar1 = (uint)local_25;
      if (uVar1 < 0x21) {
        if (uVar1 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x0800d1b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (*(code *)(&switchD_0800d1b2::switchdataD_0800d1b8)[uVar1])();
          return uVar1;
        }
switchD_0800d1b2_caseD_2:
        local_2c = 0;
        local_26 = 1;
      }
      else {
        if (uVar1 != 0x40) goto switchD_0800d1b2_caseD_2;
        local_2c = 0x8000;
      }
      if (local_2c != 0) {
        uVar1 = (local_2c / *(ushort *)(DAT_0800d340 + param_1[9] * 2) + ((uint)param_1[1] >> 1)) /
                (uint)param_1[1];
        if ((uVar1 < 0x10) || (0xffff < uVar1)) {
          local_26 = 1;
        }
        else {
          *(uint *)(*param_1 + 0xc) = uVar1 & 0xffff;
        }
      }
      goto LAB_0800d30e;
    }
    uVar1 = (uint)local_25;
    if (uVar1 < 0x21) {
      if (uVar1 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x0800d034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(uVar1 * 4 + 0x800d038))();
        return uVar1;
      }
LAB_0800d126:
      local_2c = 0;
      local_26 = 1;
    }
    else {
      if (uVar1 != 0x40) goto LAB_0800d126;
      local_2c = 0x8000;
    }
    if (local_2c != 0) {
      uVar1 = ((local_2c / *(ushort *)(DAT_0800d294 + param_1[9] * 2)) * 2 + ((uint)param_1[1] >> 1)
              ) / (uint)param_1[1];
      if ((uVar1 < 0x10) || (0xffff < uVar1)) {
        local_26 = 1;
      }
      else {
        *(uint *)(*param_1 + 0xc) = (uint)((ushort)uVar1 & 0xfff0 | (ushort)(uVar1 >> 1) & 7);
      }
    }
    goto LAB_0800d30e;
  }
  uVar1 = (uint)local_25;
  if (uVar1 < 0x21) {
    if ((1 < uVar1) && (uVar1 - 2 < 0x1f)) {
                    /* WARNING: Could not recover jumptable at 0x0800ce3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(&DAT_0800ce40)[uVar1 - 2])();
      return uVar1;
    }
LAB_0800cf1e:
    local_2c = 0;
    local_26 = 1;
  }
  else {
    if (uVar1 != 0x40) goto LAB_0800cf1e;
    local_2c = 0x8000;
  }
  if (local_2c != 0) {
    uVar1 = local_2c / *(ushort *)(DAT_0800cf80 + param_1[9] * 2);
    if ((uVar1 < (uint)(param_1[1] * 3)) || ((uint)(param_1[1] * 0x1000) < uVar1)) {
      local_26 = 1;
    }
    else {
      uVar2 = FUN_08000904(local_2c,0,*(undefined2 *)(DAT_0800d294 + param_1[9] * 2),0);
      uVar1 = (uint)uVar2 * 0x100;
      uVar1 = FUN_08000904(uVar1 + ((uint)param_1[1] >> 1),
                           ((int)((ulonglong)uVar2 >> 0x20) << 8 | (uint)uVar2 >> 0x18) +
                           (uint)CARRY4(uVar1,(uint)param_1[1] >> 1),param_1[1],0);
      if ((uVar1 < 0x300) || (0xfffff < uVar1)) {
        local_26 = 1;
      }
      else {
        *(uint *)(*param_1 + 0xc) = uVar1;
      }
    }
  }
LAB_0800d30e:
  *(undefined2 *)((int)param_1 + 0x6a) = 1;
  *(undefined2 *)(param_1 + 0x1a) = 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return (uint)local_26;
}


