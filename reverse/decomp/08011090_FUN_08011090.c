
void FUN_08011090(int *param_1)

{
  FUN_0800dfe6(param_1[0x138]);
  *(uint *)(*param_1 + 0xe00) = *(uint *)(*param_1 + 0xe00) | 1;
  if (*(char *)((int)param_1 + 0xb) != '\0') {
    *(uint *)(DAT_080110d8 + 0x10) = *(uint *)(DAT_080110d8 + 0x10) | 6;
  }
  return;
}


