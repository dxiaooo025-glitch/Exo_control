
undefined4 FUN_0801340c(float param_1,int *param_2)

{
  undefined4 uVar1;
  float local_10;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    uVar1 = 1;
  }
  else {
    local_10 = param_1;
    if (param_1 < 0.0) {
      local_10 = -param_1;
    }
    if (5.0 < local_10) {
      local_10 = DAT_0801347c;
    }
    uVar1 = FUN_08012de0(local_10,DAT_08013480);
    uVar1 = FUN_08013012(param_2,0xb3,uVar1);
  }
  return uVar1;
}


