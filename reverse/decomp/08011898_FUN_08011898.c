
undefined4 FUN_08011898(byte param_1)

{
  undefined4 uVar1;
  
  if ((((((param_1 < 0x30) || (0x39 < param_1)) && (param_1 != 0x61)) &&
       ((param_1 != 0x41 && (param_1 != 0x74)))) &&
      ((param_1 != 0x54 && ((param_1 != 0x7a && (param_1 != 0x5a)))))) &&
     ((param_1 != 0x78 && (param_1 != 0x58)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


