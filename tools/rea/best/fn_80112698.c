// auto/text_80112698 fn_80112698 95.3261
extern char lbl_8029D208[];
void fn_80060568();
s32 fn_800F8274();
void fn_800F87F0();
void fn_8011241C();
void fn_801124D8();

void fn_80112698(s32 param_1, u32 param_2, u32 param_3) {
    s32 iVar1;

    iVar1 = fn_800F8274();
    if (iVar1 == 0) {
        if (*(u32 *)(param_1 + 0x1c) == 0) {
            fn_80060568((void *)lbl_8029D208,0,0,0); /* "Atlas Base: Name space database overflow." */
        }
        iVar1 = *(u32 *)(param_1 + 0x1c);
        *(u32 *)(param_1 + 0x1c) = *(u32 *)(iVar1 + 0xc);
        fn_800F87F0(param_1,param_2);
        fn_801124D8(iVar1,param_2);
        *(u32 *)(iVar1 + 0x10) = param_1;
    }
    *(u32 *)(param_1 + 0x20) = iVar1;
    fn_8011241C(iVar1,param_3);
}
