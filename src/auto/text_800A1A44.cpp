// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_80242144(int, int);
void fn_80242BC0(int, int, int, int, int, int);
void fn_802494A4(int, int);

void fn_800A1A44(s32 param_1) {
    u32 uVar1;

    if (**(s32 **)(param_1 + 0x140) != 0) {
        fn_802494A4((int)(param_1), (int)(3));
    }
    uVar1 = fn_80242144((int)(param_1), (int)(3));
    fn_80242BC0((int)(uVar1), (int)(*(u32 *)(param_1 + 0x130)), (int)(*(u32 *)(param_1 + 0xe0)), (int)(0), (int)(*(u32 *)(param_1 + 0x134)), (int)(0));
}

} /* extern "C" */
