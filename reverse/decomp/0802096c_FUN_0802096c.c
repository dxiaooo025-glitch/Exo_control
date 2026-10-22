
void FUN_0802096c(int param_1)

{
  int local_80 [29];
  ushort local_a;
  
  if ((param_1 != 0) && (*(char *)(DAT_08020a88 + 0x3a38) == '\x01')) {
    FUN_08010d48();
    *(int *)(DAT_08020a88 + 0x3a40) = *(int *)(DAT_08020a88 + 0x3a40) + 1;
    local_a = *(short *)(DAT_08020a88 + 0x3a00) + 1U & 0x7f;
    if (local_a == *(ushort *)(DAT_08020a88 + 0x3a02)) {
      *(int *)(DAT_08020a88 + 0x3a48) = *(int *)(DAT_08020a88 + 0x3a48) + 1;
      *(int *)(DAT_08020a88 + 0x3a4c) = *(int *)(DAT_08020a88 + 0x3a4c) + 1;
    }
    else {
      FUN_080230b2(local_80,param_1,0x74);
      local_80[0] = *(int *)(DAT_08020a88 + 0x3a3c);
      *(int *)(DAT_08020a88 + 0x3a3c) = local_80[0] + 1;
      FUN_080230b2((uint)*(ushort *)(DAT_08020a88 + 0x3a00) * 0x74 + DAT_08020a88,local_80,0x74);
      *(ushort *)(DAT_08020a88 + 0x3a00) = local_a;
      *(int *)(DAT_08020a88 + 0x3a44) = *(int *)(DAT_08020a88 + 0x3a44) + 1;
    }
    FUN_08010dac();
  }
  return;
}


