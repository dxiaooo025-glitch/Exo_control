
void FUN_080118f0(int param_1,uint param_2)

{
  uint local_18;
  uint local_c;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    local_18 = param_2;
    if (0x5f < param_2) {
      local_18 = 0x5f;
    }
    *DAT_08011964 = 0;
    for (local_c = 0; local_c < local_18; local_c = local_c + 1) {
      *(undefined1 *)(local_c + DAT_08011968) = *(undefined1 *)(local_c + param_1);
    }
    *(undefined1 *)(local_18 + DAT_08011968) = 0;
    *DAT_0801196c = *DAT_0801196c + 1;
    *DAT_08011964 = 1;
  }
  return;
}


