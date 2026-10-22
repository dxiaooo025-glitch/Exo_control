
bool FUN_08008c98(int param_1)

{
  bool local_9;
  
  local_9 = false;
  if (*(int *)(param_1 + 0x18) == 0) {
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
    case 2:
      local_9 = (*(uint *)(param_1 + 0x2c) & 0x1000000) != 0;
      break;
    case 1:
      local_9 = *(int *)(param_1 + 0x2c) == 0x1800000;
      break;
    default:
    }
  }
  else if (*(int *)(param_1 + 0x18) == 0x2000) {
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
    case 2:
      local_9 = true;
      break;
    case 1:
      local_9 = (*(uint *)(param_1 + 0x2c) & 0x1000000) != 0;
      break;
    case 3:
      local_9 = *(int *)(param_1 + 0x2c) == 0x1800000;
    }
  }
  else if (*(uint *)(param_1 + 0x28) < 3) {
    local_9 = true;
  }
  else if ((*(uint *)(param_1 + 0x28) == 3) && ((*(uint *)(param_1 + 0x2c) & 0x1000000) != 0)) {
    local_9 = true;
  }
  return local_9;
}


