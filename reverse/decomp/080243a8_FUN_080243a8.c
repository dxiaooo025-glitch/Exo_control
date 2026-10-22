
int FUN_080243a8(undefined4 *param_1,int *param_2,byte *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *unaff_r6;
  byte *pbVar6;
  int iVar7;
  uint *local_8c;
  uint local_88;
  uint local_84;
  undefined4 uStack_80;
  uint local_7c;
  int local_74;
  byte local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_45;
  undefined4 local_30;
  
  if (((int)((uint)*(ushort *)(param_2 + 3) << 0x18) < 0) && (param_2[4] == 0)) {
    iVar1 = FUN_08023834(param_1,0x40);
    *param_2 = iVar1;
    param_2[4] = iVar1;
    if (iVar1 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  iVar1 = DAT_0802458c;
  local_74 = 0;
  local_6f = 0x20;
  local_6e = 0x30;
  local_8c = param_4;
  do {
    pbVar6 = param_3;
    do {
      pbVar5 = pbVar6;
      if (*pbVar5 == 0) break;
      pbVar6 = pbVar5 + 1;
    } while (*pbVar5 != 0x25);
    iVar7 = (int)pbVar5 - (int)param_3;
    if (iVar7 != 0) {
      iVar2 = FUN_080242f0(param_1,param_2,param_3,iVar7);
      if (iVar2 == -1) {
LAB_0802456e:
        if ((int)((uint)*(ushort *)(param_2 + 3) << 0x19) < 0) {
          return -1;
        }
        return local_74;
      }
      local_74 = local_74 + iVar7;
    }
    if (*pbVar5 == 0) goto LAB_0802456e;
    local_84 = 0xffffffff;
    uStack_80 = 0;
    local_88 = 0;
    local_7c = 0;
    local_45 = 0;
    local_30 = 0;
    pbVar6 = pbVar5 + 1;
    while( true ) {
      pbVar5 = pbVar6 + 1;
      iVar2 = FUN_08000940(DAT_0802458c,*pbVar6,5);
      iVar7 = DAT_0802459c;
      if (iVar2 == 0) break;
      local_88 = 1 << (iVar2 - iVar1 & 0xffU) | local_88;
      pbVar6 = pbVar5;
    }
    if ((int)(local_88 << 0x1b) < 0) {
      local_45 = 0x20;
    }
    if ((int)(local_88 << 0x1c) < 0) {
      local_45 = 0x2b;
    }
    if (*pbVar6 == 0x2a) {
      local_7c = *local_8c;
      if ((int)local_7c < 0) {
        local_7c = -local_7c;
        local_88 = local_88 | 2;
        local_8c = local_8c + 1;
      }
      else {
        local_8c = local_8c + 1;
      }
    }
    else {
      bVar3 = false;
      uVar4 = local_7c;
      pbVar5 = pbVar6;
      while( true ) {
        if (9 < *pbVar5 - 0x30) break;
        uVar4 = uVar4 * 10 + (*pbVar5 - 0x30);
        bVar3 = true;
        pbVar5 = pbVar5 + 1;
      }
      if (bVar3) {
        local_7c = uVar4;
      }
    }
    if (*pbVar5 == 0x2e) {
      if (pbVar5[1] == 0x2a) {
        uVar4 = *local_8c;
        pbVar5 = pbVar5 + 2;
        local_8c = local_8c + 1;
        local_84 = uVar4 | (int)uVar4 >> 0x1f;
      }
      else {
        bVar3 = false;
        local_84 = 0;
        uVar4 = 0;
        while( true ) {
          pbVar5 = pbVar5 + 1;
          if (9 < *pbVar5 - 0x30) break;
          uVar4 = uVar4 * 10 + (*pbVar5 - 0x30);
          bVar3 = true;
        }
        if (bVar3) {
          local_84 = uVar4;
        }
      }
    }
    iVar2 = FUN_08000940(DAT_0802459c,*pbVar5,3);
    if (iVar2 != 0) {
      local_88 = local_88 | 0x40 << (iVar2 - iVar7 & 0xffU);
      pbVar5 = pbVar5 + 1;
    }
    param_3 = pbVar5 + 1;
    local_70 = *pbVar5;
    iVar7 = FUN_08000940(DAT_08024590,local_70,6);
    if (iVar7 == 0) {
      unaff_r6 = (undefined4 *)FUN_0802467c(param_1,&local_88,param_2,DAT_08024598,&local_8c);
LAB_08024568:
      if (unaff_r6 == (undefined4 *)0xffffffff) goto LAB_0802456e;
    }
    else {
      if (DAT_08024594 != 0) {
        unaff_r6 = param_1;
        goto LAB_08024568;
      }
      local_8c = (uint *)(((int)local_8c + 7U & 0xfffffff8) + 8);
    }
    local_74 = local_74 + (int)unaff_r6;
  } while( true );
}


