// auto/text_801EA460 fn_801EA460 95.4167
void fn_800FB064();
s32 fn_800FB33C();
void fn_801DF888();

void fn_801EA460(s32 param_1, u32 param_2, s32 param_3) {
    u32 uVar1;

    if (param_3 == 0x42) {
        fn_800FB064(param_2,param_1 + 0x54);
        uVar1 = fn_800FB33C(param_2);
        *(u32 *)(param_1 + 0x5c) = uVar1;
    }
    else {
        fn_801DF888();
    }
}
