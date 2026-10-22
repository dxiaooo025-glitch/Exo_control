
void FUN_080128bc(int *param_1)

{
  int iVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_58;
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
  if ((param_1 != (int *)0x0) && (*param_1 == DAT_0801298c)) {
    local_d8 = 8;
    uStack_d4 = 0;
    local_58 = 0;
    iVar1 = FUN_08004c60(&local_d8);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    *(uint *)(DAT_08012990 + 0xe0) = *(uint *)(DAT_08012990 + 0xe0) | 2;
    local_1c = 0xc00;
    local_18 = 0x12;
    local_14 = 0;
    local_10 = 0;
    local_c = 4;
    FUN_080067e4(DAT_08012994,&local_1c);
    *(uint *)(DAT_08012990 + 0xe8) = *(uint *)(DAT_08012990 + 0xe8) | 0x400000;
  }
  return;
}


