
bool FUN_0801568c(int param_1)

{
  bool bVar1;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x38) != '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = 3.0 <= (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x3c)) * 0.5;
  }
  return bVar1;
}


