// auto/text_80174E70 fn_80174E70 95.3846
void fn_800D9258();

void fn_80174E70(s32 param_1, u32 param_2) {
    if (*(u8 *)(param_1 + 0x17) != param_2) {
        *(s8 *)(param_1 + 0x17) = (s8)param_2;
        fn_800D9258(*(u8 *)(param_1 + 0x21));
    }
}
