
undefined4 FUN_08014490(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  undefined4 local_c;
  
  if ((*(short *)(param_1 + 4) == 0) || (iVar1 = FUN_08014236(param_1,0,&local_20,6), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    local_c = FUN_08014208((uint)local_1f << 8 | (uint)local_20 << 0x10 | (uint)local_1e,0x18);
    uVar2 = FUN_08014208((uint)local_1c << 8 | (uint)local_1d << 0x10 | (uint)local_1b,0x18);
    fVar5 = (float)VectorSignedToFloat(local_c,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = fVar5 / *(float *)(param_1 + 0x20);
    fVar6 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = fVar6 / *(float *)(param_1 + 0x24);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 6),(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
    *param_3 = fVar11 * 0.5 + fVar7 * fVar6;
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x18),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x14),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x16),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1a),(byte)(in_fpscr >> 0x16) & 3
                                       );
    *param_2 = fVar10 + (fVar8 + (fVar3 + fVar7 * fVar5) * fVar5) * fVar5 + fVar9 * fVar6 +
               fVar6 * fVar5 * (fVar4 + fVar11 * fVar5);
    *param_2 = *param_2 * DAT_08014624;
    uVar2 = 0;
  }
  return uVar2;
}


