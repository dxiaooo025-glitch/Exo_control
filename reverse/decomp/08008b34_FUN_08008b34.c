
uint FUN_08008b34(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  
  if (((((*param_1 == DAT_08008c4c) || (*param_1 == DAT_08008c50)) || (*param_1 == DAT_08008c54)) ||
      (((*param_1 == DAT_08008c58 || (*param_1 == DAT_08008c5c)) ||
       ((*param_1 == DAT_08008c60 || ((*param_1 == DAT_08008c64 || (*param_1 == DAT_08008c68))))))))
     || ((*param_1 == DAT_08008c6c ||
         (((((*param_1 == DAT_08008c70 || (*param_1 == DAT_08008c74)) || (*param_1 == DAT_08008c78))
           || ((*param_1 == DAT_08008c7c || (*param_1 == DAT_08008c80)))) ||
          ((*param_1 == DAT_08008c84 || (*param_1 == DAT_08008c88)))))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar2 = (uint)((ulonglong)DAT_08008c8c * (ulonglong)((*param_1 & 0xff) - 0x10) >> 0x24);
    param_1[0x17] = (uint)*(byte *)(DAT_08008c90 + (uVar2 & 7));
    if (uVar2 < 4) {
      param_1[0x16] = DAT_08008c94 & *param_1;
    }
    else {
      param_1[0x16] = (DAT_08008c94 & *param_1) + 4;
    }
  }
  else {
    param_1[0x16] = *param_1 & 0xffffff00;
  }
  return param_1[0x16];
}


