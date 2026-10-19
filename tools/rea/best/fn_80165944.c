// auto/text_80165944 fn_80165944 98.0117
void fn_800D61A0();
void fn_800D6DAC();
void fn_800D7CA4();
void fn_800D937C();
void fn_800D95E8();
void fn_800D9610();
void fn_800D9958();
void fn_800D9A38();
void fn_801576A0();
void fn_8015780C();
void fn_80174CB8();
void fn_80174E70();
void fn_80174EA4();
void fn_80174ED8();
void fn_80174F50();
void fn_80174FB4();
void fn_8017502C();

void fn_80165944(s32 param_1) {
    s32 iVar1;
    u32 local_18 [4];

    fn_8015780C(*(u32 *)(param_1 + 0x1938),0,param_1 + 0x10);
    iVar1 = *(s32 *)(*(s32 *)(param_1 + 0x1934) + 0x32c);
    if (*(s32 *)(*(s32 *)(param_1 + 0x1938) + 0x490) != iVar1) {
        *(s32 *)(*(s32 *)(param_1 + 0x1938) + 0x490) = iVar1;
        fn_800D6DAC();
    }
    iVar1 = *(s32 *)(param_1 + 0x1938);
    if (*(s32 *)(iVar1 + 0x494) != 0) {
        *(u32 *)(iVar1 + 0x494) = 0;
        local_18[0] = *(u32 *)(iVar1 + 0x4ac);
        fn_800D9610((f64)*(f32 *)(iVar1 + 0x49c),(f64)*(f32 *)(iVar1 + 0x4a0),
                                (f64)*(f32 *)(iVar1 + 0x4a4),(f64)*(f32 *)(iVar1 + 0x4a8),0,local_18);
    }
    iVar1 = *(s32 *)(param_1 + 0x1938);
    if (*(s8 *)(iVar1 + 0x46c) != '\0') {
        *(u8 *)(iVar1 + 0x46c) = 0;
        if (*(s32 *)(iVar1 + 0x47c) == 0) {
            fn_801576A0(iVar1);
        }
        fn_800D7CA4(0,*(u8 *)(iVar1 + 0x46c),0,*(u32 *)(iVar1 + 0x478),
                                *(u32 *)(iVar1 + 0x47c),*(u32 *)(iVar1 + 0x480),
                                *(u32 *)(iVar1 + 0x484));
    }
    iVar1 = *(s32 *)(param_1 + 0x1938);
    if ((*(s32 *)(iVar1 + 0x488) != 7) || (*(s8 *)(iVar1 + 0x48c) != '\0')) {
        *(u32 *)(iVar1 + 0x488) = 7;
        *(u8 *)(iVar1 + 0x48c) = 0;
        if (*(s32 *)(iVar1 + 0x488) == 7) {
            fn_800D9A38(1);
        }
        else {
            fn_800D9A38(0);
        }
        fn_800D937C(7,0,0,7,0);
    }
    iVar1 = *(s32 *)(param_1 + 0x1938);
    if ((((*(s32 *)(iVar1 + 0x4c0) != 0) || (*(s32 *)(iVar1 + 0x4c4) != 1)) ||
            (*(s32 *)(iVar1 + 0x4c8) != 0)) || (*(s32 *)(iVar1 + 0x4cc) != 3)) {
        *(u32 *)(iVar1 + 0x4c0) = 0;
        *(u32 *)(iVar1 + 0x4c4) = 1;
        *(u32 *)(iVar1 + 0x4c8) = 0;
        *(u32 *)(iVar1 + 0x4cc) = 3;
        fn_800D9958(*(u32 *)(iVar1 + 0x4c0),*(u32 *)(iVar1 + 0x4c4),
                                *(u32 *)(iVar1 + 0x4c8),*(u32 *)(iVar1 + 0x4cc));
    }
    fn_80174EA4(*(s32 *)(param_1 + 0x1938) + 0x4d8,0xc);
    fn_80174E70(*(s32 *)(param_1 + 0x1938) + 0x4d8,0x1c);
    fn_8017502C(*(s32 *)(param_1 + 0x1938) + 0x4d8,0xf,0xf,0xf,0xe);
    fn_80174FB4(*(s32 *)(param_1 + 0x1938) + 0x4d8,0,0,0,0,0);
    fn_80174F50(*(s32 *)(param_1 + 0x1938) + 0x4d8,7,7,7,6);
    fn_80174ED8(*(s32 *)(param_1 + 0x1938) + 0x4d8,0,0,0,0,0);
    fn_80174CB8(*(s32 *)(param_1 + 0x1938) + 0x4d8);
    iVar1 = *(s32 *)(param_1 + 0x1938);
    if (*(s32 *)(iVar1 + 0x4d0) != 0) {
        *(u32 *)(iVar1 + 0x4d0) = 0;
        fn_800D61A0(*(u32 *)(iVar1 + 0x4d0) & 0xff);
    }
    iVar1 = *(s32 *)(param_1 + 0x1938);
    if (*(s32 *)(iVar1 + 0x4d4) != 1) {
        *(u32 *)(iVar1 + 0x4d4) = 1;
        fn_800D95E8(*(u32 *)(iVar1 + 0x4d4) & 0xff);
    }
    *(u32 *)(*(s32 *)(param_1 + 0x1934) + 0x2c) =
              *(u32 *)(*(s32 *)(param_1 + 0x1934) + 0x2c) & 0xfffff7ff;
}
