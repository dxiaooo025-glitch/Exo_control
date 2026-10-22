
void FUN_08010f08(int *param_1)

{
  int iVar1;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_3c;
  
  FUN_08022f96(&local_c0,0,0xb8);
  if (*param_1 == DAT_08010f8c) {
    local_c0 = 0x40000;
    uStack_bc = 0;
    local_3c = 0x300000;
    iVar1 = FUN_08004c60(&local_c0);
    if (iVar1 != 0) {
      FUN_08011c5a();
    }
    FUN_08009020();
    *(uint *)(DAT_08010f90 + 0xd8) = *(uint *)(DAT_08010f90 + 0xd8) | 0x2000000;
    FUN_080091b0(0x4d,5,0,*(uint *)(DAT_08010f90 + 0xd8) & 0x2000000);
    FUN_080091e4(0x4d);
  }
  return;
}


