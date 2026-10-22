
void FUN_08008d90(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint local_c;
  
  if (((((*param_1 == DAT_08008e84) || (*param_1 == DAT_08008e88)) || (*param_1 == DAT_08008e8c)) ||
      ((*param_1 == DAT_08008e90 || (*param_1 == DAT_08008e94)))) ||
     ((*param_1 == DAT_08008e98 || ((*param_1 == DAT_08008e9c || (*param_1 == DAT_08008ea0)))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar2 = (uint)((ulonglong)DAT_08008ea4 * (ulonglong)((*param_1 & 0xff) - 8) >> 0x24);
    param_1[0x18] = (DAT_08008ea8 + uVar2) * 4;
    param_1[0x19] = DAT_08008eac;
    param_1[0x1a] = 1 << (uVar2 & 0x1f);
  }
  else {
    local_c = (uint)((ulonglong)DAT_08008eb0 * (ulonglong)((*param_1 & 0xff) - 0x10) >> 0x24);
    if ((*param_1 <= DAT_08008eb4) && (DAT_08008eb8 < *param_1)) {
      local_c = local_c + 8;
    }
    param_1[0x18] = (DAT_08008ebc + local_c) * 4;
    param_1[0x19] = DAT_08008ec0;
    param_1[0x1a] = 1 << (local_c & 0x1f);
  }
  return;
}


