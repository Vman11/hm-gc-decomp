// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);

void fn_800E1E88(u8 *block, void (*dt)(void *, s32)) {
    if (block != NULL) {
        if (dt != NULL) {
            u32 i;
            u32 n;
            u32 size;
            u8 *p;
            size = *(u32 *)(block - 16);
            n = *(u32 *)(block - 12);
            p = block + size * n;
            for (i = 0; i < n; i++) {
                p -= size;
                dt(p, -1);
            }
        }
        __dla__FPv(block - 16);
    }
}

} /* extern "C" */
