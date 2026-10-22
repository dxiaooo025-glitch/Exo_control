
void FUN_08011c68(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  *(uint *)(DAT_08011d48 + 0xe0) = *(uint *)(DAT_08011d48 + 0xe0) | 4;
  uVar1 = *(uint *)(DAT_08011d48 + 0xe0);
  *(uint *)(DAT_08011d48 + 0xe0) = *(uint *)(DAT_08011d48 + 0xe0) | 0x80;
  uVar2 = *(uint *)(DAT_08011d48 + 0xe0);
  *(uint *)(DAT_08011d48 + 0xe0) = *(uint *)(DAT_08011d48 + 0xe0) | 1;
  uVar3 = *(uint *)(DAT_08011d48 + 0xe0);
  *(uint *)(DAT_08011d48 + 0xe0) = *(uint *)(DAT_08011d48 + 0xe0) | 2;
  uVar4 = *(uint *)(DAT_08011d48 + 0xe0);
  *(uint *)(DAT_08011d48 + 0xe0) = *(uint *)(DAT_08011d48 + 0xe0) | 8;
  uVar5 = *(uint *)(DAT_08011d48 + 0xe0) & 8;
  FUN_08006b34(DAT_08011d4c,0x6000,1,uVar5,uVar5,uVar4 & 2,uVar3 & 1,uVar2 & 0x80,uVar1 & 4);
  local_1c = 0x6000;
  local_18 = 1;
  local_14 = 0;
  local_10 = 0;
  FUN_080067e4(DAT_08011d4c,&local_1c);
  return;
}


