// auto/text_8008ADA4 fn_8008ADA4 97.3913
extern s32 lbl_8035B308;
extern const f32 lbl_803600BC;
extern const f32 lbl_803600C0;
void fn_8023C314();
s32 fn_802416D4();

u32 fn_8008ADA4(s32 param_1, s32 param_2) {
    u32 uVar1;

    *(u32 *)(param_1 + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
    uVar1 = fn_802416D4(param_1, param_2);
    fn_8023C314(lbl_803600BC,lbl_803600C0,6e+01f,param_1 + 0x130);
    return uVar1;
}
