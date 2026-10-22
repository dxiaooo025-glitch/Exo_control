
void FUN_080104f8(void)

{
  if (*(int *)*DAT_08010530 == 0) {
    *DAT_08010534 = 0xffffffff;
  }
  else {
    *DAT_08010534 = *(undefined4 *)(*(int *)(*(int *)(*DAT_08010530 + 0xc) + 0xc) + 4);
  }
  return;
}


