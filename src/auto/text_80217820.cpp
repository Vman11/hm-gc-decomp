// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);

void fn_80217820(u8 *p) {
    if (p[0] & 1) {
        if (*(void **)(p + 4) != NULL) {
            __dla__FPv(*(void **)(p + 4));
        }
    }
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(u16 *)(p + 2) = 0;
    *(u8 *)(p + 1) = 0;
    *(u8 *)(p + 0) = 0;
    *(s32 *)(p + 12) = 0;
}

} /* extern "C" */
