
char * FUN_0801e1fa(char *param_1)

{
  char *local_c;
  
  for (local_c = param_1;
      (local_c != (char *)0x0 &&
      ((((*local_c == ' ' || (*local_c == '\t')) || (*local_c == '\r')) || (*local_c == '\n'))));
      local_c = local_c + 1) {
  }
  return local_c;
}


