
undefined4 FUN_08021ebc(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  double dVar3;
  
  uVar2 = FUN_08024060(param_1);
  dVar3 = (double)CONCAT44(extraout_s1,uVar2);
  if ((param_3 != 0) && (iVar1 = 0x6b - ((param_2 & 0x7fffffff) >> 0x14), 0 < iVar1)) {
    dVar3 = dVar3 * (double)((ulonglong)(iVar1 * 0x100000 + 0x3ff00000) << 0x20);
  }
  return SUB84(dVar3,0);
}


