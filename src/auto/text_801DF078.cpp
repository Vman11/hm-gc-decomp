// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void *fn_801EFFE4(void *);
f32 fn_800FB2E0(void *);
void fn_801EF720(void *, void *, s32);

void fn_801DF078(u8 *p, void *q, s32 c) {
    char b[8];
    char a[8];
    void *r;
    u8 *x;
    switch (c) {
    case 139:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(p + 8);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 120, b);
        } else {
            r = fn_800F9788(x + 144, a, b);
        }
        *(void **)(p + 40) = fn_801EFFE4(r);
        break;
    case 140:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(p + 8);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 120, b);
        } else {
            r = fn_800F9788(x + 144, a, b);
        }
        *(void **)(p + 44) = fn_801EFFE4(r);
        break;
    case 141:
        *(f32 *)(p + 48) = fn_800FB2E0(q);
        break;
    default:
        fn_801EF720(p, q, c);
        break;
    }
}

} /* extern "C" */
