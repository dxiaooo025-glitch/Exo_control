
undefined4 FUN_08006b68(int *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_c;
  
  iVar1 = FUN_080092a0();
  if (param_1 == (int *)0x0) {
    uVar4 = 1;
  }
  else {
    if (((((*param_1 == DAT_08006d20) || (*param_1 == DAT_08006d24)) || (*param_1 == DAT_08006d28))
        || ((*param_1 == DAT_08006d2c || (*param_1 == DAT_08006d30)))) ||
       ((((*param_1 == DAT_08006d34 || ((*param_1 == DAT_08006d38 || (*param_1 == DAT_08006d3c))))
         || (*param_1 == DAT_08006d40)) ||
        ((((*param_1 == DAT_08006d44 || (*param_1 == DAT_08006d48)) || (*param_1 == DAT_08006d4c))
         || (((*param_1 == DAT_08006d50 || (*param_1 == DAT_08006d54)) ||
             ((*param_1 == DAT_08006d58 || (*param_1 == DAT_08006d5c)))))))))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined1 *)((int)param_1 + 0x35) = 2;
      *(undefined1 *)(param_1 + 0xd) = 0;
      if ((((*param_1 == DAT_08006d20) || (*param_1 == DAT_08006d24)) ||
          ((*param_1 == DAT_08006d28 ||
           (((((*param_1 == DAT_08006d2c || (*param_1 == DAT_08006d30)) ||
              (*param_1 == DAT_08006d34)) ||
             ((*param_1 == DAT_08006d38 || (*param_1 == DAT_08006d3c)))) ||
            (*param_1 == DAT_08006d40)))))) ||
         ((((*param_1 == DAT_08006d44 || (*param_1 == DAT_08006d48)) ||
           ((*param_1 == DAT_08006d4c ||
            (((*param_1 == DAT_08006d50 || (*param_1 == DAT_08006d54)) || (*param_1 == DAT_08006d58)
             ))))) || (*param_1 == DAT_08006d5c)))) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      do {
        if ((*(uint *)*param_1 & 1) == 0) {
          local_c = param_1[8] |
                    param_1[2] | param_1[3] | param_1[4] | param_1[5] | param_1[6] | param_1[7] |
                    DAT_08006f88 & *(uint *)*param_1;
          if (param_1[9] == 4) {
            local_c = param_1[0xc] | param_1[0xb] | local_c;
          }
          if ((((((uint)param_1[1] < 0x29) || (0x2e < (uint)param_1[1])) &&
               (((uint)param_1[1] < 0x3f || (0x42 < (uint)param_1[1])))) &&
              (((uint)param_1[1] < 0x47 || (0x48 < (uint)param_1[1])))) &&
             ((((uint)param_1[1] < 0x4f || (0x52 < (uint)param_1[1])) &&
              (((uint)param_1[1] < 0x74 || (0x77 < (uint)param_1[1])))))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            local_c = local_c | 0x100000;
          }
          *(uint *)*param_1 = local_c;
          local_c = param_1[9] | *(uint *)(*param_1 + 0x14) & 0xfffffff8;
          if (((param_1[9] == 4) && (local_c = param_1[10] | local_c, param_1[0xb] != 0)) &&
             (iVar1 = FUN_08008c98(param_1), iVar1 != 0)) {
            param_1[0x15] = 0x40;
            *(undefined1 *)((int)param_1 + 0x35) = 1;
            return 1;
          }
          *(uint *)(*param_1 + 0x14) = local_c;
          iVar1 = FUN_08008b34(param_1);
          *(int *)(iVar1 + 8) = 0x3f << (param_1[0x17] & 0x1fU);
          goto LAB_08007036;
        }
        iVar2 = FUN_080092a0();
      } while ((uint)(iVar2 - iVar1) < 6);
      param_1[0x15] = 0x20;
      *(undefined1 *)((int)param_1 + 0x35) = 3;
      uVar4 = 1;
    }
    else {
      if ((((*param_1 == DAT_08006f8c) || (*param_1 == DAT_08006f90)) ||
          ((*param_1 == DAT_08006f94 ||
           (((*param_1 == DAT_08006f98 || (*param_1 == DAT_08006f9c)) || (*param_1 == DAT_08006fa0))
           )))) || ((*param_1 == DAT_08006fa4 || (*param_1 == DAT_08006fa8)))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        *(undefined1 *)((int)param_1 + 0x35) = 2;
        *(undefined1 *)(param_1 + 0xd) = 0;
        if (param_1[2] == 0x40) {
          uVar5 = 0x10;
        }
        else if (param_1[2] == 0x80) {
          uVar5 = 0x4000;
        }
        else {
          uVar5 = 0;
        }
        *(uint *)*param_1 =
             (uint)param_1[8] >> 4 |
             (uint)param_1[3] >> 3 | uVar5 | (uint)param_1[4] >> 3 | (uint)param_1[5] >> 3 |
             (uint)param_1[6] >> 3 | (uint)param_1[7] >> 3 | DAT_08006fac & *(uint *)*param_1;
        param_1[0x17] =
             (uint)((ulonglong)DAT_080071b4 * (ulonglong)(uint)(DAT_080071b0 + *param_1) >> 0x24) <<
             2;
        iVar1 = FUN_08008b34(param_1);
        *(int *)(iVar1 + 4) = 1 << (param_1[0x17] & 0x1fU);
LAB_08007036:
        if (((((*param_1 == DAT_080071b8) || (*param_1 == DAT_080071bc)) ||
             ((*param_1 == DAT_080071c0 ||
              ((*param_1 == DAT_080071c4 || (*param_1 == DAT_080071c8)))))) ||
            (*param_1 == DAT_080071cc)) ||
           (((((*param_1 == DAT_080071d0 || (*param_1 == DAT_080071d4)) ||
              (*param_1 == DAT_080071d8)) ||
             ((*param_1 == DAT_080071dc || (*param_1 == DAT_080071e0)))) ||
            ((((*param_1 == DAT_080071e4 ||
               ((*param_1 == DAT_080071e8 || (*param_1 == DAT_080071ec)))) ||
              ((*param_1 == DAT_080071f0 ||
               ((((*param_1 == DAT_080071f4 || (*param_1 == DAT_080071f8)) ||
                 (*param_1 == DAT_080071fc)) ||
                ((*param_1 == DAT_08007200 || (*param_1 == DAT_08007204)))))))) ||
             (((*param_1 == DAT_08007208 ||
               ((*param_1 == DAT_0800720c || (*param_1 == DAT_08007210)))) ||
              (*param_1 == DAT_08007214)))))))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          FUN_08008d90(param_1);
          if (param_1[2] == 0x80) {
            param_1[1] = 0;
          }
          *(uint *)param_1[0x18] = param_1[1] & 0xff;
          *(int *)(param_1[0x19] + 4) = param_1[0x1a];
          if ((param_1[1] == 0) || (8 < (uint)param_1[1])) {
            param_1[0x1b] = 0;
            param_1[0x1c] = 0;
            param_1[0x1d] = 0;
          }
          else {
            FUN_08008ec4(param_1);
            *(undefined4 *)param_1[0x1b] = 0;
            *(int *)(param_1[0x1c] + 4) = param_1[0x1d];
          }
        }
        param_1[0x15] = 0;
        *(undefined1 *)((int)param_1 + 0x35) = 1;
        uVar4 = 0;
      }
      else {
        param_1[0x15] = 0x40;
        *(undefined1 *)((int)param_1 + 0x35) = 3;
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}


