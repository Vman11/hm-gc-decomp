// auto/text_800FA9B0 fn_800FA9B0 95.6774
extern char lbl_803636E4[0x8];
extern char lbl_803636EC[0x4];
void fn_80060568();
void fn_800EB6A8();
void fn_800EB6F4();
void fn_800EB720();
u32 fn_800FAB98();
void fn_800FBB6C();
u32 strlen();

void fn_800FA9B0(u32 *param_1, u32 param_2) {
    u32 sVar1;
    u32 uVar2;
    s8 acStack_88 [63];
    u8 local_49;

    if ((param_1[0x47] != 0) && (*param_1 != 0)) {
        fn_800EB720(acStack_88,param_1[0x47],0x3f);
        local_49 = 0;
        sVar1 = strlen(acStack_88);
        fn_800EB6A8(acStack_88 + sVar1,param_1 + 0x48,4);
        sVar1 = strlen(acStack_88);
        fn_800EB6F4(acStack_88 + sVar1,(void *)lbl_803636E4); /* ": line " */
        sVar1 = strlen(acStack_88);
        fn_800FBB6C(*(u32 *)(*param_1 + 0x14),acStack_88 + sVar1);
        fn_800EB6F4(acStack_88,(void *)lbl_803636EC);
    }
    uVar2 = fn_800FAB98(param_1,param_2);
    fn_800EB6F4(acStack_88,uVar2);
    fn_80060568(acStack_88,0,0,0);
}
