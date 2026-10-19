// auto/text_801F2ED8 fn_801F2ED8 95.8064
extern u8 lbl_802EE900[];
extern u8 lbl_802EE90C[];
void __dl__FPv();

u32 * fn_801F2ED8(u32 *param_1, s16 param_2) {
    if (param_1 != (u32 *)0x0) {
        *param_1 = (u32)lbl_802EE900;
        if (param_1 != (u32 *)0xffff7668) {
            param_1[0x2266] = (u32)lbl_802EE90C;
        }
        if (param_1 != (u32 *)0xffff7fec) {
            param_1[0x2005] = (u32)lbl_802EE90C;
        }
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
