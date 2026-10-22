
char FUN_0800dc58(int param_1,byte param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char local_a;
  char local_9;
  
  local_9 = '\0';
  if (param_2 != 0) {
    cVar1 = FUN_0800e1cc(param_1,param_2 & 0x7f);
    if (cVar1 == -1) {
      return '\0';
    }
    if (cVar1 != '\0') {
      return '\0';
    }
    if ((*(char *)(param_1 + 0x29c) == '\x03') && (*(int *)(*(int *)(param_1 + 0x2b8) + 0x18) != 0))
    {
      *(undefined4 *)(param_1 + 0x2d4) = 0;
      local_9 = (**(code **)(*(int *)(param_1 + 0x2b8) + 0x18))(param_1,param_2);
    }
    if (local_9 == '\0') {
      return '\0';
    }
    return local_9;
  }
  if (*(int *)(param_1 + 0x294) != 3) {
    return '\0';
  }
  if (*(uint *)(param_1 + 0x160) < *(uint *)(param_1 + 0x15c)) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) - *(int *)(param_1 + 0x160);
    uVar3 = *(uint *)(param_1 + 0x15c);
    if (*(uint *)(param_1 + 0x160) <= *(uint *)(param_1 + 0x15c)) {
      uVar3 = *(uint *)(param_1 + 0x160);
    }
    FUN_0800f032(param_1,param_3,uVar3);
    return '\0';
  }
  bVar2 = *(byte *)(param_1 + 0x2aa) & 0x1f;
  if (bVar2 == 2) {
    local_a = FUN_0800e1cc(param_1,(char)*(undefined2 *)(param_1 + 0x2ae));
    goto LAB_0800dd0c;
  }
  if (bVar2 < 3) {
    if ((*(byte *)(param_1 + 0x2aa) & 0x1f) == 0) {
      local_a = '\0';
      goto LAB_0800dd0c;
    }
    if (bVar2 == 1) {
      local_a = FUN_0800e1b2(param_1,(char)*(undefined2 *)(param_1 + 0x2ae));
      goto LAB_0800dd0c;
    }
  }
  local_a = '\0';
LAB_0800dd0c:
  if (((local_a == '\0') && (*(char *)(param_1 + 0x29c) == '\x03')) &&
     (*(int *)(*(int *)(param_1 + 0x2b8) + 0x10) != 0)) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    (**(code **)(*(int *)(param_1 + 0x2b8) + 0x10))(param_1);
  }
  FUN_0800f054(param_1);
  return '\0';
}


