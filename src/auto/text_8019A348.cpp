// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);

void fn_8019A348(u8 *p) {
    u8 *n = *(u8 **)(p + 4);
    while (n != NULL) {
        u8 *t = *(u8 **)(n + 12);
        __dl__FPv(n);
        n = t;
    }
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
}

} /* extern "C" */
