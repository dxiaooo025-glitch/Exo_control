
void FUN_0800edee(int param_1,int param_2)

{
  if (*(byte *)(param_1 + 0x29c) - 1 < 3) {
    if (*(short *)(param_2 + 2) == 1) {
      *(undefined4 *)(param_1 + 0x2a4) = 0;
      FUN_0800f054(param_1);
    }
  }
  else {
    FUN_0800eea6(param_1,param_2);
  }
  return;
}


