
undefined4 FUN_08002608(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  param_1[0x136] = 1;
  *(undefined1 *)(param_1 + 0x133) = 0;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x8000000;
  *(uint *)(iVar1 + 0x54) = DAT_0800264c | *(uint *)(iVar1 + 0x54);
  return 0;
}


