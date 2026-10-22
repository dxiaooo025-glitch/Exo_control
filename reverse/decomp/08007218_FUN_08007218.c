
undefined4 FUN_08007218(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *local_c;
  
  iVar2 = FUN_080092a0();
  if (param_1 != (int *)0x0) {
    if (*(char *)((int)param_1 + 0x35) == '\x02') {
      if (((((*param_1 == DAT_0800742c) || (*param_1 == DAT_08007430)) || (*param_1 == DAT_08007434)
           ) || (((*param_1 == DAT_08007438 || (*param_1 == DAT_0800743c)) ||
                 ((*param_1 == DAT_08007440 ||
                  ((*param_1 == DAT_08007444 || (*param_1 == DAT_08007448)))))))) ||
         ((*param_1 == DAT_0800744c ||
          ((((((*param_1 == DAT_08007450 || (*param_1 == DAT_08007454)) ||
              (*param_1 == DAT_08007458)) ||
             ((*param_1 == DAT_0800745c || (*param_1 == DAT_08007460)))) ||
            (*param_1 == DAT_08007464)) || (*param_1 == DAT_08007468)))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffe1;
        *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffff7f;
        local_c = (uint *)*param_1;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
        local_c = (uint *)*param_1;
      }
      if (((((*param_1 == DAT_0800742c) || (*param_1 == DAT_08007430)) ||
           (((*param_1 == DAT_08007434 ||
             (((*param_1 == DAT_08007438 || (*param_1 == DAT_0800743c)) ||
              (*param_1 == DAT_08007440)))) ||
            (((*param_1 == DAT_08007444 || (*param_1 == DAT_08007448)) || (*param_1 == DAT_0800744c)
             ))))) || ((*param_1 == DAT_08007450 || (*param_1 == DAT_08007454)))) ||
         (((*param_1 == DAT_08007458 ||
           (((*param_1 == DAT_0800745c || (*param_1 == DAT_08007460)) || (*param_1 == DAT_08007464))
           )) || (((*param_1 == DAT_08007468 || (*param_1 == DAT_0800746c)) ||
                  ((*param_1 == DAT_08007470 ||
                   (((*param_1 == DAT_08007474 || (*param_1 == DAT_08007478)) ||
                    ((*param_1 == DAT_0800747c ||
                     (((*param_1 == DAT_08007480 || (*param_1 == DAT_08007484)) ||
                      (*param_1 == DAT_08007488)))))))))))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *(uint *)param_1[0x18] = *(uint *)param_1[0x18] & 0xfffffeff;
      }
      if ((((*param_1 == DAT_0800765c) || (*param_1 == DAT_08007660)) ||
          ((((*param_1 == DAT_08007664 || ((*param_1 == DAT_08007668 || (*param_1 == DAT_0800766c)))
             ) || (*param_1 == DAT_08007670)) ||
           ((((*param_1 == DAT_08007674 || (*param_1 == DAT_08007678)) || (*param_1 == DAT_0800767c)
             ) || ((*param_1 == DAT_08007680 || (*param_1 == DAT_08007684)))))))) ||
         (((*param_1 == DAT_08007688 || ((*param_1 == DAT_0800768c || (*param_1 == DAT_08007690))))
          || ((*param_1 == DAT_08007694 || (*param_1 == DAT_08007698)))))) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      do {
        if ((*local_c & 1) == 0) {
          if (((((*param_1 == DAT_0800765c) || (*param_1 == DAT_08007660)) ||
               (*param_1 == DAT_08007664)) ||
              ((((*param_1 == DAT_08007668 || (*param_1 == DAT_0800766c)) ||
                ((*param_1 == DAT_08007670 ||
                 ((*param_1 == DAT_08007674 || (*param_1 == DAT_08007678)))))) ||
               (*param_1 == DAT_0800767c)))) ||
             (((((*param_1 == DAT_08007680 || (*param_1 == DAT_08007684)) ||
                (*param_1 == DAT_08007688)) ||
               ((*param_1 == DAT_0800768c || (*param_1 == DAT_08007690)))) ||
              ((*param_1 == DAT_08007694 || (*param_1 == DAT_08007698)))))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            *(int *)(param_1[0x16] + 8) = 0x3f << (param_1[0x17] & 0x1fU);
          }
          else {
            *(int *)(param_1[0x16] + 4) = 1 << (param_1[0x17] & 0x1fU);
          }
          if (((((*param_1 == DAT_080077f4) || (*param_1 == DAT_080077f8)) ||
               ((*param_1 == DAT_080077fc ||
                ((((*param_1 == DAT_08007800 || (*param_1 == DAT_08007804)) ||
                  (*param_1 == DAT_08007808)) ||
                 ((*param_1 == DAT_0800780c || (*param_1 == DAT_08007810)))))))) ||
              ((*param_1 == DAT_08007814 ||
               ((*param_1 == DAT_08007818 || (*param_1 == DAT_0800781c)))))) ||
             (((((*param_1 == DAT_08007820 ||
                 (((*param_1 == DAT_08007824 || (*param_1 == DAT_08007828)) ||
                  (*param_1 == DAT_0800782c)))) ||
                (((*param_1 == DAT_08007830 || (*param_1 == DAT_08007834)) ||
                 (*param_1 == DAT_08007838)))) ||
               ((*param_1 == DAT_0800783c || (*param_1 == DAT_08007840)))) ||
              ((*param_1 == DAT_08007844 ||
               (((*param_1 == DAT_08007848 || (*param_1 == DAT_0800784c)) ||
                (*param_1 == DAT_08007850)))))))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if ((bVar1) && (*(int *)(param_1[0x19] + 4) = param_1[0x1a], param_1[0x1b] != 0)) {
            *(uint *)param_1[0x1b] = *(uint *)param_1[0x1b] & 0xfffffeff;
            *(int *)(param_1[0x1c] + 4) = param_1[0x1d];
          }
          *(undefined1 *)((int)param_1 + 0x35) = 1;
          *(undefined1 *)(param_1 + 0xd) = 0;
          return 0;
        }
        iVar3 = FUN_080092a0();
      } while ((uint)(iVar3 - iVar2) < 6);
      param_1[0x15] = 0x20;
      *(undefined1 *)((int)param_1 + 0x35) = 3;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      param_1[0x15] = 0x80;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
  }
  return 1;
}


