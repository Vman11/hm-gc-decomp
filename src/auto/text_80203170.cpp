// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(int);
void fn_80207608(int);

void fn_80203170(s32 param_1) {
    if (*(u32 *)(param_1 + 8) != 0) {
        fn_80207608((int)(*(u32 *)(param_1 + 8)));
        *(u32 *)(param_1 + 8) = 0;
    }
    if (*(u32 *)(param_1 + 4) != 0) {
        __dl__FPv((int)(*(u32 *)(param_1 + 4)));
        *(u32 *)(param_1 + 4) = 0;
    }
    *(u8 *)(param_1 + 0x1a) = *(u8 *)(param_1 + 0x1a) & 0xfe;
    *(u8 *)(param_1 + 0x1a) = *(u8 *)(param_1 + 0x1a) & ~2;
}

} /* extern "C" */
