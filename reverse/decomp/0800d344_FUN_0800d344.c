
void FUN_0800d344(int *param_1)

{
  if ((param_1[10] & 8U) != 0) {
    *(uint *)(*param_1 + 4) = param_1[0xe] | *(uint *)(*param_1 + 4) & 0xffff7fff;
  }
  if ((param_1[10] & 1U) != 0) {
    *(uint *)(*param_1 + 4) = param_1[0xb] | *(uint *)(*param_1 + 4) & 0xfffdffff;
  }
  if ((param_1[10] & 2U) != 0) {
    *(uint *)(*param_1 + 4) = param_1[0xc] | *(uint *)(*param_1 + 4) & 0xfffeffff;
  }
  if ((param_1[10] & 4U) != 0) {
    *(uint *)(*param_1 + 4) = param_1[0xd] | *(uint *)(*param_1 + 4) & 0xfffbffff;
  }
  if ((param_1[10] & 0x10U) != 0) {
    *(uint *)(*param_1 + 8) = param_1[0xf] | *(uint *)(*param_1 + 8) & 0xffffefff;
  }
  if ((param_1[10] & 0x20U) != 0) {
    *(uint *)(*param_1 + 8) = param_1[0x10] | *(uint *)(*param_1 + 8) & 0xffffdfff;
  }
  if (((param_1[10] & 0x40U) != 0) &&
     (*(uint *)(*param_1 + 4) = param_1[0x11] | *(uint *)(*param_1 + 4) & 0xffefffff,
     param_1[0x11] == 0x100000)) {
    *(uint *)(*param_1 + 4) = param_1[0x12] | *(uint *)(*param_1 + 4) & 0xff9fffff;
  }
  if ((param_1[10] & 0x80U) != 0) {
    *(uint *)(*param_1 + 4) = param_1[0x13] | *(uint *)(*param_1 + 4) & 0xfff7ffff;
  }
  return;
}


