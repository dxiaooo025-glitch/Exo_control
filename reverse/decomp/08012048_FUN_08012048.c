
void FUN_08012048(int *param_1)

{
  int iVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_6c;
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
  if (*param_1 == DAT_080121ec) {
    local_d8 = 0x8000;
    uStack_d4 = 0;
    local_6c = 0x10000000;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *DAT_080121f0 = *DAT_080121f0 + 1;
    if (*DAT_080121f0 == 1) {
      *(uint *)(DAT_080121f4 + 0xec) = *(uint *)(DAT_080121f4 + 0xec) | 0x100;
    }
    *(uint *)(DAT_080121f4 + 0xe0) = *(uint *)(DAT_080121f4 + 0xe0) | 8;
    local_1c = 3;
    local_18 = 2;
    local_14 = 0;
    local_10 = 3;
    local_c = 9;
    FUN_080067e4(DAT_080121f8,&local_1c);
    FUN_080091b0(0x13,5,0);
    FUN_080091e4(0x13);
  }
  else if (*param_1 == DAT_080121fc) {
    local_d8 = 0x8000;
    uStack_d4 = 0;
    local_6c = 0x10000000;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *DAT_080121f0 = *DAT_080121f0 + 1;
    if (*DAT_080121f0 == 1) {
      *(uint *)(DAT_080121f4 + 0xec) = *(uint *)(DAT_080121f4 + 0xec) | 0x100;
    }
    *(uint *)(DAT_080121f4 + 0xe0) = *(uint *)(DAT_080121f4 + 0xe0) | 2;
    local_1c = 0x60;
    local_18 = 2;
    local_14 = 0;
    local_10 = 3;
    local_c = 9;
    FUN_080067e4(DAT_08012200,&local_1c);
    FUN_080091b0(0x14,5,0);
    FUN_080091e4(0x14);
  }
  return;
}


