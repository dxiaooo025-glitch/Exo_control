
void FUN_0800e7c4(int param_1,int param_2)

{
  ushort local_10;
  char local_d;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  local_d = '\0';
  switch(*(ushort *)(param_2 + 2) >> 8) {
  case 1:
    local_c = (*(code *)**(undefined4 **)(param_1 + 0x2b4))
                        (*(undefined1 *)(param_1 + 0x10),&local_10);
    break;
  case 2:
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_c = (**(code **)(*(int *)(param_1 + 0x2b8) + 0x28))(&local_10);
      *(undefined1 *)(local_c + 1) = 2;
    }
    else {
      local_c = (**(code **)(*(int *)(param_1 + 0x2b8) + 0x2c))(&local_10);
      *(undefined1 *)(local_c + 1) = 2;
    }
    break;
  case 3:
    switch((char)*(undefined2 *)(param_2 + 2)) {
    case '\0':
      if (*(int *)(*(int *)(param_1 + 0x2b4) + 4) == 0) {
        FUN_0800eea6(param_1,param_2);
        local_d = local_d + '\x01';
      }
      else {
        local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 4))
                            (*(undefined1 *)(param_1 + 0x10),&local_10);
      }
      break;
    case '\x01':
      if (*(int *)(*(int *)(param_1 + 0x2b4) + 8) == 0) {
        FUN_0800eea6(param_1,param_2);
        local_d = local_d + '\x01';
      }
      else {
        local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 8))
                            (*(undefined1 *)(param_1 + 0x10),&local_10);
      }
      break;
    case '\x02':
      if (*(int *)(*(int *)(param_1 + 0x2b4) + 0xc) == 0) {
        FUN_0800eea6(param_1,param_2);
        local_d = local_d + '\x01';
      }
      else {
        local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 0xc))
                            (*(undefined1 *)(param_1 + 0x10),&local_10);
      }
      break;
    case '\x03':
      if (*(int *)(*(int *)(param_1 + 0x2b4) + 0x10) == 0) {
        FUN_0800eea6(param_1,param_2);
        local_d = local_d + '\x01';
      }
      else {
        local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 0x10))
                            (*(undefined1 *)(param_1 + 0x10),&local_10);
      }
      break;
    case '\x04':
      if (*(int *)(*(int *)(param_1 + 0x2b4) + 0x14) == 0) {
        FUN_0800eea6(param_1,param_2);
        local_d = local_d + '\x01';
      }
      else {
        local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 0x14))
                            (*(undefined1 *)(param_1 + 0x10),&local_10);
      }
      break;
    case '\x05':
      if (*(int *)(*(int *)(param_1 + 0x2b4) + 0x18) == 0) {
        FUN_0800eea6(param_1,param_2);
        local_d = local_d + '\x01';
      }
      else {
        local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 0x18))
                            (*(undefined1 *)(param_1 + 0x10),&local_10);
      }
      break;
    default:
      FUN_0800eea6(param_1,param_2);
      local_d = local_d + '\x01';
    }
    break;
  default:
    FUN_0800eea6(param_1,param_2);
    local_d = local_d + '\x01';
    break;
  case 6:
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_c = (**(code **)(*(int *)(param_1 + 0x2b8) + 0x34))(&local_10);
    }
    else {
      FUN_0800eea6(param_1,param_2);
      local_d = local_d + '\x01';
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x10) == '\0') {
      local_c = (**(code **)(*(int *)(param_1 + 0x2b8) + 0x30))(&local_10);
      *(undefined1 *)(local_c + 1) = 7;
    }
    else {
      FUN_0800eea6(param_1,param_2);
      local_d = local_d + '\x01';
    }
    break;
  case 0xf:
    if (*(int *)(*(int *)(param_1 + 0x2b4) + 0x1c) == 0) {
      FUN_0800eea6(param_1,param_2);
      local_d = local_d + '\x01';
    }
    else {
      local_c = (**(code **)(*(int *)(param_1 + 0x2b4) + 0x1c))
                          (*(undefined1 *)(param_1 + 0x10),&local_10);
    }
  }
  if (local_d == '\0') {
    if (*(short *)(param_2 + 6) == 0) {
      FUN_0800f054(param_1);
    }
    else if (local_10 == 0) {
      FUN_0800eea6(param_1,param_2);
    }
    else {
      if (*(ushort *)(param_2 + 6) <= local_10) {
        local_10 = *(ushort *)(param_2 + 6);
      }
      FUN_0800efa0(param_1,local_c,local_10);
    }
  }
  return;
}


