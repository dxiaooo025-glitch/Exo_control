
void FUN_08007ce0(int *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_24;
  
  local_24 = 0;
  uVar2 = *DAT_08007e8c;
  uVar1 = (ulonglong)DAT_08007e90;
  puVar3 = (uint *)param_1[0x16];
  puVar4 = (uint *)param_1[0x16];
  uVar5 = *puVar3;
  uVar6 = *puVar4;
  if (((((*param_1 == DAT_08007e94) || (*param_1 == DAT_08007e98)) || (*param_1 == DAT_08007e9c)) ||
      (((*param_1 == DAT_08007ea0 || (*param_1 == DAT_08007ea4)) ||
       ((*param_1 == DAT_08007ea8 || ((*param_1 == DAT_08007eac || (*param_1 == DAT_08007eb0))))))))
     || (((*param_1 == DAT_08007eb4 ||
          (((*param_1 == DAT_08007eb8 || (*param_1 == DAT_08007ebc)) || (*param_1 == DAT_08007ec0)))
          ) || (((*param_1 == DAT_08007ec4 || (*param_1 == DAT_08007ec8)) ||
                ((*param_1 == DAT_08007ecc || (*param_1 == DAT_08007ed0)))))))) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    if ((uVar5 & 8 << (param_1[0x17] & 0x1fU)) != 0) {
      if (((((((*param_1 == DAT_08007e94) || (*param_1 == DAT_08007e98)) ||
             (*param_1 == DAT_08007e9c)) ||
            ((*param_1 == DAT_08007ea0 || (*param_1 == DAT_08007ea4)))) ||
           ((*param_1 == DAT_08007ea8 || ((*param_1 == DAT_08007eac || (*param_1 == DAT_08007eb0))))
           )) || ((*param_1 == DAT_08007eb4 ||
                  (((*param_1 == DAT_08007eb8 || (*param_1 == DAT_08007ebc)) ||
                   (*param_1 == DAT_08007ec0)))))) ||
         (((*param_1 == DAT_08007ec4 || (*param_1 == DAT_08007ec8)) ||
          ((*param_1 == DAT_08007ecc || (*param_1 == DAT_08007ed0)))))) {
        uVar6 = *(uint *)*param_1 & 4;
      }
      else {
        uVar6 = *(uint *)*param_1 & 8;
      }
      if (uVar6 != 0) {
        *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
        puVar3[2] = 8 << (param_1[0x17] & 0x1fU);
        param_1[0x15] = param_1[0x15] | 1;
      }
    }
    if ((uVar5 >> (param_1[0x17] & 0x1fU) & 1) != 0) {
      if ((((*param_1 == DAT_080080d8) || (*param_1 == DAT_080080dc)) ||
          ((*param_1 == DAT_080080e0 ||
           (((*param_1 == DAT_080080e4 || (*param_1 == DAT_080080e8)) || (*param_1 == DAT_080080ec))
           )))) || (((((*param_1 == DAT_080080f0 || (*param_1 == DAT_080080f4)) ||
                      (*param_1 == DAT_080080f8)) ||
                     ((*param_1 == DAT_080080fc || (*param_1 == DAT_08008100)))) ||
                    ((*param_1 == DAT_08008104 ||
                     ((((*param_1 == DAT_08008108 || (*param_1 == DAT_0800810c)) ||
                       (*param_1 == DAT_08008110)) || (*param_1 == DAT_08008114)))))))) {
        bVar7 = (*(uint *)(*param_1 + 0x14) & 0x80) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        puVar3[2] = 1 << (param_1[0x17] & 0x1fU);
        param_1[0x15] = param_1[0x15] | 2;
      }
    }
    if ((uVar5 & 4 << (param_1[0x17] & 0x1fU)) != 0) {
      if ((((*param_1 == DAT_080080d8) || (*param_1 == DAT_080080dc)) ||
          ((((*param_1 == DAT_080080e0 || ((*param_1 == DAT_080080e4 || (*param_1 == DAT_080080e8)))
             ) || (*param_1 == DAT_080080ec)) ||
           (((((*param_1 == DAT_080080f0 || (*param_1 == DAT_080080f4)) ||
              (*param_1 == DAT_080080f8)) ||
             (((*param_1 == DAT_080080fc || (*param_1 == DAT_08008100)) ||
              ((*param_1 == DAT_08008104 ||
               ((*param_1 == DAT_08008108 || (*param_1 == DAT_0800810c)))))))) ||
            (*param_1 == DAT_08008110)))))) || (*param_1 == DAT_08008114)) {
        bVar7 = (*(uint *)*param_1 & 2) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        puVar3[2] = 4 << (param_1[0x17] & 0x1fU);
        param_1[0x15] = param_1[0x15] | 4;
      }
    }
    if ((uVar5 & 0x10 << (param_1[0x17] & 0x1fU)) != 0) {
      if (((((*param_1 == DAT_08008370) || (*param_1 == DAT_08008374)) || (*param_1 == DAT_08008378)
           ) || ((*param_1 == DAT_0800837c || (*param_1 == DAT_08008380)))) ||
         (((*param_1 == DAT_08008384 || ((*param_1 == DAT_08008388 || (*param_1 == DAT_0800838c))))
          || ((*param_1 == DAT_08008390 ||
              ((((((*param_1 == DAT_08008394 || (*param_1 == DAT_08008398)) ||
                  (*param_1 == DAT_0800839c)) ||
                 ((*param_1 == DAT_080083a0 || (*param_1 == DAT_080083a4)))) ||
                (*param_1 == DAT_080083a8)) || (*param_1 == DAT_080083ac)))))))) {
        uVar6 = *(uint *)*param_1 & 8;
      }
      else {
        uVar6 = *(uint *)*param_1 & 4;
      }
      if (uVar6 != 0) {
        puVar3[2] = 0x10 << (param_1[0x17] & 0x1fU);
        if ((*(uint *)*param_1 & 0x40000) == 0) {
          if ((*(uint *)*param_1 & 0x100) == 0) {
            *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff7;
          }
          if (param_1[0x10] != 0) {
            (*(code *)param_1[0x10])(param_1);
          }
        }
        else if ((*(uint *)*param_1 & 0x80000) == 0) {
          if (param_1[0x10] != 0) {
            (*(code *)param_1[0x10])(param_1);
          }
        }
        else if (param_1[0x12] != 0) {
          (*(code *)param_1[0x12])(param_1);
        }
      }
    }
    if ((uVar5 & 0x20 << (param_1[0x17] & 0x1fU)) != 0) {
      if (((((*param_1 == DAT_08008370) || (*param_1 == DAT_08008374)) ||
           ((*param_1 == DAT_08008378 ||
            (((*param_1 == DAT_0800837c || (*param_1 == DAT_08008380)) || (*param_1 == DAT_08008384)
             ))))) ||
          (((*param_1 == DAT_08008388 || (*param_1 == DAT_0800838c)) ||
           ((*param_1 == DAT_08008390 ||
            (((*param_1 == DAT_08008394 || (*param_1 == DAT_08008398)) ||
             ((*param_1 == DAT_0800839c ||
              (((*param_1 == DAT_080083a0 || (*param_1 == DAT_080083a4)) ||
               (*param_1 == DAT_080083a8)))))))))))) || (*param_1 == DAT_080083ac)) {
        uVar5 = *(uint *)*param_1 & 0x10;
      }
      else {
        uVar5 = *(uint *)*param_1 & 2;
      }
      if (uVar5 != 0) {
        puVar3[2] = 0x20 << (param_1[0x17] & 0x1fU);
        if (*(char *)((int)param_1 + 0x35) == '\x04') {
          *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffe9;
          *(uint *)(*param_1 + 0x14) = *(uint *)(*param_1 + 0x14) & 0xffffff7f;
          if ((param_1[0x10] != 0) || (param_1[0x12] != 0)) {
            *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff7;
          }
          puVar3[2] = 0x3f << (param_1[0x17] & 0x1fU);
          *(undefined1 *)((int)param_1 + 0x35) = 1;
          *(undefined1 *)(param_1 + 0xd) = 0;
          if (param_1[0x14] == 0) {
            return;
          }
          (*(code *)param_1[0x14])(param_1);
          return;
        }
        if ((*(uint *)*param_1 & 0x40000) == 0) {
          if ((*(uint *)*param_1 & 0x100) == 0) {
            *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffef;
            *(undefined1 *)((int)param_1 + 0x35) = 1;
            *(undefined1 *)(param_1 + 0xd) = 0;
          }
          if (param_1[0xf] != 0) {
            (*(code *)param_1[0xf])(param_1);
          }
        }
        else if ((*(uint *)*param_1 & 0x80000) == 0) {
          if (param_1[0x11] != 0) {
            (*(code *)param_1[0x11])(param_1);
          }
        }
        else if (param_1[0xf] != 0) {
          (*(code *)param_1[0xf])(param_1);
        }
      }
    }
    if (param_1[0x15] != 0) {
      if ((param_1[0x15] & 1U) != 0) {
        *(undefined1 *)((int)param_1 + 0x35) = 4;
        if (((((*param_1 == DAT_080086e8) || (*param_1 == DAT_080086ec)) ||
             ((*param_1 == DAT_080086f0 ||
              ((((*param_1 == DAT_080086f4 || (*param_1 == DAT_080086f8)) ||
                (*param_1 == DAT_080086fc)) ||
               ((*param_1 == DAT_08008700 || (*param_1 == DAT_08008704)))))))) ||
            (*param_1 == DAT_08008708)) ||
           ((((*param_1 == DAT_0800870c || (*param_1 == DAT_08008710)) ||
             ((*param_1 == DAT_08008714 ||
              (((*param_1 == DAT_08008718 || (*param_1 == DAT_0800871c)) ||
               (*param_1 == DAT_08008720)))))) || (*param_1 == DAT_08008724)))) {
          *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
        }
        else {
          *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffe;
        }
        do {
          local_24 = local_24 + 1;
          if ((uint)(uVar1 * uVar2 >> 0x2a) < local_24) break;
        } while ((*(uint *)*param_1 & 1) != 0);
        if ((*(uint *)*param_1 & 1) == 0) {
          *(undefined1 *)((int)param_1 + 0x35) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x35) = 3;
        }
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      if (param_1[0x13] != 0) {
        (*(code *)param_1[0x13])(param_1);
      }
    }
  }
  else {
    if (((*param_1 == DAT_08008728) || (*param_1 == DAT_0800872c)) ||
       ((*param_1 == DAT_08008730 ||
        ((((*param_1 == DAT_08008734 || (*param_1 == DAT_08008738)) || (*param_1 == DAT_0800873c))
         || ((*param_1 == DAT_08008740 || (*param_1 == DAT_08008744)))))))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      uVar2 = *(uint *)*param_1;
      if (((uVar6 & 4 << (param_1[0x17] & 0x1fU)) == 0) || ((uVar2 & 4) == 0)) {
        if (((uVar6 & 2 << (param_1[0x17] & 0x1fU)) == 0) || ((uVar2 & 2) == 0)) {
          if (((uVar6 & 8 << (param_1[0x17] & 0x1fU)) != 0) && ((uVar2 & 8) != 0)) {
            if ((((*param_1 == DAT_08008af4) ||
                 ((((*param_1 == DAT_08008af8 || (*param_1 == DAT_08008afc)) ||
                   (*param_1 == DAT_08008b00)) ||
                  (((*param_1 == DAT_08008b04 || (*param_1 == DAT_08008b08)) ||
                   ((*param_1 == DAT_08008b0c ||
                    ((*param_1 == DAT_08008b10 || (*param_1 == DAT_08008b14)))))))))) ||
                ((*param_1 == DAT_08008b18 ||
                 (((*param_1 == DAT_08008b1c || (*param_1 == DAT_08008b20)) ||
                  (*param_1 == DAT_08008b24)))))) ||
               (((*param_1 == DAT_08008b28 || (*param_1 == DAT_08008b2c)) ||
                (*param_1 == DAT_08008b30)))) {
              *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffe3;
            }
            else {
              *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff1;
            }
            puVar4[1] = 1 << (param_1[0x17] & 0x1fU);
            param_1[0x15] = 1;
            *(undefined1 *)((int)param_1 + 0x35) = 1;
            *(undefined1 *)(param_1 + 0xd) = 0;
            if (param_1[0x13] != 0) {
              (*(code *)param_1[0x13])(param_1);
            }
          }
        }
        else {
          puVar4[1] = 2 << (param_1[0x17] & 0x1fU);
          if ((uVar2 & 0x8000) == 0) {
            if ((uVar2 & 0x20) == 0) {
              if (((((*param_1 == DAT_08008954) || (*param_1 == DAT_08008958)) ||
                   ((*param_1 == DAT_0800895c ||
                    (((((*param_1 == DAT_08008960 || (*param_1 == DAT_08008964)) ||
                       (*param_1 == DAT_08008968)) ||
                      ((*param_1 == DAT_0800896c || (*param_1 == DAT_08008970)))) ||
                     (*param_1 == DAT_08008974)))))) ||
                  ((*param_1 == DAT_08008978 || (*param_1 == DAT_0800897c)))) ||
                 ((*param_1 == DAT_08008980 ||
                  ((((*param_1 == DAT_08008984 || (*param_1 == DAT_08008988)) ||
                    (*param_1 == DAT_0800898c)) || (*param_1 == DAT_08008990)))))) {
                *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffeb;
              }
              else {
                *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff5;
              }
              *(undefined1 *)((int)param_1 + 0x35) = 1;
              *(undefined1 *)(param_1 + 0xd) = 0;
            }
            if (param_1[0xf] != 0) {
              (*(code *)param_1[0xf])(param_1);
            }
          }
          else if ((uVar2 & 0x10000) == 0) {
            if (param_1[0x11] != 0) {
              (*(code *)param_1[0x11])(param_1);
            }
          }
          else if (param_1[0xf] != 0) {
            (*(code *)param_1[0xf])(param_1);
          }
        }
      }
      else {
        puVar4[1] = 4 << (param_1[0x17] & 0x1fU);
        if ((uVar2 & 0x8000) == 0) {
          if ((uVar2 & 0x20) == 0) {
            if (((((((*param_1 == DAT_08008954) || (*param_1 == DAT_08008958)) ||
                   ((*param_1 == DAT_0800895c ||
                    ((*param_1 == DAT_08008960 || (*param_1 == DAT_08008964)))))) ||
                  ((*param_1 == DAT_08008968 ||
                   (((*param_1 == DAT_0800896c || (*param_1 == DAT_08008970)) ||
                    (*param_1 == DAT_08008974)))))) ||
                 ((*param_1 == DAT_08008978 || (*param_1 == DAT_0800897c)))) ||
                (((*param_1 == DAT_08008980 ||
                  ((*param_1 == DAT_08008984 || (*param_1 == DAT_08008988)))) ||
                 (*param_1 == DAT_0800898c)))) || (*param_1 == DAT_08008990)) {
              *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffff7;
            }
            else {
              *(uint *)*param_1 = *(uint *)*param_1 & 0xfffffffb;
            }
          }
          if (param_1[0x10] != 0) {
            (*(code *)param_1[0x10])(param_1);
          }
        }
        else if ((uVar2 & 0x10000) == 0) {
          if (param_1[0x12] != 0) {
            (*(code *)param_1[0x12])(param_1);
          }
        }
        else if (param_1[0x10] != 0) {
          (*(code *)param_1[0x10])(param_1);
        }
      }
    }
  }
  return;
}


