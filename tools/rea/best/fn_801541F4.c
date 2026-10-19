// auto/text_801541F4 fn_801541F4 98.1034

s32 fn_801541F4(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x74) = (u8 *)lbl_802E683C;
        fn_8012C2FC(param_1);
        *(u32 *)(param_1 + 0x78) = 0;
        *(u32 *)(param_1 + 0x1c0) = 0;
        __dt__9C8012C3F0Fv(param_1,0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}
