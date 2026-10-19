// auto/text_800A2204 fn_800A2204 95.1539
extern char lbl_80361C20[0x7];
f64 fn_800EB838();
s32 fn_800F6CD0();
void fn_800F6E40();

void fn_800A2204(s32 param_1) {
    s32 iVar1;
    f64 dVar2;
    u8 auStack_18 [20];

    iVar1 = fn_800F6CD0(*(u32 *)(param_1 + 0xec),(void *)lbl_80361C20); /* "REVERT" */
    if (iVar1 != 0) {
        *(u32 *)(param_1 + 0x1a8) = **(u32 **)(param_1 + 0x118);
    }
    else {
        fn_800F6E40(auStack_18,*(u32 *)(param_1 + 0xec));
        dVar2 = (f64)fn_800EB838(auStack_18);
        *(f32 *)(param_1 + 0x1a8) = (f32)dVar2;
    }
}
