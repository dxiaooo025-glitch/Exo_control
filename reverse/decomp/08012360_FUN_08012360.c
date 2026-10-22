
void FUN_08012360(int *param_1)

{
  int iVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_7c;
  undefined4 local_2c;
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
  if (*param_1 == DAT_08012520) {
    local_d8 = 0x1000;
    uStack_d4 = 0;
    local_7c = 0;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *(uint *)(DAT_08012524 + 0xe8) = *(uint *)(DAT_08012524 + 0xe8) | 0x4000;
    *(uint *)(DAT_08012524 + 0xe0) = *(uint *)(DAT_08012524 + 0xe0) | 2;
    *(uint *)(DAT_08012524 + 0xe0) = *(uint *)(DAT_08012524 + 0xe0) | 4;
    FUN_08006b34(DAT_08012528,9,1,*(uint *)(DAT_08012524 + 0xe0) & 4);
    local_1c = 9;
    local_18 = 1;
    local_14 = 0;
    local_10 = 2;
    FUN_080067e4(DAT_08012528,&local_1c);
    local_1c = 0x2000;
    local_18 = 2;
    local_14 = 0;
    local_10 = 3;
    local_c = 5;
    FUN_080067e4(DAT_0801252c,&local_1c);
    local_1c = 6;
    local_c = 5;
    FUN_080067e4(DAT_08012528,&local_1c);
  }
  else if (*param_1 == DAT_08012530) {
    local_d8 = 0x4000;
    uStack_d4 = 0;
    local_2c = 0x50000000;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *(uint *)(DAT_08012524 + 0xf4) = *(uint *)(DAT_08012524 + 0xf4) | 0x20;
    *(uint *)(DAT_08012524 + 0xe0) = *(uint *)(DAT_08012524 + 0xe0) | 1;
    local_1c = 0xa0;
    local_18 = 2;
    local_14 = 0;
    local_10 = 3;
    local_c = 8;
    FUN_080067e4(DAT_08012534,&local_1c);
  }
  return;
}


