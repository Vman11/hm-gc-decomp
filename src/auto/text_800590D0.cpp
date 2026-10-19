// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);
void fn_80242210(int);

void fn_800590D0(s32 param_1) {
    if ((*(s32 *)(param_1 + 0x18c) == 0) && (*(u32 *)(param_1 + 0x1a4) != 0)) {
        __dl__FPv((int)(*(s32 *)(param_1 + 0x1a4)));
        *(u32 *)(param_1 + 0x1a4) = 0;
    }
    fn_80242210((int)(param_1));
}

} /* extern "C" */
