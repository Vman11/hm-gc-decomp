// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_800FB064(void *, void *);
s32 fn_800FB33C(void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void *fn_800F8274(void *, void *);
void *fn_8019565C(void *);
void *fn_801955D8(void *);
void fn_801EF720(void *, void *, s32);

void fn_801F0238(u8 *p, void *q, s32 c) {
    char b[8];
    char a[8];
    char d[8];
    void *r;
    u8 *x;
    switch (c) {
    case 103:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(*(u8 **)(p + 8) + 212);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 144, b);
        } else {
            r = fn_800F9788(x + 168, a, b);
        }
        if (r != NULL) {
            r = fn_8019565C(r);
        }
        r = fn_801955D8(r);
        *(void **)(p + 44) = 0;
        *(void **)(p + 40) = 0;
        *(void **)(p + 40) = r;
        break;
    case 120:
        *(s32 *)(p + 52) = fn_800FB33C(q);
        fn_800FB064(q, d);
        fn_800FB064(q, b);
        if (d[0] != 0) {
            *(void **)(p + 48) = fn_800F8274(fn_800F9398(*(u8 **)(*(u8 **)(*(u8 **)(p + 8) + 212) + 4) + 732, d), b);
        } else {
            *(void **)(p + 48) = 0;
        }
        break;
    case 167:
        *(s32 *)(p + 12) = 15;
        break;
    case 168:
        *(s32 *)(p + 12) = 16;
        break;
    case 169:
        *(s32 *)(p + 56) = 1;
        break;
    default:
        fn_801EF720(p, q, c);
        break;
    }
}

} /* extern "C" */
