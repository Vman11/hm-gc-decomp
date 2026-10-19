// auto/text_800A14F0 fn_800A14F0 98.1372
void fn_800F6E88();
s32 fn_80242144();
void fn_80242BC0();

void fn_800A14F0(s32 param_1) {
    u32 uVar1;
    u32 uVar2;
    s32 iVar3;
    s32 iVar4;
    u8 auStack_28 [8];
    u8 auStack_20 [16];

    iVar4 = 0;
    iVar3 = 0;
    for (uVar2 = 0; uVar2 < *(u32 *)(param_1 + 0x1cc); uVar2 = uVar2 + 1) {
        if (*(s32 *)(param_1 + 0x1d4) == *(s32 *)(*(s32 *)(*(s32 *)(param_1 + 0x194) + 0xc) + iVar4)) {
            fn_800F6E88(auStack_20,*(s32 *)(*(s32 *)(param_1 + 0x198) + 0xc) + iVar3);
            fn_800F6E88(auStack_28,*(s32 *)(*(s32 *)(param_1 + 0x19c) + 0xc) + iVar3);
            uVar1 = fn_80242144(param_1,uVar2 + 4);
            fn_80242BC0(uVar1,auStack_20,*(u32 *)(param_1 + 0xe0),0,auStack_28,0);
        }
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 8;
    }
}
