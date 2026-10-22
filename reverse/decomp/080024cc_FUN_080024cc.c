
undefined4 FUN_080024cc(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 0x40);
  if ((DAT_08002554 < uVar2) && ((*(uint *)(iVar1 + param_2 * 0x20 + 0xb08) & 0x8000) != 0)) {
    *(undefined4 *)(iVar1 + param_2 * 0x20 + 0xb08) = 0x8000;
  }
  FUN_08010f94(param_1);
  if ((DAT_08002554 < uVar2) && (*(char *)((int)param_1 + 6) == '\x01')) {
    FUN_08003bf0(*param_1,1,param_1 + 0x127);
  }
  return 0;
}


