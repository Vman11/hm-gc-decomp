// auto/text_8018AFD4 fn_8018AFD4 96.8750
void fn_8018AFD4(u32 param_1, s32 param_2, u32 param_3, s32 param_4, u32 param_5) {
    u32 *puVar1;

    puVar1 = *(u32 **)(param_2 + 0x228);
    *puVar1 = param_5;
    puVar1[param_4 * 2 + 1] = param_1;
    puVar1[param_4 * 2 + 2] = 0;
}
