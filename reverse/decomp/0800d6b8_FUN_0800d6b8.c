
void FUN_0800d6b8(int *param_1)

{
  bool bVar1;
  
  do {
    ExclusiveAccess((uint *)*param_1);
    bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
  } while (!bVar1);
  *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffedf;
  do {
    ExclusiveAccess((uint *)(*param_1 + 8));
    bVar1 = (bool)hasExclusiveAccess((uint *)(*param_1 + 8));
  } while (!bVar1);
  *(uint *)(*param_1 + 8) = DAT_0800d780 & *(uint *)(*param_1 + 8);
  if (param_1[0x1b] == 1) {
    do {
      ExclusiveAccess((uint *)*param_1);
      bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
    } while (!bVar1);
    *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffef;
  }
  param_1[0x23] = 0x20;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  return;
}


