
undefined4 FUN_08014a68(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  float local_14;
  
  local_14 = (float)FUN_08014a14();
  fVar1 = (float)FUN_08014788(param_2);
  local_14 = local_14 - fVar1;
  if (local_14 < 0.0) {
    local_14 = 0.0;
  }
  uVar2 = FUN_08014804(param_1,DAT_08014acc,local_14);
  return uVar2;
}


