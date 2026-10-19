// auto/text_80033BD0 dtor_80033BD0 98.2692

s32 dtor_80033BD0(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 4) = (u8 *)lbl_802F069C;
        fn_80222BE8(param_1);
        __dt__9C80031B94Fv(param_1,0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
