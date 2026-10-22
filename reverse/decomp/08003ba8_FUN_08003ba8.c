
undefined4 FUN_08003ba8(int param_1)

{
  *(uint *)(param_1 + 0x900) = DAT_08003bec & *(uint *)(param_1 + 0x900);
  *(uint *)(param_1 + 0x804) = *(uint *)(param_1 + 0x804) | 0x100;
  return 0;
}


