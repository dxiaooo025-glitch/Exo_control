
bool FUN_0801f980(int param_1,short param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_08011a74(param_1,param_2);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


