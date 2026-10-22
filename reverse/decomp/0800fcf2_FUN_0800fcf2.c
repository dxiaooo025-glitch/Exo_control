
/* WARNING: Removing unreachable block (ram,0x0800fd24) */
/* WARNING: Removing unreachable block (ram,0x0800fd28) */
/* WARNING: Removing unreachable block (ram,0x0800fd2c) */
/* WARNING: Removing unreachable block (ram,0x0800fd3a) */

void FUN_0800fcf2(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint local_c;
  
  iVar2 = param_7[0xc];
  if (param_2 == 0) {
    *(undefined1 *)(param_7 + 0xd) = 0;
  }
  else {
    for (local_c = 0;
        (local_c < 0x10 &&
        (*(undefined1 *)((int)param_7 + local_c + 0x34) = *(undefined1 *)(local_c + param_2),
        *(char *)(local_c + param_2) != '\0')); local_c = local_c + 1) {
    }
    *(undefined1 *)((int)param_7 + 0x43) = 0;
  }
  if (6 < param_5) {
    param_5 = 6;
  }
  param_7[0xb] = param_5;
  param_7[0x11] = param_5;
  param_7[0x12] = 0;
  FUN_0800fa80(param_7 + 1);
  FUN_0800fa80(param_7 + 6);
  param_7[4] = param_7;
  param_7[6] = 7 - param_5;
  param_7[9] = param_7;
  param_7[0x13] = 0;
  *(undefined1 *)(param_7 + 0x14) = 0;
  uVar1 = FUN_08010ae0((param_3 + 0x3fffffff) * 4 + iVar2 & 0xfffffff8,param_1,param_4);
  *param_7 = uVar1;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_7;
  }
  return;
}


