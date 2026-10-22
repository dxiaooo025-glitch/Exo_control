
int FUN_08024abc(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)param_2 * (ulonglong)param_3);
  if ((int)((ulonglong)param_2 * (ulonglong)param_3 >> 0x20) == 0) {
    iVar1 = FUN_08023834(param_1,uVar2);
    if (iVar1 != 0) {
      FUN_08022f96(iVar1,0,uVar2);
      return iVar1;
    }
  }
  else {
    *param_1 = 0xc;
  }
  return 0;
}


