
int FUN_08010ae0(int param_1,uint param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + -4) = 0x1000000;
  *(uint *)(param_1 + -8) = param_2 & 0xfffffffe;
  *(undefined4 *)(param_1 + -0xc) = DAT_08010b44;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x24) = 0xfffffffd;
  return param_1 + -0x44;
}


