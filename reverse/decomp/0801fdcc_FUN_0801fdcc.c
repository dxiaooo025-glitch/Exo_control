
undefined4 FUN_0801fdcc(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  
  uVar1 = FUN_0801f70c(param_1,param_2,0,DAT_0802006c);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,*param_3);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  fVar2 = (float)VectorUnsignedToFloat(param_3[1],(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = FUN_0801f830(fVar2 * DAT_08020074,param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[2],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[3],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[6],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[7],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[8],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[9],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[10],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0xb],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0xd],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0xe],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0xf],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0x10],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0x15],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,*(undefined2 *)(param_3 + 0x16));
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0x17],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020070);
  uVar1 = FUN_0801f830(param_3[0x19],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f7d0(param_1,param_2,uVar1,(int)*(char *)(param_3 + 0x1b));
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f7d0(param_1,param_2,uVar1,(int)*(char *)((int)param_3 + 0x6d));
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,*(undefined1 *)((int)param_3 + 0x6e));
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,*(undefined1 *)((int)param_3 + 0x6f));
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f770(param_1,param_2,uVar1,param_3[0x1c]);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0x11],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0x12],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0x13],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0x14],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0x18],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0x1a],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[0xc],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[4],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020274);
  uVar1 = FUN_0801f830(param_3[5],param_1,param_2,uVar1);
  uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_08020278);
  return uVar1;
}


