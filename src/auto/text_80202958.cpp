#include "common.h"

extern "C" {

extern const f32 lbl_8036573C;
extern const f32 lbl_80365738;
void fn_800BB2F8(void *, u32, u32);
void fn_800BB32C(void *);
void fn_800BB714(void *);
void fn_800BB730(void *);
void fn_800BB788(void *);
void fn_800BBAC8(void *, void *);
f64 fn_801FC1F4(f64);
void fn_80206620(void *, void *, void *);

void fn_80202958(u8 *param_1, u8 *param_2, u32 param_3, void *param_4) {
    f64 dVar1;

    fn_800BB2F8(param_1 + 0x34, param_3, *(u32 *)(param_2 + 4));
    fn_800BB730(param_1 + 0x74);
    fn_800BB788(param_1 + 0x80);
    fn_800BB714(param_1 + 0x8c);
    if (*(u8 **)(param_1 + 0x18) != 0) {
        dVar1 = (f64)fn_801FC1F4((f64)(*(f32 *)(*(u8 **)(param_1 + 0x18) + 0x10) *
                                                                                *(f32 *)(param_1 + 0x2c)));
        if (dVar1 < lbl_80365738) {
            dVar1 = lbl_80365738;
        }
        if (dVar1 > lbl_8036573C) {
            dVar1 = lbl_8036573C;
        }
        *(u32 *)(param_1 + 0x88) = (s32)dVar1 * 0xa0000;
    }
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x74);
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x80);
    fn_800BBAC8(param_1 + 0x34, param_1 + 0x8c);
    if (param_4 != 0) {
        fn_80206620(param_1 + 0x98, param_4, param_1 + 0x34);
    }
    fn_800BB32C(param_1 + 0x34);
}

} /* extern "C" */
