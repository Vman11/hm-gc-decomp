// auto/text_8024B580 fn_8024B580 95.6667
extern u8 lbl_802F1E38[];
void __dt__9C8024AC90Fv();
void __dl__FPv();
void __dla__FPv();
void __dt__9C8023B4DCFv();
void fn_800E1E88();
void fn_8023B324();

u32 * fn_8024B580(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        param_1[0x30] = (u32)lbl_802F1E38;
        if (param_1[5] != 0) {
            if (param_1[1] != 0) {
                fn_800E1E88(param_1[1],__dt__9C8024AC90Fv);
            }
            if (param_1[2] != 0) {
                __dla__FPv(param_1[2] + -0x10);
            }
            if (param_1[3] != 0) {
                __dla__FPv(param_1[3]);
            }
            if (param_1[4] != 0) {
                __dla__FPv(param_1[4] + -0x10);
            }
            fn_8023B324(param_1 + 7);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        __dt__9C8023B4DCFv(param_1 + 7,0xffffffff);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
