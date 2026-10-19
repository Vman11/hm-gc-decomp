// auto/text_80272F28 fn_80272F28 99.5652
extern s32 lbl_8035B460;
extern s32 lbl_8035B7E4;
s32 fn_801AA960();
void fn_801C2368();

void fn_80272F28(void) {
    s32 iVar1;
    s32 iVar2;

    iVar2 = *(u32 *)(lbl_8035B7E4 + 4);
    iVar1 = fn_801AA960(*(u32 *)(*(u32 *)(lbl_8035B460 + 0xc) + 0x33b0));
    if ((iVar1 != 0) && (*(u32 *)(iVar2 + 4) != iVar1)) {
        fn_801C2368(iVar2,iVar1,1);
    }
}
