
void FUN_08010538(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *DAT_080105e8;
  iVar1 = FUN_0800fb54(*DAT_080105ec + 4);
  if (iVar1 == 0) {
    *DAT_080105f0 = *DAT_080105f0 & ~(1 << (*(uint *)(*DAT_080105ec + 0x2c) & 0xff));
  }
  if ((param_1 == -1) && (param_2 != 0)) {
    FUN_0800fa9a(DAT_080105f4,*DAT_080105ec + 4);
  }
  else {
    uVar3 = param_1 + uVar2;
    *(uint *)(*DAT_080105ec + 4) = uVar3;
    if (uVar3 < uVar2) {
      FUN_0800fae2(*DAT_080105f8,*DAT_080105ec + 4);
    }
    else {
      FUN_0800fae2(*DAT_080105fc,*DAT_080105ec + 4);
      if (uVar3 < *DAT_08010600) {
        *DAT_08010600 = uVar3;
      }
    }
  }
  return;
}


