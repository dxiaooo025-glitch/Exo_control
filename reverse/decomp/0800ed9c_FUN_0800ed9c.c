
void FUN_0800ed9c(int param_1,int param_2)

{
  if (*(short *)(param_2 + 2) == 1) {
    *(undefined4 *)(param_1 + 0x2a4) = 1;
    FUN_0800f054(param_1);
  }
  else if (*(short *)(param_2 + 2) == 2) {
    *(char *)(param_1 + 0x2a0) = (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8);
    FUN_0800f054(param_1);
  }
  else {
    FUN_0800eea6(param_1,param_2);
  }
  return;
}


