
undefined4 FUN_080037ec(int param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_2;
  if (param_2[1] == 1) {
    if ((-1 < *(int *)(param_1 + uVar1 * 0x20 + 0x900)) && (uVar1 != 0)) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) & 0xbfffffff;
    }
    *(uint *)(param_1 + uVar1 * 0x20 + 0x900) = *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x200000
    ;
  }
  else {
    if ((-1 < *(int *)(param_1 + uVar1 * 0x20 + 0xb00)) && (uVar1 != 0)) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) & 0xbfffffff;
    }
    *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) = *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x200000
    ;
  }
  return 0;
}


