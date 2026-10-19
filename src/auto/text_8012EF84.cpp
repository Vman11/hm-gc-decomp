// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(int);
void fn_800F8DD0(int);
void fn_8013E8C0(int);

void fn_8012EF84(s32 param_1) {
    fn_8013E8C0((int)(param_1 + 0x14));
    if (*(void **)(param_1 + 0x24) != 0) {
        __dla__FPv((int)(*(void **)(param_1 + 0x24)));
    }
    fn_800F8DD0((int)(param_1));
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
}

} /* extern "C" */
