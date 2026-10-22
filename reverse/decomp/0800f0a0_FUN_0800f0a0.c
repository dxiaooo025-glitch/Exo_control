
undefined4 FUN_0800f0a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08011498(0x21c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) = 0;
    uVar2 = 2;
  }
  else {
    FUN_08022f96(iVar1,0,0x21c);
    *(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) = iVar1;
    *(undefined4 *)(param_1 + 700) =
         *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_08011252(param_1,*DAT_0800f284,2,0x200);
      *(undefined2 *)((*DAT_0800f284 & 0xf) * 0x14 + param_1 + 0x24) = 1;
      FUN_08011252(param_1,*DAT_0800f288,2,0x200);
      *(undefined2 *)((*DAT_0800f288 & 0xf) * 0x14 + param_1 + 0x164) = 1;
      *(undefined2 *)((*DAT_0800f28c & 0xf) * 0x14 + param_1 + 0x26) = 0x10;
    }
    else {
      FUN_08011252(param_1,*DAT_0800f284,2,0x40);
      *(undefined2 *)((*DAT_0800f284 & 0xf) * 0x14 + param_1 + 0x24) = 1;
      FUN_08011252(param_1,*DAT_0800f288,2,0x40);
      *(undefined2 *)((*DAT_0800f288 & 0xf) * 0x14 + param_1 + 0x164) = 1;
      *(undefined2 *)((*DAT_0800f28c & 0xf) * 0x14 + param_1 + 0x26) = 0x10;
    }
    FUN_08011252(param_1,*DAT_0800f28c,3,8);
    *(undefined2 *)((*DAT_0800f28c & 0xf) * 0x14 + param_1 + 0x24) = 1;
    *(undefined4 *)(iVar1 + 0x204) = 0;
    (*(code *)**(undefined4 **)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4))();
    *(undefined4 *)(iVar1 + 0x214) = 0;
    *(undefined4 *)(iVar1 + 0x218) = 0;
    if (*(int *)(iVar1 + 0x204) == 0) {
      uVar2 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x10) == '\0') {
        FUN_08011430(param_1,*DAT_0800f288,*(undefined4 *)(iVar1 + 0x204),0x200);
      }
      else {
        FUN_08011430(param_1,*DAT_0800f288,*(undefined4 *)(iVar1 + 0x204),0x40);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


