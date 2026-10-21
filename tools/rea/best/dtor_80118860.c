// auto/text_80118860 __dt__9C801188F8Fv 97.3684
extern u8 lbl_802E3948[];
void __dl__FPv();
void __dla__FPv();

u32 * __dt__9C801188F8Fv(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802E3948;
        if (param_1[6] != 0) {
            __dla__FPv(param_1[6]);
        }
        if (param_1[7] != 0) {
            __dla__FPv(param_1[7] + -0x10);
        }
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
