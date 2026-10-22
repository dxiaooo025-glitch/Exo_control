
undefined4 FUN_080142ac(undefined4 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  byte local_a;
  byte local_9;
  
  local_20 = *DAT_08014488;
  FUN_08022f96(param_1,0,0x28);
  *param_1 = param_2;
  for (local_9 = 0; local_9 < 2; local_9 = local_9 + 1) {
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)&local_20 + (uint)local_9 * 2);
    iVar2 = FUN_08014236(param_1,0xd,&local_a,1);
    if ((iVar2 == 0) && ((local_a & 0xf0) == 0x10)) break;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  if (*(short *)(param_1 + 1) == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_08014272(param_1,0xc,0x89);
    if (iVar2 == 0) {
      FUN_080092b8(0x32);
      iVar2 = FUN_08014236(param_1,0x10,&local_1c,0x12);
      if (iVar2 == 0) {
        uVar1 = FUN_08014208((uint)local_1c << 4 | (uint)(local_1b >> 4),0xc);
        *(undefined2 *)((int)param_1 + 6) = uVar1;
        uVar1 = FUN_08014208((local_1b & 0xf) << 8 | (uint)local_1a,0xc);
        *(undefined2 *)(param_1 + 2) = uVar1;
        uVar3 = FUN_08014208((uint)local_18 << 4 | (uint)local_19 << 0xc | (uint)(local_17 >> 4),
                             0x14);
        param_1[3] = uVar3;
        uVar3 = FUN_08014208((uint)local_16 << 8 | (local_17 & 0xf) << 0x10 | (uint)local_15,0x14);
        param_1[4] = uVar3;
        *(ushort *)(param_1 + 5) = CONCAT11(local_14,local_13);
        *(ushort *)((int)param_1 + 0x16) = CONCAT11(local_12,local_11);
        *(ushort *)(param_1 + 6) = CONCAT11(local_10,local_f);
        *(ushort *)((int)param_1 + 0x1a) = CONCAT11(local_e,local_d);
        *(ushort *)(param_1 + 7) = CONCAT11(local_c,local_b);
        param_1[8] = DAT_0801448c;
        param_1[9] = DAT_0801448c;
        iVar2 = FUN_08014272(param_1,6,0x72);
        if ((((iVar2 == 0) && (iVar2 = FUN_08014272(param_1,7,0xd2), iVar2 == 0)) &&
            (iVar2 = FUN_08014272(param_1,9,0), iVar2 == 0)) &&
           (iVar2 = FUN_08014272(param_1,8,7), iVar2 == 0)) {
          FUN_080092b8(0x14);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}


