// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);
void fn_80207608(void *);

void fn_80203630(u8 *p, void *a) {
    u8 ok = 0;
    void *x = *(void **)(p + 4);
    if (x != NULL && *(void **)(p + 8) != NULL && *(void **)(p + 12) != NULL) {
        ok = 1;
    }
    if (ok) {
        if (x != NULL) {
            __dla__FPv(x);
        }
        if (*(void **)(p + 8) != NULL) {
            fn_80207608(*(void **)(p + 8));
        }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(u16 *)(p + 24) = 0;
    *(u8 *)(p + 26) = 0;
    }
    *(void **)p = a;
}

} /* extern "C" */
