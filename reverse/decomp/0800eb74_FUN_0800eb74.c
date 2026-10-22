
char FUN_0800eb74(int param_1,int param_2)

{
  char local_9;
  
  local_9 = '\0';
  *DAT_0800ecc4 = (byte)*(undefined2 *)(param_2 + 2);
  if (*DAT_0800ecc4 < 2) {
    if (*(char *)(param_1 + 0x29c) == '\x02') {
      if (*DAT_0800ecc4 == 0) {
        FUN_0800f054(param_1);
      }
      else {
        *(uint *)(param_1 + 4) = (uint)*DAT_0800ecc4;
        local_9 = FUN_0800db42(param_1,*DAT_0800ecc4);
        if (local_9 == '\0') {
          FUN_0800f054(param_1);
          *(undefined1 *)(param_1 + 0x29c) = 3;
        }
        else {
          FUN_0800eea6(param_1,param_2);
          *(undefined1 *)(param_1 + 0x29c) = 2;
        }
      }
    }
    else if (*(char *)(param_1 + 0x29c) == '\x03') {
      if (*DAT_0800ecc4 == 0) {
        *(undefined1 *)(param_1 + 0x29c) = 2;
        *(uint *)(param_1 + 4) = (uint)*DAT_0800ecc4;
        FUN_0800db7a(param_1,*DAT_0800ecc4);
        FUN_0800f054(param_1);
      }
      else if ((uint)*DAT_0800ecc4 == *(uint *)(param_1 + 4)) {
        FUN_0800f054(param_1);
      }
      else {
        FUN_0800db7a(param_1,*(uint *)(param_1 + 4) & 0xff);
        *(uint *)(param_1 + 4) = (uint)*DAT_0800ecc4;
        local_9 = FUN_0800db42(param_1,*DAT_0800ecc4);
        if (local_9 == '\0') {
          FUN_0800f054(param_1);
        }
        else {
          FUN_0800eea6(param_1,param_2);
          FUN_0800db7a(param_1,*(uint *)(param_1 + 4) & 0xff);
          *(undefined1 *)(param_1 + 0x29c) = 2;
        }
      }
    }
    else {
      FUN_0800eea6(param_1,param_2);
      FUN_0800db7a(param_1,*DAT_0800ecc4);
      local_9 = '\x03';
    }
  }
  else {
    FUN_0800eea6(param_1,param_2);
    local_9 = '\x03';
  }
  return local_9;
}


