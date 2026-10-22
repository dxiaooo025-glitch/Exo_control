
void FUN_080125d8(int *param_1)

{
  int iVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_64;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_08022f96(&local_d8,0,0xb8);
  if (*param_1 == DAT_080127b4) {
    local_d8 = 2;
    uStack_d4 = 0;
    local_64 = 0;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *(uint *)(DAT_080127b8 + 0xe8) = *(uint *)(DAT_080127b8 + 0xe8) | 0x40000000;
    *(uint *)(DAT_080127b8 + 0xe0) = *(uint *)(DAT_080127b8 + 0xe0) | 0x10;
    local_1c = 0x180;
    local_18 = 2;
    local_14 = 0;
    local_10 = 2;
    local_c = 7;
    FUN_080067e4(DAT_080127bc,&local_1c);
    FUN_080091b0(0x52,2,0);
    FUN_080091e4(0x52);
  }
  else if (*param_1 == DAT_080127c0) {
    local_d8 = 2;
    uStack_d4 = 0;
    local_64 = 0;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *(uint *)(DAT_080127b8 + 0xe8) = *(uint *)(DAT_080127b8 + 0xe8) | 0x100000;
    *(uint *)(DAT_080127b8 + 0xe0) = *(uint *)(DAT_080127b8 + 0xe0) | 8;
    local_1c = 4;
    local_18 = 2;
    local_14 = 0;
    local_10 = 0;
    local_c = 8;
    FUN_080067e4(DAT_080127c4,&local_1c);
    *DAT_080127c8 = DAT_080127cc;
    DAT_080127c8[1] = 0x41;
    DAT_080127c8[2] = 0;
    DAT_080127c8[3] = 0;
    DAT_080127c8[4] = 0x400;
    DAT_080127c8[5] = 0;
    DAT_080127c8[6] = 0;
    DAT_080127c8[7] = 0x100;
    DAT_080127c8[8] = 0x30000;
    DAT_080127c8[9] = 0;
    iVar1 = FUN_08006b68(DAT_080127c8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    param_1[0x20] = (int)DAT_080127c8;
    DAT_080127c8[0xe] = param_1;
    FUN_080091b0(0x35,5,0);
    FUN_080091e4(0x35);
  }
  return;
}


