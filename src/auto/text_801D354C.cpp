// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801D791C(void);

u32 fn_801D354C(s32 param_1) {

    fn_801D791C();
    if (*(u32 *)(param_1 + 0x310) == 0) {
        *(u32 *)(param_1 + 0x310) = *(u32 *)(param_1 + 0x2ec);
    }
    switch (*(u32 *)(param_1 + 0x144)) {
    case 2:
    case 0x100:
        *(u32 *)(param_1 + 0x144) = 0x10;
        break;
    }
    return 0;
}

} /* extern "C" */
