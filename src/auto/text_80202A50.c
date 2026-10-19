// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern const f32 lbl_8036573C;
extern const f32 lbl_80365738;
void fn_800BB2F8();
void fn_800BB32C();
void fn_800BB6A4();
void fn_800BB730();
void fn_800BB788();
void fn_800BBAC8();
f64 fn_801FC1F4();
void fn_80206620();

void fn_80202A50(s32 param_1, s32 param_2, u32 param_3, u32 param_4) {
    f64 dVar1;

    fn_800BB2F8(param_1 + 0x34,param_3,*(u32 *)(param_2 + 4));
    fn_800BB6A4(param_1 + 0x48);
    fn_800BB730(param_1 + 0x74);
    fn_800BB788(param_1 + 0x80);
    if (*(u32 *)(param_1 + 0x14) != 0) {
        dVar1 = (f64)fn_801FC1F4((f64)(*(f32 *)(*(u32 *)(param_1 + 0x14) + 0x10) *
                                                                                *(f32 *)(param_1 + 0x2c)));
        if (dVar1 < lbl_80365738) {
            dVar1 = lbl_80365738;
        }
        if (dVar1 > lbl_8036573C) {
            dVar1 = lbl_8036573C;
        }
        *(u32 *)(param_1 + 0x88) = (s32)dVar1 * 0xa0000;
    }
    fn_800BBAC8(param_1 + 0x34,param_1 + 0x48);
    fn_800BBAC8(param_1 + 0x34,param_1 + 0x74);
    fn_800BBAC8(param_1 + 0x34,param_1 + 0x80);
    if (param_4 != 0) {
        fn_80206620(param_1 + 0x98,param_4,param_1 + 0x34);
    }
    fn_800BB32C(param_1 + 0x34);
}
