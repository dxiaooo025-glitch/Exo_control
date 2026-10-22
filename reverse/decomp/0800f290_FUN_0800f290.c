
undefined4 FUN_0800f290(int param_1)

{
  FUN_0801129e(param_1,*DAT_0800f388);
  *(undefined2 *)((*DAT_0800f388 & 0xf) * 0x14 + param_1 + 0x24) = 0;
  FUN_0801129e(param_1,*DAT_0800f38c);
  *(undefined2 *)((*DAT_0800f38c & 0xf) * 0x14 + param_1 + 0x164) = 0;
  FUN_0801129e(param_1,*DAT_0800f390);
  *(undefined2 *)((*DAT_0800f390 & 0xf) * 0x14 + param_1 + 0x24) = 0;
  *(undefined2 *)((*DAT_0800f390 & 0xf) * 0x14 + param_1 + 0x26) = 0;
  if (*(int *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) != 0) {
    (**(code **)(*(int *)((*(int *)(param_1 + 0x2d4) + 0xb0) * 4 + param_1 + 4) + 4))();
    FUN_080114b4(*(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4));
    *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2d4) + 0xb0) * 4) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
  }
  return 0;
}


