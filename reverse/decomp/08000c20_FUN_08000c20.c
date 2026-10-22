
undefined4 FUN_08000c20(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 0x3d) == '\x01') {
    *(undefined1 *)((int)param_1 + 0x3d) = 2;
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 1;
    if ((((((*param_1 == DAT_08000d04) || (*param_1 == 0x40000000)) || (*param_1 == DAT_08000d08))
         || ((*param_1 == DAT_08000d0c || (*param_1 == DAT_08000d10)))) ||
        ((*param_1 == DAT_08000d14 || ((*param_1 == DAT_08000d18 || (*param_1 == DAT_08000d1c))))))
       || ((*param_1 == DAT_08000d20 || (*param_1 == DAT_08000d24)))) {
      uVar2 = DAT_08000d28 & *(uint *)(*param_1 + 8);
      if ((uVar2 != 6) && (uVar2 != 0x10000)) {
        *(uint *)*param_1 = *(uint *)*param_1 | 1;
      }
    }
    else {
      *(uint *)*param_1 = *(uint *)*param_1 | 1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


