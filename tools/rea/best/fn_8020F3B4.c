// auto/text_8020F3B4 fn_8020F3B4 99.2857
void fn_8020F3B4(u8 *obj, s32 a, s32 b) {
    u8 *p = *(u8 **)(*(u8 **)(*(u8 **)(obj + 0x14) + 0x1C) + 0x6E4);
    (*(void (**)(void *, s32, s32))(*(u8 **)(p + 0x10) + 0x2C))(p, a, b);
}
