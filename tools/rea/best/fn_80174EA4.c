// auto/text_80174EA4 fn_80174EA4 95.3846
void fn_800D91FC();

void fn_80174EA4(s32 param_1, u32 param_2) {
    if (*(u8 *)(param_1 + 0x16) != param_2) {
        *(s8 *)(param_1 + 0x16) = (s8)param_2;
        fn_800D91FC(*(u8 *)(param_1 + 0x21));
    }
}
