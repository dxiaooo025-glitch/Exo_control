
undefined4 FUN_080131d8(float param_1,int *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 local_14;
  int local_10;
  int local_c;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    uVar1 = 1;
  }
  else if ((5.0 < param_1) || (param_1 < -5.0)) {
    uVar1 = 1;
  }
  else {
    if (param_1 < 0.0) {
      fVar2 = param_1 * DAT_080132b0 - 0.5;
    }
    else {
      fVar2 = param_1 * DAT_080132b0 + 0.5;
    }
    local_c = (int)fVar2;
    local_10 = local_c;
    _local_18 = CONCAT13((char)((uint)local_c >> 0x10),
                         CONCAT12((char)((uint)local_c >> 8),CONCAT11((char)local_c,0xc0)));
    local_14 = (undefined1)((uint)local_c >> 0x18);
    uVar1 = FUN_08012e90(param_2,&local_18,5);
  }
  return uVar1;
}


