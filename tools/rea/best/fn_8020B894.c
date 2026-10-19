// auto/text_8020B894 fn_8020B894 96.7241
s32 fn_800D339C();

s32 fn_8020B894(u32 *param_1) {
    s32 iVar1;
    u32 uVar2;
    s32 iVar3;
    u8 auStack_88[116];

    iVar3 = 0;
    uVar2 = 0;
    do {
        do {
            iVar1 = fn_800D339C(*param_1,uVar2,auStack_88);
        } while (iVar1 == -1);
        if (iVar1 == 0) {
            iVar3 = iVar3 + 1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x7f);
    return 0x7f - iVar3;
}
