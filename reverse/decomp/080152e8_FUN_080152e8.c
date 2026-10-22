
void FUN_080152e8(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      if (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x3c)) {
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
      }
      if (*(float *)(param_1 + 0x40) < *(float *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x38) = 1;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
    }
  }
  return;
}


