
void FUN_08011b5c(void)

{
  int iVar1;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_08022f96(&local_54,0,0x4c);
  FUN_08022f96(&local_74,0,0x20);
  FUN_08008fac(2);
  *(uint *)(DAT_08011c38 + 0x18) = *(uint *)(DAT_08011c38 + 0x18) & 0xffff3fff;
  do {
  } while ((*(uint *)(DAT_08011c38 + 0x18) & 0x2000) != 0x2000);
  local_54 = 0x21;
  local_50 = 0x10000;
  local_3c = 1;
  local_30 = 2;
  local_2c = 2;
  local_28 = 2;
  local_24 = 0x28;
  local_20 = 1;
  local_1c = 4;
  local_18 = 2;
  local_14 = 0xc;
  local_10 = 0;
  local_c = 0;
  iVar1 = FUN_08003d10(&local_54);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  local_74 = 0x3f;
  local_70 = 3;
  local_6c = 0;
  local_68 = 8;
  local_64 = 0x40;
  local_60 = 0x40;
  local_5c = 0x400;
  local_58 = 0x40;
  iVar1 = FUN_080044c4(&local_74,3);
  if (iVar1 != 0) {
    FUN_08011c5a();
  }
  return;
}


