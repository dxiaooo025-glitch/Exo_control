
undefined4 FUN_0800f6ba(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
  if (iVar1 == 0) {
    uVar2 = 3;
  }
  else {
    if ((*(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) != 0) &&
       (*(char *)(iVar1 + 0x200) != -1)) {
      (**(code **)(*(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) + 8))
                (*(undefined1 *)(iVar1 + 0x200),iVar1,*(undefined1 *)(iVar1 + 0x201));
      *(undefined1 *)(iVar1 + 0x200) = 0xff;
    }
    uVar2 = 0;
  }
  return uVar2;
}


