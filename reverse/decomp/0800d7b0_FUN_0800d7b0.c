
void FUN_0800d7b0(undefined4 *param_1)

{
  bool bVar1;
  
  do {
    ExclusiveAccess((uint *)*param_1);
    bVar1 = (bool)hasExclusiveAccess((uint *)*param_1);
  } while (!bVar1);
  *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
  param_1[0x22] = 0x20;
  param_1[0x1e] = 0;
  FUN_0800c62c(param_1);
  return;
}


