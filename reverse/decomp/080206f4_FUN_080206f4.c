
void FUN_080206f4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_08010d48();
    *(undefined2 *)(DAT_080208e8 + 0x3a00) = 0;
    *(undefined2 *)(DAT_080208e8 + 0x3a02) = 0;
    iVar1 = DAT_080208e8;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)(DAT_080208e8 + 0x3a04) = *param_1;
    *(undefined4 *)(iVar1 + 0x3a08) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a0c) = uVar3;
    *(undefined4 *)(iVar1 + 0x3a10) = uVar4;
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    uVar4 = param_1[7];
    *(undefined4 *)(iVar1 + 0x3a14) = param_1[4];
    *(undefined4 *)(iVar1 + 0x3a18) = uVar2;
    *(undefined4 *)(iVar1 + 0x3a1c) = uVar3;
    *(undefined4 *)(iVar1 + 0x3a20) = uVar4;
    uVar2 = param_1[9];
    *(undefined4 *)(iVar1 + 0x3a24) = param_1[8];
    *(undefined4 *)(iVar1 + 0x3a28) = uVar2;
    *(undefined1 *)(DAT_080208e8 + 0x3a2c) = 1;
    *(undefined1 *)(DAT_080208e8 + 0x3a2d) = 1;
    *(undefined1 *)(DAT_080208e8 + 0x3a39) = 0;
    *(undefined1 *)(DAT_080208e8 + 0x3a38) = 1;
    *(undefined4 *)(DAT_080208e8 + 0x3a3c) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a40) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a44) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a48) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a4c) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a50) = 0;
    iVar1 = DAT_080208e8;
    *(undefined4 *)(DAT_080208e8 + 0x3a58) = 0;
    *(undefined4 *)(iVar1 + 0x3a5c) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a60) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a64) = 0;
    iVar1 = DAT_080208e8;
    *(undefined4 *)(DAT_080208e8 + 0x3a68) = 0;
    *(undefined4 *)(iVar1 + 0x3a6c) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a70) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a74) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x3a78) = 0;
    *(undefined2 *)(DAT_080208e8 + 0x467c) = 0;
    *(undefined2 *)(DAT_080208e8 + 0x467e) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x4680) = 0;
    *(undefined2 *)(DAT_080208e8 + 0x4684) = 0;
    *(undefined1 *)(DAT_080208e8 + 0x4686) = 0;
    *(undefined1 *)(DAT_080208e8 + 0x4687) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x4688) = 0;
    FUN_08022f96(DAT_080208ec,0,0x10);
    *(undefined1 *)(DAT_080208e8 + 0x469c) = 1;
    *(undefined1 *)(DAT_080208e8 + 0x46a8) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x46ac) = 0;
    *(undefined1 *)(DAT_080208e8 + 0x46b9) = 0;
    *(undefined4 *)(DAT_080208e8 + 0x46b4) = *param_1;
    FUN_08010dac();
  }
  return;
}


