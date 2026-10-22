
char FUN_0800ef6c(char *param_1)

{
  char *local_10;
  char local_9;
  
  local_9 = '\0';
  for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {
    local_9 = local_9 + '\x01';
  }
  return local_9;
}


