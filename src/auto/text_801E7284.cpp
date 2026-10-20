// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801E0504(void *, void *, s32);

void fn_801E7284(u8 *p, void *x, s32 c) {
    switch (c) {
    case 174:
        *(s32 *)(p + 0xC) = 40;
        break;
    case 175:
        *(s32 *)(p + 0xC) = 41;
        break;
    default:
        fn_801E0504(p, x, c);
        break;
    }
}

} /* extern "C" */
