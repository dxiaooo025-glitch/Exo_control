
undefined4 FUN_08003bf0(int param_1,char param_2,undefined4 param_3)

{
  if ((*(uint *)(param_1 + 0x40) <= DAT_08003ca8) ||
     ((*(uint *)(param_1 + 0xb00) & 0x80000000) != 0x80000000)) {
    *(undefined4 *)(param_1 + 0xb10) = 0;
    *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x80000;
    *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x18;
    *(uint *)(param_1 + 0xb10) = *(uint *)(param_1 + 0xb10) | 0x60000000;
    if (param_2 == '\x01') {
      *(undefined4 *)(param_1 + 0xb14) = param_3;
      *(uint *)(param_1 + 0xb00) = *(uint *)(param_1 + 0xb00) | 0x80008000;
    }
  }
  return 0;
}


