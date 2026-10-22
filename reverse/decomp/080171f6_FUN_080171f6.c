
/* WARNING: Removing unreachable block (ram,0x08017278) */
/* WARNING: Removing unreachable block (ram,0x0801729e) */

void FUN_080171f6(float *param_1,int param_2,char param_3)

{
  float fVar1;
  
  if ((((param_1 != (float *)0x0) && (param_2 != 0)) &&
      (param_1[8] = *(float *)(param_2 + 0x10) * 6.0 * *param_1, param_3 == '\x01')) &&
     (fVar1 = *(float *)(param_2 + 0x20), *(char *)(param_2 + 0x18) == '\x01')) {
    if (*(char *)(param_1 + 3) == '\x01') {
      param_1[5] = *(float *)(param_2 + 0x24);
      param_1[4] = fVar1;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[4] = fVar1;
      param_1[5] = *(float *)(param_2 + 0x24);
      param_1[6] = 0.0;
    }
    *(undefined1 *)((int)param_1 + 0xd) = 1;
    param_1[7] = (param_1[5] - param_1[6]) * *param_1;
  }
  return;
}


