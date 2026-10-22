
char FUN_0800e3b0(int param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  char local_9;
  
  local_9 = '\0';
  bVar2 = *param_2 & 0x60;
  if ((bVar2 == 0x40) || ((bVar2 < 0x41 && (((*param_2 & 0x60) == 0 || (bVar2 == 0x20)))))) {
    if (*(byte *)(param_1 + 0x29c) - 1 < 3) {
      if ((byte)*(undefined2 *)(param_2 + 4) < 2) {
        cVar1 = FUN_0800e1b2(param_1,(char)*(undefined2 *)(param_2 + 4));
        if ((cVar1 == -1) || (cVar1 != '\0')) {
          local_9 = '\x03';
        }
        else if (*(int *)(*(int *)(param_1 + 0x2b8) + 8) == 0) {
          local_9 = '\x03';
        }
        else {
          *(undefined4 *)(param_1 + 0x2d4) = 0;
          local_9 = (**(code **)(*(int *)(param_1 + 0x2b8) + 8))(param_1,param_2);
        }
        if ((*(short *)(param_2 + 6) == 0) && (local_9 == '\0')) {
          FUN_0800f054(param_1);
        }
      }
      else {
        FUN_0800eea6(param_1,param_2);
      }
    }
    else {
      FUN_0800eea6(param_1,param_2);
    }
  }
  else {
    FUN_0800eea6(param_1,param_2);
  }
  return local_9;
}


