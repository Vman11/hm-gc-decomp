// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801958A4(int);

void fn_8019598C(u32 param_1) {
    if ((*(void **)(param_1 + 0x18) == NULL) || (*(u32 *)(param_1 + 0x10) != *(u32 *)(param_1 + 0xc))) {
        *(u32 *)(param_1 + 0x18) = *(u32 *)(param_1 + 0x18) + 1;
        fn_801958A4((int)(*(u32 *)(param_1 + 8) + *(u32 *)(param_1 + 0x10) * 0x40));
        if (*(u32 *)(param_1 + 0x10) < 1) {
            *(u32 *)(param_1 + 0x10) = *(u32 *)(param_1 + 0x14);
        }
        *(u32 *)(param_1 + 0x10) = *(u32 *)(param_1 + 0x10) + -1;
    }
}

} /* extern "C" */
