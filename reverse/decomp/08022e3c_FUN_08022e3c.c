
void FUN_08022e3c(int param_1)

{
  FUN_08022e24();
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x20) = DAT_08022e64;
    if (*DAT_08022e68 == 0) {
      FUN_08022de8();
    }
  }
  FUN_080230b0(DAT_08022e38);
  return;
}


