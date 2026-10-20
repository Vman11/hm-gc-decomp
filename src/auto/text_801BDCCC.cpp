// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_800F85F0(void *, u8 *);

s32 fn_801BDCCC(u8 *p, void *a) {
    u8 *q = p;
    u32 i;
    for (i = 0; i < 4; i++) {
        if (*(u8 **)(q + 20) != NULL) {
            *(u8 **)(q + 20) = fn_800F85F0(a, *(u8 **)(q + 20) - 1);
        }
        q += 4;
    }
    return 0;
}

} /* extern "C" */
