
void FUN_08014654(int param_1,short param_2)

{
  int iVar1;
  uint local_c;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    local_c = 0;
    while ((local_c < 10 && (iVar1 = FUN_08011a74(param_1,param_2), iVar1 != 0))) {
      FUN_080106da(1);
      local_c = local_c + 1;
    }
  }
  return;
}


