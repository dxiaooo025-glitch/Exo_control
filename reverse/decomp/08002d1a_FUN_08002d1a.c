
undefined1 FUN_08002d1a(int param_1)

{
  uint uVar1;
  undefined1 local_9;
  
  uVar1 = *(uint *)(param_1 + 0x808) & 6;
  if (uVar1 == 0) {
    local_9 = 0;
  }
  else if ((uVar1 == 2) || (uVar1 == 6)) {
    local_9 = 2;
  }
  else {
    local_9 = 0xf;
  }
  return local_9;
}


