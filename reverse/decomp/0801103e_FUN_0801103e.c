
void FUN_0801103e(int param_1)

{
  undefined1 local_9;
  
  local_9 = 1;
  if (*(char *)(param_1 + 7) == '\0') {
    local_9 = 0;
  }
  else if (*(char *)(param_1 + 7) == '\x02') {
    local_9 = 1;
  }
  else {
    FUN_08011c5a();
  }
  FUN_0800dfc6(*(undefined4 *)(param_1 + 0x4e0),local_9);
  FUN_0800df22(*(undefined4 *)(param_1 + 0x4e0));
  return;
}


