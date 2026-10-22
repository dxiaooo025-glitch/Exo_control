
void FUN_0800ecc8(int param_1,int param_2)

{
  byte bVar1;
  
  if (*(short *)(param_2 + 6) == 1) {
    bVar1 = *(byte *)(param_1 + 0x29c);
    if (bVar1 < 3) {
      if (bVar1 != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_0800efa0(param_1,param_1 + 8,1);
        return;
      }
    }
    else if (bVar1 == 3) {
      FUN_0800efa0(param_1,param_1 + 4,1);
      return;
    }
    FUN_0800eea6(param_1,param_2);
  }
  else {
    FUN_0800eea6(param_1,param_2);
  }
  return;
}


