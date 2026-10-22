
void FUN_080141dc(int param_1)

{
  if (param_1 != 0) {
    disableIRQinterrupts();
    FUN_080230b2(param_1,DAT_08014204,0x40);
    enableIRQinterrupts();
  }
  return;
}


