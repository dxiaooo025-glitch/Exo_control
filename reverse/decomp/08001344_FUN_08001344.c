
undefined4 FUN_08001344(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if ((char)param_1[0x125] == '\x01') {
    uVar2 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x125) = 1;
    if (((*(uint *)(iVar1 + 0xc) & 0x40) != 0) && (*(char *)((int)param_1 + 0xd) == '\x01')) {
      *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x10000;
    }
    FUN_08002890(*param_1);
    FUN_080039e0(*param_1);
    *(undefined1 *)(param_1 + 0x125) = 0;
    uVar2 = 0;
  }
  return uVar2;
}


