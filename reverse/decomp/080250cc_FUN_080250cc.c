
int FUN_080250cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  double dVar2;
  
  if (0.0 <= (double)CONCAT44(param_2,param_1)) {
    iVar1 = FUN_08021bc0();
    return iVar1;
  }
  dVar2 = -(double)CONCAT44(param_2,param_1);
  iVar1 = FUN_08021bc0(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  return -iVar1;
}


