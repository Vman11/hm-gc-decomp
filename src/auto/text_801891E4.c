// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void *fn_8019BAF4(void *);
void *fn_8019BAB8(void *);
void fn_8019BADC(void *, void *);
void fn_8019AC44(void *, void *, void *, void *);

void fn_801891E4(u8 *p, u8 *q, s32 idx, void *x) {
    u8 *n;
    u8 *k;
    n = fn_8019BAF4(q);
    if (n != 0) {
        k = fn_8019BAB8(q);
        if (k == 0) {
            fn_8019BADC(q, n);
        } else {
            *(s32 *)(q + 76) = idx;
            fn_8019AC44(q, x, n, k);
            *(u8 **)(k + 8) = p;
            *(u8 **)(k + 20) = k;
            if (((u8 **)(p + 20))[idx] != 0) {
                *(u8 **)(((u8 **)(p + 20))[idx] + 28) = k;
            }
            *(u8 **)(k + 24) = ((u8 **)(p + 20))[idx];
            ((u8 **)(p + 20))[idx] = k;
            *(u8 **)(k + 28) = 0;
        }
    }
}
