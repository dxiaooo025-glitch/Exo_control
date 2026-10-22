
void FUN_08010968(void)

{
  uint uVar1;
  int local_10;
  uint *local_c;
  
  local_10 = 0x3c00;
  local_c = DAT_08010a14;
  if (((uint)DAT_08010a14 & 7) != 0) {
    local_c = (uint *)((int)DAT_08010a14 + 7U & 0xfffffff8);
    local_10 = (0x3c00 - (int)local_c) + (int)DAT_08010a14;
  }
  *DAT_08010a18 = (uint)local_c;
  DAT_08010a18[1] = 0;
  uVar1 = (int)local_c + local_10 + -8 & 0xfffffff8;
  *DAT_08010a1c = uVar1;
  *(undefined4 *)(*DAT_08010a1c + 4) = 0;
  *(undefined4 *)*DAT_08010a1c = 0;
  local_c[1] = uVar1 - (int)local_c;
  *local_c = *DAT_08010a1c;
  *DAT_08010a20 = local_c[1];
  *DAT_08010a24 = local_c[1];
  *DAT_08010a28 = 0x80000000;
  return;
}


