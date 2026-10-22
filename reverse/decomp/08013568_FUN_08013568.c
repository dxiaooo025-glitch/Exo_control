
uint FUN_08013568(int *param_1,undefined1 *param_2,float *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  int local_4c;
  int local_44;
  ushort local_26;
  ushort local_24;
  ushort local_22;
  undefined4 local_20;
  ushort local_1a;
  float local_18;
  ushort local_12;
  short local_10;
  short local_e;
  uint local_c;
  
  FUN_08022f96(&local_50,0,0x28);
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_c = 0;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    local_c = 0;
  }
  else {
    while ((iVar4 = FUN_0800a91a(*param_1,0x40), iVar4 != 0 &&
           (iVar4 = FUN_0800a558(*param_1,0x40,&local_50,&local_70), iVar4 == 0))) {
      if (param_4 != (int *)0x0) {
        *param_4 = *param_4 + 1;
        param_4[8] = local_50;
        param_4[9] = local_44;
        *(char *)(param_4 + 10) = (char)local_70;
      }
      if ((local_4c == 0) && (local_50 == *(byte *)(param_1 + 1))) {
        if (param_4 != (int *)0x0) {
          param_4[1] = param_4[1] + 1;
        }
        if (((local_44 == 8) && ((char)local_70 == -0x5c)) && (param_2 != (undefined1 *)0x0)) {
          local_e = FUN_08012c74((int)&local_70 + 2);
          local_10 = FUN_08012c74(&local_6c);
          local_12 = FUN_08012c4a((int)&local_6c + 2);
          *param_2 = local_70._1_1_;
          fVar5 = (float)VectorSignedToFloat((int)local_e,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_2 + 4) = fVar5 * DAT_0801391c;
          fVar5 = (float)VectorSignedToFloat((int)local_10,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_2 + 0x10) = fVar5 * DAT_08013920;
          fVar5 = (float)VectorUnsignedToFloat((uint)local_12,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_2 + 0x14) = fVar5 * DAT_08013924;
          local_c = local_c | 1;
          if (param_4 != (int *)0x0) {
            param_4[3] = param_4[3] + 1;
          }
        }
        else if (((local_44 == 7) && ((char)local_70 == -0x50)) && (param_2 != (undefined1 *)0x0)) {
          local_18 = (float)FUN_08012cde((int)&local_70 + 2);
          uVar1 = in_fpscr & 0xfffffff;
          uVar2 = uVar1 | (uint)(local_18 < 0.0) << 0x1f | (uint)(local_18 == 0.0) << 0x1e;
          in_fpscr = uVar2 | (uint)NAN(local_18) << 0x1c;
          bVar3 = (byte)(uVar2 >> 0x18);
          if ((!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) &&
             (in_fpscr = uVar1, local_18 < DAT_08013928)) {
            *(float *)(param_2 + 8) = local_18;
            param_2[0xc] = 1;
          }
        }
        else if ((local_44 == 7) &&
                (((((char)local_70 == -0x5d || ((char)local_70 == -0x3e)) ||
                  ((char)local_70 == -0x3d)) && (param_2 != (undefined1 *)0x0)))) {
          local_1a = FUN_08012c4a((int)&local_70 + 1);
          local_20 = FUN_08012ca2((int)&local_70 + 3);
          *(ushort *)(param_2 + 0x1a) = local_1a;
          fVar5 = (float)VectorUnsignedToFloat((uint)local_1a,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_2 + 0x20) = fVar5 * DAT_08013924;
          *(undefined4 *)(param_2 + 0x1c) = local_20;
          fVar5 = (float)VectorSignedToFloat(local_20,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_2 + 0x24) = fVar5 * DAT_08013924;
          param_2[0x18] = 1;
          local_c = local_c | 4;
          if (param_4 != (int *)0x0) {
            param_4[4] = param_4[4] + 1;
          }
        }
        else if (((local_44 == 3) && ((char)local_70 == -0x4f)) && (param_2 != (undefined1 *)0x0)) {
          local_22 = FUN_08012c4a((int)&local_70 + 1);
          *(ushort *)(param_2 + 0x2a) = local_22;
          fVar5 = (float)VectorUnsignedToFloat((uint)local_22,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_2 + 0x2c) = fVar5 * DAT_08013924;
          param_2[0x28] = 1;
          local_c = local_c | 8;
          if (param_4 != (int *)0x0) {
            param_4[5] = param_4[5] + 1;
          }
        }
        else if (((local_44 == 8) && (((char)local_70 == -0x52 || ((char)local_70 == -0x31)))) &&
                (param_3 != (float *)0x0)) {
          local_24 = FUN_08012c4a((int)&local_70 + 1);
          local_26 = FUN_08012c4a((int)&local_70 + 3);
          fVar5 = (float)VectorUnsignedToFloat((uint)local_24,(byte)(in_fpscr >> 0x16) & 3);
          *param_3 = fVar5 * DAT_08013920;
          fVar5 = (float)VectorUnsignedToFloat((uint)local_26,(byte)(in_fpscr >> 0x16) & 3);
          param_3[1] = fVar5 * DAT_08013920;
          *(undefined1 *)(param_3 + 2) = local_6c._1_1_;
          *(undefined1 *)((int)param_3 + 9) = local_6c._2_1_;
          *(undefined1 *)((int)param_3 + 10) = local_6c._3_1_;
          local_c = local_c | 2;
          if (param_4 != (int *)0x0) {
            param_4[6] = param_4[6] + 1;
          }
        }
        else if (param_4 != (int *)0x0) {
          param_4[7] = param_4[7] + 1;
        }
      }
      else if (param_4 != (int *)0x0) {
        param_4[2] = param_4[2] + 1;
      }
    }
  }
  return local_c;
}


