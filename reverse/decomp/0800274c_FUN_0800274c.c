
undefined4 FUN_0800274c(int param_1,uint param_2,char param_3)

{
  int local_c;
  
  if (param_3 == '\x02') {
    if ((DAT_08002868 < param_2) && (param_2 < DAT_0800286c)) {
      local_c = 0xf;
    }
    else if ((param_2 < DAT_0800286c) || (DAT_08002870 <= param_2)) {
      if ((param_2 < DAT_08002870) || (DAT_08002874 <= param_2)) {
        if ((param_2 < DAT_08002874) || (DAT_08002878 < param_2)) {
          if ((DAT_08002878 < param_2) && (param_2 <= DAT_0800287c)) {
            local_c = 0xb;
          }
          else if ((DAT_0800287c < param_2) && (param_2 <= DAT_08002880)) {
            local_c = 10;
          }
          else if ((DAT_08002880 < param_2) && (param_2 < DAT_08002884)) {
            local_c = 9;
          }
          else if ((param_2 < DAT_08002884) || (DAT_08002888 < param_2)) {
            if ((DAT_08002888 < param_2) && (param_2 < DAT_0800288c)) {
              local_c = 7;
            }
            else {
              local_c = 6;
            }
          }
          else {
            local_c = 8;
          }
        }
        else {
          local_c = 0xc;
        }
      }
      else {
        local_c = 0xd;
      }
    }
    else {
      local_c = 0xe;
    }
  }
  else if (param_3 == '\0') {
    local_c = 9;
  }
  else {
    local_c = 9;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffc3ff;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | local_c << 10;
  return 0;
}


