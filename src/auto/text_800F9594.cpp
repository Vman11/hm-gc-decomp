// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F96A4(void *, void *);

static inline void rm_800F9594(u8 *p, u8 *x) {
    u8 *n;
    u8 **pp;
    pp = (u8 **)(p + 8);
    n = *(u8 **)(p + 8);
    while (n != NULL) {
        if (n == x) {
            *pp = *(u8 **)(n + 8);
            *(s32 *)(n + 12) = 0;
            if (*(void **)(p + 8) == NULL && *(void **)(p + 20) != NULL) {
                fn_800F96A4(*(void **)(p + 20), p);
            }
            return;
        }
        pp = (u8 **)(n + 8);
        n = *(u8 **)(n + 8);
    }
}

void fn_800F9594(u8 *p, u8 *q) {
    if (*(u8 **)(q + 12) != NULL) {
        rm_800F9594(*(u8 **)(q + 12), q);
    }
    *(void **)(q + 8) = *(void **)(p + 8);
    *(void **)(p + 8) = q;
    *(void **)(q + 12) = p;
}

} /* extern "C" */
