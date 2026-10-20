// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A6A4C(void *, void *);

void fn_801A68D0(u8 *p, u8 *x) {
    u8 *n;
    u8 **pp;
    pp = (u8 **)(p + 8);
    n = *(u8 **)(p + 8);
    while (n != NULL) {
        if (n == x) {
            *pp = *(u8 **)(n + 8);
            *(s32 *)(n + 4) = 0;
            if (*(void **)(p + 8) == NULL && *(void **)(p + 16) != NULL) {
                fn_801A6A4C(*(void **)(p + 16), p);
            }
            return;
        }
        pp = (u8 **)(n + 8);
        n = *(u8 **)(n + 8);
    }
}

} /* extern "C" */
