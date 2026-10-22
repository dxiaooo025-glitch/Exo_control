
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080067e4(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint local_10;
  uint local_c;
  
  puVar1 = DAT_08006a0c;
  for (local_c = 0; *param_2 >> (local_c & 0xff) != 0; local_c = local_c + 1) {
    uVar2 = 1 << (local_c & 0xff) & *param_2;
    if (uVar2 != 0) {
      if (((param_2[1] & 3) == 1) || ((param_2[1] & 3) == 2)) {
        param_1[2] = param_2[3] << ((local_c & 0x7f) << 1) |
                     ~(3 << ((local_c & 0x7f) << 1)) & param_1[2];
        param_1[1] = (param_2[1] >> 4 & 1) << (local_c & 0xff) |
                     ~(1 << (local_c & 0xff)) & param_1[1];
      }
      if ((param_2[1] & 3) != 3) {
        param_1[3] = param_2[2] << ((local_c & 0x7f) << 1) |
                     ~(3 << ((local_c & 0x7f) << 1)) & param_1[3];
      }
      if ((param_2[1] & 3) == 2) {
        param_1[(local_c >> 3) + 8] =
             param_2[4] << ((local_c & 7) << 2) |
             ~(0xf << ((local_c & 7) << 2)) & param_1[(local_c >> 3) + 8];
      }
      *param_1 = (param_2[1] & 3) << ((local_c & 0x7f) << 1) |
                 ~(3 << ((local_c & 0x7f) << 1)) & *param_1;
      if ((param_2[1] & 0x30000) != 0) {
        *(uint *)(DAT_08006a10 + 0xf4) = *(uint *)(DAT_08006a10 + 0xf4) | 2;
        if (param_1 == DAT_08006a18) {
          iVar3 = 0;
        }
        else if (param_1 == DAT_08006a1c) {
          iVar3 = 1;
        }
        else if (param_1 == DAT_08006a20) {
          iVar3 = 2;
        }
        else if (param_1 == DAT_08006a24) {
          iVar3 = 3;
        }
        else if (param_1 == DAT_08006a28) {
          iVar3 = 4;
        }
        else if (param_1 == DAT_08006a2c) {
          iVar3 = 5;
        }
        else if (param_1 == DAT_08006a30) {
          iVar3 = 6;
        }
        else if (param_1 == DAT_08006a34) {
          iVar3 = 7;
        }
        else if (param_1 == DAT_08006a38) {
          iVar3 = 9;
        }
        else {
          iVar3 = 10;
        }
        *(uint *)(DAT_08006b30 + ((local_c >> 2) + 2) * 4) =
             iVar3 << ((local_c & 3) << 2) |
             ~(0xf << ((local_c & 3) << 2)) & *(uint *)(DAT_08006a14 + ((local_c >> 2) + 2) * 4);
        local_10 = ~uVar2 & _DAT_58000000;
        if ((param_2[1] & 0x100000) != 0) {
          local_10 = uVar2 | local_10;
        }
        _DAT_58000000 = local_10;
        local_10 = ~uVar2 & _DAT_58000004;
        if ((param_2[1] & 0x200000) != 0) {
          local_10 = uVar2 | local_10;
        }
        _DAT_58000004 = local_10;
        local_10 = ~uVar2 & puVar1[1];
        if ((param_2[1] & 0x20000) != 0) {
          local_10 = uVar2 | local_10;
        }
        puVar1[1] = local_10;
        local_10 = ~uVar2 & *puVar1;
        if ((param_2[1] & 0x10000) != 0) {
          local_10 = uVar2 | local_10;
        }
        *puVar1 = local_10;
      }
    }
  }
  return;
}


