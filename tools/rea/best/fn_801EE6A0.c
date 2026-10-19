// auto/text_801EE6A0 fn_801EE6A0 98.4118
void fn_8019A578();

void fn_801EE6A0(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x24) & 2) != 0) {
        **(u32 **)(param_1 + 0x28) = 0;
        fn_8019A578(*(u32 *)(*(s32 *)(param_1 + 8) + 0xd8),
                                *(u32 *)(*(s32 *)(param_1 + 8) + 0xd4));
    }
}
