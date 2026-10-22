
void FUN_08011724(uint param_1,int param_2,byte param_3)

{
  byte bVar1;
  uint local_14;
  byte local_9;
  
  local_14 = param_1;
  for (local_9 = 0; local_9 < param_3; local_9 = local_9 + 1) {
    bVar1 = (byte)(local_14 >> 0x18);
    if (local_14 >> 0x1c < 10) {
      *(byte *)(param_2 + (uint)local_9 * 2) = (bVar1 >> 4) + 0x30;
    }
    else {
      *(byte *)(param_2 + (uint)local_9 * 2) = (bVar1 >> 4) + 0x37;
    }
    local_14 = local_14 << 4;
    *(undefined1 *)((uint)local_9 * 2 + 1 + param_2) = 0;
  }
  return;
}


