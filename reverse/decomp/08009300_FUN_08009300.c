
undefined4 FUN_08009300(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 1;
  }
  else {
    if (*(char *)((int)param_1 + 0x41) == '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      FUN_080128bc(param_1);
    }
    *(undefined1 *)((int)param_1 + 0x41) = 0x24;
    *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
    *(uint *)(*param_1 + 0x10) = param_1[1] & 0xf0ffffff;
    *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffff7fff;
    if (param_1[3] == 1) {
      *(uint *)(*param_1 + 8) = param_1[2] | 0x8000;
    }
    else {
      *(uint *)(*param_1 + 8) = param_1[2] | 0x8400;
    }
    if (param_1[3] == 2) {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) | 0x800;
    }
    else {
      *(uint *)(*param_1 + 4) = *(uint *)(*param_1 + 4) & 0xfffff7ff;
    }
    *(uint *)(*param_1 + 4) = DAT_08009434 | *(uint *)(*param_1 + 4);
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) & 0xffff7fff;
    *(int *)(*param_1 + 0xc) = param_1[6] << 8 | param_1[4] | param_1[5];
    *(int *)*param_1 = param_1[8] | param_1[7];
    *(uint *)*param_1 = *(uint *)*param_1 | 1;
    param_1[0x11] = 0;
    *(undefined1 *)((int)param_1 + 0x41) = 0x20;
    param_1[0xc] = 0;
    *(undefined1 *)((int)param_1 + 0x42) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


