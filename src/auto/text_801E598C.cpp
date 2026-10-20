// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_801EB474(void *, void *, s32);

void fn_801E598C(u8 *p, void *q, s32 c) {
    switch (c) {
    case 68: {
        char b[8];
        char a[8];
        u8 *x;
        void *r;
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(*(u8 **)(p + 16) + 184);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 4, b);
        } else {
            r = fn_800F9788(x + 28, a, b);
        }
        *(void **)(p + 24) = r;
        break;
    }
    case 69:
        *(u32 *)(p + 28) |= 1;
        break;
    case 70:
        *(u32 *)(p + 28) |= 2;
        break;
    case 71:
        *(u32 *)(p + 28) |= 4;
        break;
    default:
        fn_801EB474(p, q, c);
        break;
    }
}

} /* extern "C" */
