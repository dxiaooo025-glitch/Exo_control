
undefined4 FUN_08014dae(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar3 = 0;
  }
  else {
    pcVar1 = (char *)FUN_08014c60(param_1);
    if ((*pcVar1 == '\0') ||
       ((iVar2 = FUN_08014d50(*pcVar1), iVar2 == 0 || (iVar2 = FUN_08014c94(pcVar1 + 1), iVar2 == 0)
        ))) {
      uVar3 = 0;
    }
    else {
      *param_2 = *pcVar1;
      uVar3 = 1;
    }
  }
  return uVar3;
}


