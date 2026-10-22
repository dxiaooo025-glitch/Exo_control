
undefined4 FUN_0801fc14(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0801f70c(param_1,param_2,0,DAT_0801fcfc);
    uVar1 = FUN_0801f770(param_1,param_2,uVar1,*param_3);
    uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_0801fd00);
    uVar1 = FUN_0801f770(param_1,param_2,uVar1,param_3[1]);
    uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_0801fd04);
    uVar1 = FUN_0801f770(param_1,param_2,uVar1,param_3[2]);
    uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_0801fd08);
    uVar1 = FUN_0801f770(param_1,param_2,uVar1,param_3[3]);
    uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_0801fd0c);
    uVar1 = FUN_0801f7d0(param_1,param_2,uVar1,param_3[4]);
    uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_0801fd10);
    uVar1 = FUN_0801f770(param_1,param_2,uVar1,param_3[5]);
    uVar1 = FUN_0801f70c(param_1,param_2,uVar1,DAT_0801fd14);
  }
  return uVar1;
}


