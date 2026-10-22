
void FUN_08015bd0(uint param_1,uint *param_2,int *param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  uint local_c;
  
  if (((param_2 != (uint *)0x0) && (param_3 != (int *)0x0)) && (param_4 != (undefined1 *)0x0)) {
    uVar1 = FUN_0801506c();
    local_c = param_1;
    if (uVar1 <= param_1) {
      local_c = 1;
    }
    *param_2 = local_c;
    iVar2 = FUN_0801507c(local_c);
    *param_3 = iVar2;
    *param_4 = *(undefined1 *)*param_3;
    *(undefined2 *)(param_4 + 0x20) = *(undefined2 *)(*param_3 + 2);
    *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(*param_3 + 4);
  }
  return;
}


