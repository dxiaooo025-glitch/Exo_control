
void FUN_0802102c(void)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_a8 [116];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ushort local_1c;
  char local_1a;
  char local_19;
  uint local_18;
  undefined2 local_14;
  char local_11;
  
  local_11 = '\0';
  local_14 = 0;
  do {
    while( true ) {
      while( true ) {
        while (local_11 != '\0') {
          iVar2 = FUN_0801f980(DAT_08021348,local_14);
          if (iVar2 == 0) {
            FUN_080106da(2);
          }
          else {
            local_11 = '\0';
          }
        }
        iVar2 = FUN_08011ac8();
        if (iVar2 != 0) break;
        FUN_080106da(2);
      }
      local_18 = 0;
      local_19 = '\0';
      FUN_08010d48();
      if (*(char *)(DAT_0802134c + 0x469c) == '\0') {
        if (*(char *)(DAT_0802134c + 0x3a2c) == '\0') {
          if (*(char *)(DAT_0802134c + 0x3a2d) == '\0') {
            if (*(char *)(DAT_0802134c + 0x3a2e) != '\0') {
              *(undefined1 *)(DAT_0802134c + 0x3a2e) = 0;
              local_18 = FUN_0801fd18(DAT_08021348,0x400);
              local_19 = '\x01';
            }
          }
          else {
            *(undefined1 *)(DAT_0802134c + 0x3a2d) = 0;
            local_18 = FUN_0801fda8(DAT_08021348,0x400);
            local_19 = '\x01';
          }
        }
        else {
          *(undefined1 *)(DAT_0802134c + 0x3a2c) = 0;
          local_18 = FUN_0801f9bc(DAT_08021348,0x400);
          local_19 = '\x01';
        }
      }
      else {
        *(undefined1 *)(DAT_0802134c + 0x469c) = 0;
        local_18 = FUN_0801fbc4(DAT_08021348,0x400);
        local_19 = '\x01';
      }
      FUN_08010dac();
      if (local_19 == '\0') break;
      cVar1 = FUN_0801f980(DAT_08021348,local_18 & 0xffff);
      if (cVar1 != '\x01') {
        local_14 = (undefined2)local_18;
        local_11 = '\x01';
        FUN_080106da(2);
      }
    }
    iVar2 = FUN_0801f684(auStack_a8);
    if (iVar2 == 0) {
      if (*(char *)(DAT_0802134c + 0x3a39) == '\0') {
        if (*(char *)(DAT_0802134c + 0x4686) == '\0') {
          if (*(char *)(DAT_080213d0 + 0x4687) == '\0') {
            FUN_080106da(2);
          }
          else {
            FUN_08010d48();
            *(undefined1 *)(DAT_080213d0 + 0x4687) = 0;
            local_18 = FUN_0802027c(DAT_080213d4,0x400);
            FUN_08010dac();
            cVar1 = FUN_0801f980(DAT_080213d4,local_18 & 0xffff);
            if (cVar1 != '\x01') {
              FUN_08010d48();
              *(undefined1 *)(DAT_080213d0 + 0x4687) = 1;
              FUN_08010dac();
              FUN_080106da(2);
            }
          }
        }
        else {
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          local_24 = 0;
          local_20 = 0;
          local_1a = '\0';
          FUN_08010d48();
          if (*(ushort *)(DAT_0802134c + 0x4684) < *(ushort *)(DAT_0802134c + 0x467e)) {
            local_1c = *(short *)(DAT_0802134c + 0x4684) + *(short *)(DAT_0802134c + 0x467c) & 0x7f;
            iVar2 = DAT_0802134c + (uint)local_1c * 0x18;
            local_34 = *(undefined4 *)(iVar2 + 0x3a7c);
            local_30 = *(undefined4 *)(iVar2 + 0x3a80);
            local_2c = *(undefined4 *)(iVar2 + 0x3a84);
            local_28 = *(undefined4 *)(iVar2 + 0x3a88);
            local_24 = *(undefined4 *)(iVar2 + 0x3a8c);
            local_20 = *(undefined4 *)(iVar2 + 0x3a90);
            local_1a = '\x01';
          }
          else {
            *(undefined1 *)(DAT_0802134c + 0x4686) = 0;
            *(undefined1 *)(DAT_0802134c + 0x4687) = 1;
          }
          FUN_08010dac();
          if (local_1a != '\0') {
            local_18 = FUN_0801fc14(DAT_08021348,0x400,&local_34);
            iVar2 = FUN_0801f980(DAT_08021348,local_18 & 0xffff);
            if (iVar2 == 0) {
              FUN_080106da(2);
            }
            else {
              FUN_08010d48();
              *(short *)(DAT_0802134c + 0x4684) = *(short *)(DAT_0802134c + 0x4684) + 1;
              FUN_08010dac();
            }
          }
        }
      }
      else {
        FUN_08010d48();
        *(undefined1 *)(DAT_0802134c + 0x3a39) = 0;
        *(undefined1 *)(DAT_0802134c + 0x3a38) = 0;
        *(undefined1 *)(DAT_0802134c + 0x4686) = 1;
        *(undefined2 *)(DAT_0802134c + 0x4684) = 0;
        FUN_08010dac();
      }
    }
    else {
      local_18 = FUN_0801fdcc(DAT_08021348,0x400,auStack_a8);
      cVar1 = FUN_0801f980(DAT_08021348,local_18 & 0xffff);
      if (cVar1 != '\x01') {
        local_14 = (undefined2)local_18;
        local_11 = '\x01';
        FUN_080106da(2);
      }
    }
  } while( true );
}


