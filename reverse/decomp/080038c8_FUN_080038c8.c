
undefined4 FUN_080038c8(int param_1,byte *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_2;
  if (param_2[1] == 1) {
    *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
         *(uint *)(param_1 + uVar1 * 0x20 + 0x900) & 0xffdfffff;
    if ((param_2[4] == 3) || (param_2[4] == 2)) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0x900) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0x900) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
         *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) & 0xffdfffff;
    if ((param_2[4] == 3) || (param_2[4] == 2)) {
      *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) =
           *(uint *)(param_1 + uVar1 * 0x20 + 0xb00) | 0x10000000;
    }
  }
  return 0;
}


