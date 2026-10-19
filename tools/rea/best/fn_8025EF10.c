// auto/text_8025EF10 fn_8025EF10 99.4848
extern s32 lbl_8035B7BC;
s32 fn_8026D254();

void fn_8025EF10(s32 param_1) {
    u32 uVar1;
    s32 iVar2;
    u32 uVar3;
    s32 iVar4;
    s32 iVar5;

    uVar1 = lbl_8035B7BC;
    iVar5 = 0;
    for (iVar4 = 0; iVar4 < *(s32 *)(param_1 + 0x6c); iVar4 = iVar4 + 1) {
        uVar3 = fn_8026D254(uVar1,*(s32 *)(param_1 + 0x70) + iVar5 + 8);
        iVar2 = iVar5 + 0x10;
        iVar5 = iVar5 + 0x1c;
        *(u32 *)(*(s32 *)(param_1 + 0x70) + iVar2) = uVar3;
    }
}
