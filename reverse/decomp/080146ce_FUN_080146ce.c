
void FUN_080146ce(char param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    *(char *)((int)param_2 + 0xd) = param_1;
    if (param_1 == '\0') {
      *param_2 = *param_2 + 1;
      *(undefined1 *)(param_2 + 3) = 0;
    }
    else if (param_1 == '\x02') {
      param_2[1] = param_2[1] + 1;
      if ((char)param_2[3] != -1) {
        *(char *)(param_2 + 3) = (char)param_2[3] + '\x01';
      }
    }
    else {
      param_2[2] = param_2[2] + 1;
      if ((char)param_2[3] != -1) {
        *(char *)(param_2 + 3) = (char)param_2[3] + '\x01';
      }
    }
  }
  return;
}


