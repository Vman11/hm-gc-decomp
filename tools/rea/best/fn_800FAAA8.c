// auto/text_800FAAA8 fn_800FAAA8 95.5333
extern char lbl_803636E4[0x8];
extern char lbl_803636EC[0x4];
extern char lbl_803636F0[0x2];
void fn_800EB6A8();
void fn_800EB6F4();
void fn_800EB720();
u32 fn_800FAB98();
void fn_800FBB6C();
u32 strlen();

void fn_800FAAA8(u32 *param_1, u32 param_2) {
    u32 sVar1;
    u32 uVar2;
    s8 acStack_98 [63];
    u8 local_59;

    if ((param_1[0x47] != 0) && (*param_1 != 0)) {
        fn_800EB720(acStack_98,param_1[0x47],0x3f);
        local_59 = 0;
        sVar1 = strlen(acStack_98);
        fn_800EB6A8(acStack_98 + sVar1,param_1 + 0x48,4);
        sVar1 = strlen(acStack_98);
        fn_800EB6F4(acStack_98 + sVar1,(void *)lbl_803636E4); /* ": line " */
        sVar1 = strlen(acStack_98);
        fn_800FBB6C(*(u32 *)(*param_1 + 0x14),acStack_98 + sVar1);
        fn_800EB6F4(acStack_98,(void *)lbl_803636EC);
    }
    uVar2 = fn_800FAB98(param_1,param_2);
    fn_800EB6F4(acStack_98,uVar2);
    fn_800EB6F4(acStack_98,(void *)lbl_803636F0);
}
