// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80188B44(u8 *, u32);
void fn_8019A7D0(u8 *, s32, s32);

void fn_8019A75C(u8 *param_1, u32 param_2) {
    u8 *p;
    u8 *end;

    fn_8019A7D0(param_1, 1, 1);
    p = *(u8 **)(param_1 + 0x3c);
    end = p + *(s32 *)(param_1 + 0x38) * 0x2c;
    for (; p < end; p += 0x2c) {
        fn_80188B44(p, param_2);
    }
}

} /* extern "C" */
