// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);

void fn_8018EF7C(u8 *p) {
    u8 *q = *(u8 **)(p + 4);
    if (q != NULL) {
        if (q != NULL) {
            __dla__FPv(q - 16);
        }
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
}

} /* extern "C" */
