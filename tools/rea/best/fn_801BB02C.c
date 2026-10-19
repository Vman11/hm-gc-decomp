// auto/text_801BB02C fn_801BB02C 98.7500
void fn_801DCA84();

void fn_801BB02C(s32 param_1) {
    if (*(u32 *)(param_1 + 0x7c) != 0) {
        *(u32 *)(*(u32 *)(param_1 + 0x7c) + 0x14) = param_1;
    }
    fn_801DCA84();
}
