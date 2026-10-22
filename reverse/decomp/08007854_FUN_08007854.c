
undefined4 FUN_08007854(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar2 = 1;
  }
  else if (*(char *)((int)param_1 + 0x35) == '\x02') {
    if ((((((*param_1 == DAT_080079f4) || (*param_1 == DAT_080079f8)) || (*param_1 == DAT_080079fc))
         || (((*param_1 == DAT_08007a00 || (*param_1 == DAT_08007a04)) ||
             ((*param_1 == DAT_08007a08 ||
              ((*param_1 == DAT_08007a0c || (*param_1 == DAT_08007a10)))))))) ||
        (*param_1 == DAT_08007a14)) ||
       (((((*param_1 == DAT_08007a18 || (*param_1 == DAT_08007a1c)) || (*param_1 == DAT_08007a20))
         || ((*param_1 == DAT_08007a24 || (*param_1 == DAT_08007a28)))) ||
        ((*param_1 == DAT_08007a2c || (*param_1 == DAT_08007a30)))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(undefined1 *)((int)param_1 + 0x35) = 4;
      if (((((*param_1 == DAT_080079f4) || (*param_1 == DAT_080079f8)) || (*param_1 == DAT_080079fc)
           ) || ((*param_1 == DAT_08007a00 || (*param_1 == DAT_08007a04)))) ||
         ((((*param_1 == DAT_08007a08 || ((*param_1 == DAT_08007a0c || (*param_1 == DAT_08007a10))))
           || (*param_1 == DAT_08007a14)) ||
          ((((((*param_1 == DAT_08007a18 || (*param_1 == DAT_08007a1c)) ||
              (*param_1 == DAT_08007a20)) ||
             ((*param_1 == DAT_08007a24 || (*param_1 == DAT_08007a28)))) ||
            (*param_1 == DAT_08007a2c)) || (*param_1 == DAT_08007a30)))))) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
    }
    else {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
      if ((((*param_1 == DAT_08007bfc) || (*param_1 == DAT_08007c00)) ||
          ((*param_1 == DAT_08007c04 ||
           (((*param_1 == DAT_08007c08 || (*param_1 == DAT_08007c0c)) || (*param_1 == DAT_08007c10))
           )))) || (((((*param_1 == DAT_08007c14 || (*param_1 == DAT_08007c18)) ||
                      (*param_1 == DAT_08007c1c)) ||
                     ((*param_1 == DAT_08007c20 || (*param_1 == DAT_08007c24)))) ||
                    (((*param_1 == DAT_08007c28 ||
                      (((*param_1 == DAT_08007c2c || (*param_1 == DAT_08007c30)) ||
                       (*param_1 == DAT_08007c34)))) || (*param_1 == DAT_08007c38)))))) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      else {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
      }
      if ((((*param_1 == DAT_08007bfc) || (*param_1 == DAT_08007c00)) ||
          ((*param_1 == DAT_08007c04 || ((*param_1 == DAT_08007c08 || (*param_1 == DAT_08007c0c)))))
          ) || (((((*param_1 == DAT_08007c10 ||
                   ((((*param_1 == DAT_08007c14 || (*param_1 == DAT_08007c18)) ||
                     (*param_1 == DAT_08007c1c)) ||
                    ((*param_1 == DAT_08007c20 || (*param_1 == DAT_08007c24)))))) ||
                  ((*param_1 == DAT_08007c28 ||
                   ((*param_1 == DAT_08007c2c || (*param_1 == DAT_08007c30)))))) ||
                 ((*param_1 == DAT_08007c34 ||
                  (((*param_1 == DAT_08007c38 || (*param_1 == DAT_08007c3c)) ||
                   (*param_1 == DAT_08007c40)))))) ||
                ((((*param_1 == DAT_08007c44 || (*param_1 == DAT_08007c48)) ||
                  ((*param_1 == DAT_08007c4c ||
                   ((*param_1 == DAT_08007c50 || (*param_1 == DAT_08007c54)))))) ||
                 (*param_1 == DAT_08007c58)))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *(uint *)param_1[0x18] = *(uint *)param_1[0x18] & 0xfffffeff;
        *(int *)(param_1[0x16] + 4) = 1 << (param_1[0x17] & 0x1fU);
        *(int *)(param_1[0x19] + 4) = param_1[0x1a];
        if (param_1[0x1b] != 0) {
          *(uint *)param_1[0x1b] = *(uint *)param_1[0x1b] & 0xfffffeff;
          *(int *)(param_1[0x1c] + 4) = param_1[0x1d];
        }
      }
      *(undefined1 *)((int)param_1 + 0x35) = 1;
      *(undefined1 *)(param_1 + 0xd) = 0;
      if (param_1[0x14] != 0) {
        (*(code *)param_1[0x14])(param_1);
      }
    }
    uVar2 = 0;
  }
  else {
    param_1[0x15] = 0x80;
    uVar2 = 1;
  }
  return uVar2;
}


