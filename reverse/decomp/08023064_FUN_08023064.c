
void FUN_08023064(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = DAT_080230a0 - (int)DAT_0802309c;
  puVar4 = DAT_0802309c;
  for (iVar5 = 0; iVar2 = DAT_080230a8, puVar1 = DAT_080230a4, iVar5 != iVar3 >> 2;
      iVar5 = iVar5 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  FUN_080250fc();
  puVar4 = puVar1;
  for (iVar3 = 0; iVar3 != iVar2 - (int)puVar1 >> 2; iVar3 = iVar3 + 1) {
    (*(code *)*puVar4)();
    puVar4 = puVar4 + 1;
  }
  return;
}


