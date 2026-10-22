
char FUN_08012e90(int *param_1,int param_2,byte param_3)

{
  int iVar1;
  char local_35;
  uint local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  char local_9;
  
  FUN_08022f96(local_34,0,0x24);
  local_9 = 2;
  local_35 = '\0';
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_2 == 0)) ||
     ((param_3 == 0 || (8 < param_3)))) {
    local_9 = '\x01';
  }
  else {
    local_9 = FUN_08013124(param_1,&local_35);
    if ((local_9 == '\0') && (local_35 == '\0')) {
      local_34[0] = *(byte *)(param_1 + 1) | 0x100;
      local_34[1] = 0;
      local_34[2] = 0;
      local_34[3] = FUN_08012e28(param_3);
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        iVar1 = FUN_0800a956(*param_1);
        if (iVar1 != 0) {
          local_9 = FUN_0800a4a0(*param_1,local_34,param_2);
          if (local_9 == '\0') {
            return '\0';
          }
          if (local_9 != '\x02') {
            return local_9;
          }
        }
        if (local_10 + 1 < 4) {
          FUN_080106da(1);
        }
      }
    }
    else if (local_9 == '\0') {
      local_9 = '\x02';
    }
  }
  return local_9;
}


