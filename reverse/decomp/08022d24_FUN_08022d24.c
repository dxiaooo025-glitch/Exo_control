
undefined4 * FUN_08022d24(undefined4 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[0x19] = 0;
  *(undefined2 *)((int)param_1 + 0xe) = param_3;
  param_1[6] = 0;
  puVar2 = (undefined4 *)FUN_08022f96(param_1 + 0x17,0,8);
  param_1[9] = DAT_08022d7c;
  param_1[10] = DAT_08022d80;
  param_1[0xb] = DAT_08022d84;
  param_1[0xc] = DAT_08022d88;
  puVar1 = DAT_08022d8c;
  param_1[8] = param_1;
  if (((param_1 == puVar1) || (param_1 == puVar1 + 0x1a)) || (param_1 == puVar1 + 0x34)) {
    return param_1 + 0x16;
  }
  return puVar2;
}


