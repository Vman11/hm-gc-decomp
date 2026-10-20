// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F96A4(void *, void *);

void fn_800F951C(u8 *p, u8 *x) {
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

} /* extern "C" */
