
char FUN_0800ddbe(int param_1,byte param_2,undefined4 param_3)

{
  char cVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x294) == 2) {
      if (*(uint *)(param_1 + 0x20) < *(uint *)(param_1 + 0x1c)) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20);
        FUN_0800efd6(param_1,param_3,*(undefined4 *)(param_1 + 0x1c));
        FUN_08011430(param_1,0,0,0);
      }
      else if (((*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x1c)) &&
               (*(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 0x18))) &&
              (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x298))) {
        FUN_0800efd6(param_1,0,0);
        *(undefined4 *)(param_1 + 0x298) = 0;
        FUN_08011430(param_1,0,0,0);
      }
      else {
        if ((*(char *)(param_1 + 0x29c) == '\x03') &&
           (*(int *)(*(int *)(param_1 + 0x2b8) + 0xc) != 0)) {
          *(undefined4 *)(param_1 + 0x2d4) = 0;
          (**(code **)(*(int *)(param_1 + 0x2b8) + 0xc))(param_1);
        }
        FUN_080112dc(param_1,0x80);
        FUN_0800f07a(param_1);
      }
    }
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      FUN_0800db2c(param_1);
      *(undefined1 *)(param_1 + 0x2a0) = 0;
    }
  }
  else {
    cVar1 = FUN_0800e1cc(param_1,param_2 | 0x80);
    if ((((cVar1 != -1) && (cVar1 == '\0')) && (*(char *)(param_1 + 0x29c) == '\x03')) &&
       (*(int *)(*(int *)(param_1 + 0x2b8) + 0x14) != 0)) {
      *(undefined4 *)(param_1 + 0x2d4) = 0;
      cVar1 = (**(code **)(*(int *)(param_1 + 0x2b8) + 0x14))(param_1,param_2);
      if (cVar1 != '\0') {
        return cVar1;
      }
    }
  }
  return '\0';
}


