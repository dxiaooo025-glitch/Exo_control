
void FUN_08015220(int param_1,int param_2,undefined2 param_3)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    fVar1 = (float)FUN_08015118(param_3);
    FUN_0801dc64(fVar1 * DAT_08015294,param_1);
    FUN_0801dd10(DAT_080152a0,DAT_0801529c,DAT_08015298,param_1);
    uVar2 = FUN_080149c4(*(undefined4 *)(param_2 + 0x1c));
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  return;
}


