// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80359F2C;
extern f32 lbl_8035F3EC;
void fn_8002B14C(u32, s32);
void fn_8002B26C(u32, s32);
void fn_8002B42C(u32, s32);
void fn_8022BF30(f32, u8 *, s32, s32);

u32 fn_80072C54(u8 *param_1) {
    u32 *puVar1;
    s32 *v;

    fn_8022BF30(lbl_8035F3EC, param_1, 0x7f, 1);
    *(u32 *)(param_1 + 0x228) &= ~1;
    puVar1 = *(u32 **)(param_1 + 0x428);
    if (puVar1 != 0) {
        *puVar1 &= ~0x800;
    }
    puVar1 = *(u32 **)(param_1 + 0x438);
    if (puVar1 != 0) {
        *puVar1 &= ~0x800;
    }
    fn_8002B42C(lbl_80359F2C, 0);
    *(u32 *)(param_1 + 0x6d8) = 0;
    fn_8002B26C(lbl_80359F2C, 0);
    v = *(s32 **)(param_1 + 0x540);
    *v = 0;
    v = *(s32 **)(param_1 + 0x540);
    if (*v < 0) {
        *v = 0;
    }
    **(s32 **)(param_1 + 0x540) += 5;
    if (**(s32 **)(param_1 + 0x540) < 0) {
        **(s32 **)(param_1 + 0x540) = 0;
    }
    *(u32 *)(param_1 + 0x68c) = 1;
    fn_8002B14C(lbl_80359F2C, 1);
    return 0;
}

} /* extern "C" */
