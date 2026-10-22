
void FUN_080152a4(int param_1)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x39) = 0;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  }
  return;
}


