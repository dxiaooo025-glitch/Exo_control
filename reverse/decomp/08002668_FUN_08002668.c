
undefined1
FUN_08002668(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  undefined1 local_19;
  char cStack_a;
  char local_7;
  char local_3;
  
  local_7 = (char)((uint)param_3 >> 8);
  if (local_7 == '\x01') {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffeffff;
    *(uint *)(param_1 + 0xc) = DAT_08002744 & *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffcfffff;
    if (param_5 == '\x01') {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x100000;
    }
    local_19 = FUN_08003cac(param_1);
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
    local_19 = FUN_08003cac(param_1);
    local_3 = (char)((uint)param_4 >> 8);
    if (local_3 == '\0') {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x10000;
    }
    else {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffeffff;
    }
  }
  cStack_a = (char)((uint)param_2 >> 0x10);
  if (cStack_a == '\x01') {
    *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffff;
    *(uint *)(param_1 + 0x5c) = DAT_08002748 | *(uint *)(param_1 + 0x5c);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 6;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x20;
  }
  return local_19;
}


