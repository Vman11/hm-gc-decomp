// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_801E0504(void *, void *, s32);

void fn_801E9364(u8 *p, void *q, s32 c) {
    switch (c) {
    case 100: {
        char b[8];
        char a[8];
        u8 *x;
        void *r;
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(*(u8 **)(p + 8) + 212);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 144, b);
        } else {
            r = fn_800F9788(x + 168, a, b);
        }
        *(s32 *)(p + 60) = 0;
        *(s32 *)(p + 56) = 0;
        *(void **)(p + 56) = r;
        break;
    }
    case 174:
        *(s32 *)(p + 12) = 38;
        break;
    case 175:
        *(s32 *)(p + 12) = 39;
        break;
    default:
        fn_801E0504(p, q, c);
        break;
    }
}

} /* extern "C" */
