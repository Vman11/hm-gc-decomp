// auto/text_801A6B34 fn_801A6B34 95.3261
extern char lbl_802A27B8[];
void fn_80060568();
s32 fn_800F8274();
void fn_800F87F0();
void fn_801A6948();
void fn_801A6A04();

void fn_801A6B34(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;

    iVar1 = fn_800F8274();
    if (iVar1 == 0) {
        if (*(u32 *)(param_1 + 0x1c) == 0) {
            fn_80060568((void *)lbl_802A27B8,0,0,0); /* "Atlas UI: Asset Name space database overflow." */
        }
        iVar1 = *(u32 *)(param_1 + 0x1c);
        *(u32 *)(param_1 + 0x1c) = *(u32 *)(iVar1 + 0xc);
        fn_800F87F0(param_1,param_2);
        fn_801A6A04(iVar1,param_2);
        *(u32 *)(iVar1 + 0x10) = param_1;
    }
    *(u32 *)(param_1 + 0x20) = iVar1;
    fn_801A6948(iVar1,param_3);
}
