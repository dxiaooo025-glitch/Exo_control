
void FUN_0800ed34(int param_1,int param_2)

{
  if (*(byte *)(param_1 + 0x29c) - 1 < 3) {
    if (*(short *)(param_2 + 6) == 2) {
      *(undefined4 *)(param_1 + 0xc) = 1;
      if (*(int *)(param_1 + 0x2a4) != 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
      }
      FUN_0800efa0(param_1,param_1 + 0xc,2);
    }
    else {
      FUN_0800eea6(param_1,param_2);
    }
  }
  else {
    FUN_0800eea6(param_1,param_2);
  }
  return;
}


