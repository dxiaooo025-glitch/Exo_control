
void FUN_0800beb8(int *param_1)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(*param_1 + 0x1c);
  uVar6 = *(uint *)*param_1;
  uVar7 = *(uint *)(*param_1 + 8);
  if ((((uVar5 & 0x80f) == 0) && ((uVar5 & 0x20) != 0)) &&
     (((uVar6 & 0x20) != 0 || ((uVar7 & 0x10000000) != 0)))) {
    if (param_1[0x1d] != 0) {
      (*(code *)param_1[0x1d])(param_1);
    }
  }
  else if (((uVar5 & 0x80f) == 0) ||
          (((DAT_0800c170 & uVar7) == 0 && ((DAT_0800c174 & uVar6) == 0)))) {
    if ((param_1[0x1b] == 1) && (((uVar5 & 0x10) != 0 && ((uVar6 & 0x10) != 0)))) {
      *(undefined4 *)(*param_1 + 0x20) = 0x10;
      if ((*(uint *)(*param_1 + 8) & 0x40) == 0x40) {
        if ((((((*(int *)param_1[0x20] == DAT_0800c41c) || (*(int *)param_1[0x20] == DAT_0800c420))
              || (*(int *)param_1[0x20] == DAT_0800c424)) ||
             (((*(int *)param_1[0x20] == DAT_0800c428 || (*(int *)param_1[0x20] == DAT_0800c42c)) ||
              ((*(int *)param_1[0x20] == DAT_0800c430 ||
               ((*(int *)param_1[0x20] == DAT_0800c434 || (*(int *)param_1[0x20] == DAT_0800c438))))
              )))) || (*(int *)param_1[0x20] == DAT_0800c43c)) ||
           (((((*(int *)param_1[0x20] == DAT_0800c440 || (*(int *)param_1[0x20] == DAT_0800c444)) ||
              (*(int *)param_1[0x20] == DAT_0800c448)) ||
             ((*(int *)param_1[0x20] == DAT_0800c44c || (*(int *)param_1[0x20] == DAT_0800c450))))
            || ((*(int *)param_1[0x20] == DAT_0800c454 || (*(int *)param_1[0x20] == DAT_0800c458))))
           )) {
          uVar3 = (ushort)*(undefined4 *)(*(int *)param_1[0x20] + 4);
        }
        else {
          uVar3 = (ushort)*(undefined4 *)(*(int *)param_1[0x20] + 4);
        }
        if ((uVar3 != 0) && (uVar3 < *(ushort *)(param_1 + 0x17))) {
          *(ushort *)((int)param_1 + 0x5e) = uVar3;
          if (*(int *)(param_1[0x20] + 0x1c) != 0x100) {
            do {
              ExclusiveAccess((uint *)*param_1);
              bVar2 = (bool)hasExclusiveAccess((uint *)*param_1);
            } while (!bVar2);
            *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffeff;
            do {
              ExclusiveAccess((uint *)(*param_1 + 8));
              bVar2 = (bool)hasExclusiveAccess((uint *)(*param_1 + 8));
            } while (!bVar2);
            *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xfffffffe;
            do {
              ExclusiveAccess((uint *)(*param_1 + 8));
              bVar2 = (bool)hasExclusiveAccess((uint *)(*param_1 + 8));
            } while (!bVar2);
            *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffffbf;
            param_1[0x23] = 0x20;
            param_1[0x1b] = 0;
            do {
              ExclusiveAccess((uint *)*param_1);
              bVar2 = (bool)hasExclusiveAccess((uint *)*param_1);
            } while (!bVar2);
            *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffef;
            FUN_08007218(param_1[0x20]);
          }
          param_1[0x1c] = 2;
          FUN_0800c654(param_1,(short)param_1[0x17] - *(short *)((int)param_1 + 0x5e));
        }
      }
      else {
        sVar1 = (short)param_1[0x17] - *(short *)((int)param_1 + 0x5e);
        if ((*(short *)((int)param_1 + 0x5e) != 0) && (sVar1 != 0)) {
          do {
            ExclusiveAccess((uint *)*param_1);
            bVar2 = (bool)hasExclusiveAccess((uint *)*param_1);
          } while (!bVar2);
          *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffedf;
          do {
            ExclusiveAccess((uint *)(*param_1 + 8));
            bVar2 = (bool)hasExclusiveAccess((uint *)(*param_1 + 8));
          } while (!bVar2);
          *(uint *)(*param_1 + 8) = DAT_0800c628 & *(uint *)(*param_1 + 8);
          param_1[0x23] = 0x20;
          param_1[0x1b] = 0;
          param_1[0x1d] = 0;
          do {
            ExclusiveAccess((uint *)*param_1);
            bVar2 = (bool)hasExclusiveAccess((uint *)*param_1);
          } while (!bVar2);
          *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffef;
          param_1[0x1c] = 2;
          FUN_0800c654(param_1,sVar1);
        }
      }
    }
    else if (((uVar5 & 0x100000) == 0) || ((uVar7 & 0x400000) == 0)) {
      if (((uVar5 & 0x80) == 0) || (((uVar6 & 0x80) == 0 && ((uVar7 & 0x800000) == 0)))) {
        if (((uVar5 & 0x40) == 0) || ((uVar6 & 0x40) == 0)) {
          if (((uVar5 & 0x800000) == 0) || ((uVar6 & 0x40000000) == 0)) {
            if (((uVar5 & 0x1000000) != 0) && ((int)uVar6 < 0)) {
              FUN_0800d81a(param_1);
            }
          }
          else {
            FUN_0800d82e(param_1);
          }
        }
        else {
          FUN_0800d7b0(param_1);
        }
      }
      else if (param_1[0x1e] != 0) {
        (*(code *)param_1[0x1e])(param_1);
      }
    }
    else {
      *(undefined4 *)(*param_1 + 0x20) = 0x100000;
      FUN_0800d806(param_1);
    }
  }
  else {
    if (((uVar5 & 1) != 0) && ((uVar6 & 0x100) != 0)) {
      *(undefined4 *)(*param_1 + 0x20) = 1;
      param_1[0x24] = param_1[0x24] | 1;
    }
    if (((uVar5 & 2) != 0) && ((uVar7 & 1) != 0)) {
      *(undefined4 *)(*param_1 + 0x20) = 2;
      param_1[0x24] = param_1[0x24] | 4;
    }
    if (((uVar5 & 4) != 0) && ((uVar7 & 1) != 0)) {
      *(undefined4 *)(*param_1 + 0x20) = 4;
      param_1[0x24] = param_1[0x24] | 2;
    }
    if (((uVar5 & 8) != 0) && (((uVar6 & 0x20) != 0 || ((DAT_0800c170 & uVar7) != 0)))) {
      *(undefined4 *)(*param_1 + 0x20) = 8;
      param_1[0x24] = param_1[0x24] | 8;
    }
    if (((uVar5 & 0x800) != 0) && ((uVar6 & 0x4000000) != 0)) {
      *(undefined4 *)(*param_1 + 0x20) = 0x800;
      param_1[0x24] = param_1[0x24] | 0x20;
    }
    if (param_1[0x24] != 0) {
      if (((uVar5 & 0x20) != 0) &&
         ((((uVar6 & 0x20) != 0 || ((uVar7 & 0x10000000) != 0)) && (param_1[0x1d] != 0)))) {
        (*(code *)param_1[0x1d])(param_1);
      }
      if (((*(uint *)(*param_1 + 8) & 0x40) == 0x40) || ((param_1[0x24] & 0x28U) != 0)) {
        FUN_0800d6b8(param_1);
        if ((*(uint *)(*param_1 + 8) & 0x40) == 0x40) {
          do {
            ExclusiveAccess((uint *)(*param_1 + 8));
            bVar2 = (bool)hasExclusiveAccess((uint *)(*param_1 + 8));
          } while (!bVar2);
          *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) & 0xffffffbf;
          if (param_1[0x20] == 0) {
            FUN_0800c640(param_1);
          }
          else {
            *(undefined4 *)(param_1[0x20] + 0x50) = DAT_0800c178;
            iVar4 = FUN_08007854(param_1[0x20]);
            if (iVar4 != 0) {
              (**(code **)(param_1[0x20] + 0x50))(param_1[0x20]);
            }
          }
        }
        else {
          FUN_0800c640(param_1);
        }
      }
      else {
        FUN_0800c640(param_1);
        param_1[0x24] = 0;
      }
    }
  }
  return;
}


