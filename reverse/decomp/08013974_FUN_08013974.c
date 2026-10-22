
bool FUN_08013974(int param_1,int param_2,int param_3,short param_4)

{
  char cVar1;
  bool bVar2;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (param_4 == 0)) {
    bVar2 = false;
  }
  else {
    FUN_0801392c(param_1);
    cVar1 = FUN_0800b5d0(DAT_080139d4,param_2,param_3,param_4,10);
    FUN_08013950(param_1);
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}


