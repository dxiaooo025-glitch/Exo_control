
void FUN_08006274(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float local_c;
  
  uVar1 = DAT_08006504[10] & 3;
  uVar2 = DAT_08006504[10] >> 0x14 & 0x3f;
  fVar4 = (float)VectorUnsignedToFloat
                           ((DAT_08006504[0xb] >> 8 & 1) * (DAT_08006504[0x11] >> 3 & 0x1fff),
                            (byte)(in_fpscr >> 0x16) & 3);
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (uVar1 == 2) {
    fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = (float)VectorUnsignedToFloat(DAT_08006504[0x10] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
    local_c = (DAT_08006518 / fVar6) * (fVar3 + fVar4 / DAT_0800650c + 1.0);
    goto LAB_08006458;
  }
  if (uVar1 < 3) {
    if (uVar1 == 0) {
      if ((*DAT_08006504 & 0x20) == 0) {
        fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar3 = (float)VectorUnsignedToFloat
                                 (DAT_08006504[0x10] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
        local_c = (DAT_08006510 / fVar6) * (fVar3 + fVar4 / DAT_0800650c + 1.0);
      }
      else {
        fVar3 = (float)VectorUnsignedToFloat
                                 (DAT_08006508 >> (*DAT_08006504 >> 3 & 3),
                                  (byte)(in_fpscr >> 0x16) & 3);
        fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar6 = (float)VectorUnsignedToFloat
                                 (DAT_08006504[0x10] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
        local_c = (fVar3 / fVar5) * (fVar6 + fVar4 / DAT_0800650c + 1.0);
      }
      goto LAB_08006458;
    }
    if (uVar1 == 1) {
      fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar3 = (float)VectorUnsignedToFloat(DAT_08006504[0x10] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
      local_c = (DAT_08006514 / fVar6) * (fVar3 + fVar4 / DAT_0800650c + 1.0);
      goto LAB_08006458;
    }
  }
  fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorUnsignedToFloat(DAT_08006504[0x10] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
  local_c = (DAT_08006514 / fVar6) * (fVar3 + fVar4 / DAT_0800650c + 1.0);
LAB_08006458:
  fVar4 = (float)VectorUnsignedToFloat(DAT_08006504[0x10] >> 9 & 0x7f,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = VectorFloatToUnsigned(local_c / (fVar4 + 1.0),3);
  *param_1 = uVar7;
  fVar4 = (float)VectorUnsignedToFloat
                           (DAT_08006504[0x10] >> 0x10 & 0x7f,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = VectorFloatToUnsigned(local_c / (fVar4 + 1.0),3);
  param_1[1] = uVar7;
  fVar4 = (float)VectorUnsignedToFloat
                           (DAT_08006504[0x10] >> 0x18 & 0x7f,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = VectorFloatToUnsigned(local_c / (fVar4 + 1.0),3);
  param_1[2] = uVar7;
  return;
}


