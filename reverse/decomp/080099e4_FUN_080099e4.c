
void FUN_080099e4(int *param_1)

{
  if ((*(uint *)(*param_1 + 0x18) & 2) == 2) {
    *(undefined4 *)(*param_1 + 0x28) = 0;
  }
  if ((*(uint *)(*param_1 + 0x18) & 1) != 1) {
    *(uint *)(*param_1 + 0x18) = *(uint *)(*param_1 + 0x18) | 1;
  }
  return;
}


