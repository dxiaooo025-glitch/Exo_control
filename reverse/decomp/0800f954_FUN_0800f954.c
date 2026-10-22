
undefined1 FUN_0800f954(int param_1)

{
  int iVar1;
  bool bVar2;
  bool local_9;
  
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
  if (iVar1 == 0) {
    local_9 = true;
  }
  else {
    bVar2 = *(int *)(iVar1 + 0x214) == 0;
    if (bVar2) {
      *(undefined4 *)(iVar1 + 0x214) = 1;
      *(undefined4 *)((*DAT_0800f9d0 & 0xf) * 0x14 + param_1 + 0x18) =
           *(undefined4 *)(iVar1 + 0x210);
      FUN_080113ee(param_1,*DAT_0800f9d0,*(undefined4 *)(iVar1 + 0x208),
                   *(undefined4 *)(iVar1 + 0x210));
    }
    local_9 = !bVar2;
  }
  return local_9;
}


