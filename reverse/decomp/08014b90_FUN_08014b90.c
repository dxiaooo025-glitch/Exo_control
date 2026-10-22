
undefined4 FUN_08014b90(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint local_c;
  
  if (((param_1 == 0) || (param_2 == 0)) || (*DAT_08014c2c == '\0')) {
    uVar1 = 0;
  }
  else {
    disableIRQinterrupts();
    if (*DAT_08014c2c == '\0') {
      enableIRQinterrupts();
      uVar1 = 0;
    }
    else {
      for (local_c = 0;
          (local_c < param_2 &&
          (*(undefined1 *)(local_c + param_1) = *(undefined1 *)(local_c + DAT_08014c30),
          *(char *)(local_c + DAT_08014c30) != '\0')); local_c = local_c + 1) {
        if (local_c == param_2 - 1) {
          *(undefined1 *)(local_c + param_1) = 0;
        }
      }
      *DAT_08014c2c = '\0';
      enableIRQinterrupts();
      uVar1 = 1;
    }
  }
  return uVar1;
}


