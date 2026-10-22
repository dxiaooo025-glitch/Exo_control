
uint FUN_08004830(void)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_10;
  float local_c;
  
  switch(DAT_08004b04[4] & 0x38) {
  case 0:
    if ((*DAT_08004b04 & 0x20) == 0) {
      local_10 = DAT_08004b08;
    }
    else {
      local_10 = DAT_08004b08 >> (*DAT_08004b04 >> 3 & 3);
    }
    break;
  case 8:
    local_10 = DAT_08004b0c;
    break;
  case 0x10:
    local_10 = DAT_08004b10;
    break;
  case 0x18:
    uVar1 = DAT_08004b04[10] & 3;
    uVar2 = DAT_08004b04[10] >> 4 & 0x3f;
    fVar4 = (float)VectorUnsignedToFloat
                             ((DAT_08004b04[0xb] & 1) * (DAT_08004b04[0xd] >> 3 & 0x1fff),
                              (byte)(in_fpscr >> 0x16) & 3);
    if (uVar2 == 0) {
      return 0;
    }
    if (uVar1 == 2) {
      fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar3 = (float)VectorUnsignedToFloat(DAT_08004b04[0xc] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
      local_c = (DAT_08004b20 / fVar6) * (fVar3 + fVar4 / DAT_08004b14 + 1.0);
    }
    else if (uVar1 < 3) {
      if (uVar1 == 0) {
        if ((*DAT_08004b04 & 0x20) == 0) {
          fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
          fVar3 = (float)VectorUnsignedToFloat
                                   (DAT_08004b04[0xc] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
          local_c = (DAT_08004b18 / fVar6) * (fVar3 + fVar4 / DAT_08004b14 + 1.0);
        }
        else {
          fVar3 = (float)VectorUnsignedToFloat
                                   (DAT_08004b08 >> (*DAT_08004b04 >> 3 & 3),
                                    (byte)(in_fpscr >> 0x16) & 3);
          fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
          fVar6 = (float)VectorUnsignedToFloat
                                   (DAT_08004b04[0xc] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
          local_c = (fVar3 / fVar5) * (fVar6 + fVar4 / DAT_08004b14 + 1.0);
        }
      }
      else {
        if (uVar1 != 1) goto LAB_08004a78;
        fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar3 = (float)VectorUnsignedToFloat(DAT_08004b04[0xc] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3)
        ;
        local_c = (DAT_08004b1c / fVar6) * (fVar3 + fVar4 / DAT_08004b14 + 1.0);
      }
    }
    else {
LAB_08004a78:
      fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      fVar3 = (float)VectorUnsignedToFloat(DAT_08004b04[0xc] & 0x1ff,(byte)(in_fpscr >> 0x16) & 3);
      local_c = (DAT_08004b1c / fVar6) * (fVar3 + fVar4 / DAT_08004b14 + 1.0);
    }
    fVar4 = (float)VectorUnsignedToFloat
                             ((DAT_08004b04[0xc] >> 9 & 0x7f) + 1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = VectorFloatToUnsigned(local_c / fVar4,3);
    break;
  default:
    local_10 = DAT_08004b0c;
  }
  return local_10;
}


