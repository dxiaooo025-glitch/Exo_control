
void FUN_08008ec4(int *param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = param_1[1] & 0xff;
  if ((uVar2 != 0) && (uVar2 < 9)) {
    if ((((*param_1 == DAT_08008f7c) ||
         (((*param_1 == DAT_08008f80 || (*param_1 == DAT_08008f84)) || (*param_1 == DAT_08008f88))))
        || (((*param_1 == DAT_08008f8c || (*param_1 == DAT_08008f90)) || (*param_1 == DAT_08008f94))
           )) || (*param_1 == DAT_08008f98)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      param_1[0x1b] = (DAT_08008f9c + uVar2) * 4;
      param_1[0x1c] = DAT_08008fa0;
    }
    else {
      param_1[0x1b] = (DAT_08008fa4 + uVar2) * 4;
      param_1[0x1c] = DAT_08008fa8;
    }
    param_1[0x1d] = 1 << (uVar2 - 1 & 0xff);
  }
  return;
}


