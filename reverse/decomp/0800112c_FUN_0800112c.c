
undefined4 FUN_0800112c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_9;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x495) == '\0') {
      *(undefined1 *)(param_1 + 0x125) = 0;
      FUN_08010f08(param_1);
    }
    *(undefined1 *)((int)param_1 + 0x495) = 3;
    FUN_080028b2(*param_1);
    iVar1 = FUN_08002668(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
    if (iVar1 == 0) {
      iVar1 = FUN_080028d4(*param_1,0);
      if (iVar1 == 0) {
        for (local_9 = 0; local_9 < *(byte *)(param_1 + 1); local_9 = local_9 + 1) {
          *(undefined1 *)((int)param_1 + (uint)local_9 * 0x24 + 0x15) = 1;
          *(byte *)(param_1 + (uint)local_9 * 9 + 5) = local_9;
          *(ushort *)((int)param_1 + (uint)local_9 * 0x24 + 0x2e) = (ushort)local_9;
          *(undefined1 *)(param_1 + (uint)local_9 * 9 + 6) = 0;
          param_1[(uint)local_9 * 9 + 7] = 0;
          param_1[(uint)local_9 * 9 + 8] = 0;
          param_1[(uint)local_9 * 9 + 9] = 0;
        }
        for (local_9 = 0; local_9 < *(byte *)(param_1 + 1); local_9 = local_9 + 1) {
          *(undefined1 *)((int)param_1 + (uint)local_9 * 0x24 + 0x255) = 0;
          *(byte *)(param_1 + (uint)local_9 * 9 + 0x95) = local_9;
          *(undefined1 *)(param_1 + (uint)local_9 * 9 + 0x96) = 0;
          param_1[(uint)local_9 * 9 + 0x97] = 0;
          param_1[(uint)local_9 * 9 + 0x98] = 0;
          param_1[(uint)local_9 * 9 + 0x99] = 0;
        }
        iVar1 = FUN_0800296c(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4))
        ;
        if (iVar1 == 0) {
          *(undefined1 *)((int)param_1 + 0x11) = 0;
          *(undefined1 *)((int)param_1 + 0x495) = 1;
          if (*(char *)(param_1 + 3) == '\x01') {
            FUN_08002608(param_1);
          }
          FUN_08003a22(*param_1);
          uVar2 = 0;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x495) = 2;
          uVar2 = 1;
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x495) = 2;
        uVar2 = 1;
      }
    }
    else {
      *(undefined1 *)((int)param_1 + 0x495) = 2;
      uVar2 = 1;
    }
  }
  return uVar2;
}


