
byte * FUN_0800e1e6(byte *param_1,byte param_2)

{
  ushort local_16;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  
  local_10 = (byte *)0x0;
  if ((ushort)*param_1 < *(ushort *)(param_1 + 2)) {
    local_16 = (ushort)*param_1;
    local_14 = param_1;
    local_c = param_1;
    while (local_16 < *(ushort *)(local_14 + 2)) {
      local_c = (byte *)FUN_0800e256(local_c,&local_16);
      if (local_c[1] == 5) {
        if (param_2 == local_c[2]) {
          return local_c;
        }
        local_10 = (byte *)0x0;
      }
    }
  }
  return local_10;
}


