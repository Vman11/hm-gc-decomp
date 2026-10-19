// auto/text_801EE6E4 fn_801EE6E4 98.4118
void fn_8019A578();

void fn_801EE6E4(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        **(u32 **)(param_1 + 0x28) = *(u32 *)(param_1 + 0x2c);
        fn_8019A578(*(u32 *)(*(s32 *)(param_1 + 8) + 0xd8),
                                *(u32 *)(*(s32 *)(param_1 + 8) + 0xd4));
    }
}
