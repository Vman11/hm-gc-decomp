// auto/text_8017AD60 fn_8017AD60 98.2143

s32 fn_8017AD60(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 4) = (u8 *)lbl_802E85C8;
        fn_80103958(param_1);
        *(u32 *)(param_1 + 0x18) = 0;
        fn_801039A4(param_1,0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
