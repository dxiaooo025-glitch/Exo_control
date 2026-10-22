
void FUN_08020fb4(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_0801f4f4();
  uVar2 = FUN_0801f574(iVar1 - param_2);
  uVar3 = FUN_0801f62c(param_1);
  *(uint *)(DAT_08021028 + 0x4688) = param_1 | *(uint *)(DAT_08021028 + 0x4688);
  if ((uVar3 < 4) && (*(uint *)((uVar3 + 0x11a2) * 4 + DAT_08021028 + 4) < uVar2)) {
    *(uint *)((uVar3 + 0x11a2) * 4 + DAT_08021028 + 4) = uVar2;
  }
  return;
}


