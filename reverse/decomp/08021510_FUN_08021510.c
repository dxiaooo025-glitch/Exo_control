
/* WARNING: Removing unreachable block (ram,0x08021b5a) */

float FUN_08021510(float param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  uint in_fpscr;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr7;
  float fVar4;
  float fVar5;
  float in_s15;
  uint uVar6;
  
  fVar3 = ABS(param_1);
  if ((uint)DAT_08021740 < (uint)fVar3) {
    if (0x7f800000 < (uint)fVar3) {
      return param_1 + param_1;
    }
    if (fVar3 == INFINITY) {
      coprocessor_function2(10,0,1,in_cr0,in_cr0,in_cr7);
      return param_1;
    }
    if (((uint)param_1 & 0x80000000) == 0) {
      if ((uint)DAT_08021744 < (uint)fVar3) {
        fVar3 = DAT_08021b80 * DAT_08021b80;
        puVar1 = (undefined4 *)FUN_08023058();
        *puVar1 = 0x22;
        return fVar3;
      }
      fVar3 = 0.5;
    }
    else {
      in_fpscr = in_fpscr & 0xfffffff;
      if (param_1 + DAT_08021774 < 0.0) {
        return -1.0;
      }
      fVar3 = -0.5;
    }
LAB_08021548:
    uVar6 = (uint)(fVar3 + param_1 * DAT_08021748);
    fVar4 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    fVar3 = param_1 + -fVar4 * DAT_0802174c;
    in_s15 = fVar4 * DAT_08021750;
  }
  else {
    if ((uint)fVar3 <= (uint)DAT_08021754) {
      if ((uint)fVar3 < 0x33000000) {
        return param_1 - ((param_1 + DAT_08021778) - (param_1 + DAT_08021778));
      }
      uVar6 = 0;
      goto LAB_0802158a;
    }
    if ((uint)DAT_0802176c < (uint)fVar3) {
      fVar3 = -0.5;
      coprocessor_function2(10,4,5,in_cr7,in_cr6,in_cr7);
      goto LAB_08021548;
    }
    if (((uint)param_1 & 0x80000000) == 0) {
      fVar3 = param_1 - DAT_0802174c;
      uVar6 = 1;
      in_s15 = DAT_08021750;
    }
    else {
      fVar3 = param_1 + DAT_0802174c;
      uVar6 = 0xffffffff;
      in_s15 = DAT_08021770;
    }
  }
  param_1 = fVar3 - in_s15;
  in_s15 = (fVar3 - param_1) - in_s15;
LAB_0802158a:
  fVar5 = param_1 * param_1 * 0.5;
  fVar4 = (DAT_08021764 +
          (DAT_08021768 + (DAT_08021760 + (DAT_0802175c + fVar5 * DAT_08021758) * fVar5) * fVar5) *
          fVar5) * fVar5 + 1.0;
  fVar3 = -(param_1 * 0.5) * fVar4 + 3.0;
  fVar3 = ((fVar4 - fVar3) / (-param_1 * fVar3 + 6.0)) * fVar5;
  if (uVar6 == 0) {
    return param_1 - (-fVar5 + param_1 * fVar3);
  }
  fVar5 = (-in_s15 + (fVar3 - in_s15) * param_1) - fVar5;
  if (uVar6 == 0xffffffff) {
    return (param_1 - fVar5) * 0.5 + -0.5;
  }
  if (uVar6 == 1) {
    if (-0.25 <= param_1) {
      return (param_1 - fVar5) * 2.0 + 1.0;
    }
    return (fVar5 - (param_1 + 0.5)) * -2.0;
  }
  iVar2 = uVar6 * 0x800000;
  if (0x39 < uVar6 + 1) {
    return (float)(iVar2 + (int)(1.0 - (fVar5 - param_1))) - 1.0;
  }
  if ((int)uVar6 < 0x17) {
    return (float)(iVar2 + (int)((float)(0x3f800000 - (0x1000000 >> (uVar6 & 0xff))) -
                                (fVar5 - param_1)));
  }
  return (float)((int)((param_1 - (fVar5 + (float)((0x7f - uVar6) * 0x800000))) + 1.0) + iVar2);
}


