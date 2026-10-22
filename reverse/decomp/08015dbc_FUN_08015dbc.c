
uint FUN_08015dbc(uint param_1)

{
  if (param_1 < 0x14) {
    param_1 = 0x14;
  }
  else if (DAT_08015de8 < param_1) {
    param_1 = DAT_08015de8;
  }
  else {
  }
  return param_1;
}


