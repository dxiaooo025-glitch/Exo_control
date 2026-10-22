
void FUN_080158a8(undefined4 param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_18;
  uint local_14;
  
  if (((param_2 != 0) && (param_3 != (float *)0x0)) && (param_4 != (float *)0x0)) {
    local_14 = (uint)*(ushort *)(param_2 + 0x54);
    local_18 = (uint)*(ushort *)(param_2 + 0x52);
    if (0x3f < local_14) {
      local_14 = 0;
    }
    if (0x3f < local_18) {
      local_18 = 0x3f;
    }
    fVar2 = (float)FUN_08014804(*(undefined4 *)(param_2 + 0x60),DAT_08015bc8,0x3f800000);
    fVar3 = (float)FUN_080149c4(param_3[7]);
    fVar3 = fVar3 - *(float *)(param_2 + 100);
    fVar4 = (float)FUN_080149c4(param_4[7]);
    fVar7 = -(fVar4 - *(float *)(param_2 + 0x68));
    *(float *)(param_2 + 0x74) = *(float *)(param_2 + 0x74) * fVar2 + (1.0 - fVar2) * fVar3;
    *(float *)(param_2 + 0x78) = *(float *)(param_2 + 0x78) * fVar2 + (1.0 - fVar2) * fVar7;
    *(undefined4 *)((local_14 + 0x1e) * 4 + param_2 + 4) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)((local_14 + 0x5e) * 4 + param_2 + 4) = *(undefined4 *)(param_2 + 0x78);
    uVar1 = local_14 - local_18 & 0x3f;
    fVar2 = *(float *)((uVar1 + 0x1e) * 4 + param_2 + 4);
    fVar4 = *(float *)((uVar1 + 0x5e) * 4 + param_2 + 4);
    fVar8 = *(float *)(param_2 + 0x58);
    fVar5 = (float)FUN_08021780(fVar4);
    fVar6 = (float)FUN_08021780(fVar2);
    fVar8 = fVar8 * (fVar5 - fVar6);
    if (param_5 != (float *)0x0) {
      *param_5 = fVar3;
      param_5[1] = fVar7;
      param_5[2] = *(float *)(param_2 + 0x74);
      param_5[3] = *(float *)(param_2 + 0x78);
      param_5[4] = fVar2;
      param_5[5] = fVar4;
      fVar3 = (float)FUN_08021780(fVar4);
      fVar5 = (float)FUN_08021780(fVar2);
      param_5[6] = fVar3 - fVar5;
      param_5[7] = fVar8;
      fVar3 = (float)FUN_08014804(param_1,DAT_08015bcc,0x3f800000);
      param_5[8] = fVar3;
    }
    fVar5 = *(float *)(param_2 + 0x5c);
    fVar3 = (float)FUN_08014804(param_1,DAT_08015bcc,0x3f800000);
    fVar3 = fVar5 * fVar8 * fVar3;
    fVar2 = (float)FUN_080149ec(*(float *)(param_2 + 100) + fVar2);
    param_3[9] = fVar2;
    fVar2 = (float)FUN_080149ec(*(float *)(param_2 + 0x68) - fVar4);
    param_4[9] = fVar2;
    param_3[10] = 0.0;
    param_4[10] = 0.0;
    param_3[0xb] = param_3[9] - param_3[7];
    param_4[0xb] = param_4[9] - param_4[7];
    fVar2 = (float)FUN_08014858(*param_3 * fVar3 * param_3[1],*(undefined4 *)(param_2 + 0x18));
    param_3[0xd] = fVar2;
    fVar2 = (float)FUN_08014858(*param_4 * fVar3 * param_4[1],*(undefined4 *)(param_2 + 0x18));
    param_4[0xd] = fVar2;
    *(ushort *)(param_2 + 0x54) = (short)local_14 + 1U & 0x3f;
  }
  return;
}


