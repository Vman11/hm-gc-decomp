// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
void fn_800FB064(void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_801F7518(void *, void *, s32);

void fn_801F6898(u8 *p, void *q, s32 c) {
    char b[8];
    char a[8];
    void *r;
    u8 *x;
    switch (c) {
    case 115:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(*(u8 **)(p + 8) + 212);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 84, b);
        } else {
            r = fn_800F9788(x + 108, a, b);
        }
        *(void **)(p + 120) = r;
        *(void **)(p + 116) = *(void **)(p + 120);
        break;
    case 148:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(*(u8 **)(p + 8) + 188);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 32, b);
        } else {
            r = fn_800F9788(x + 56, a, b);
        }
        *(void **)(p + 124) = r;
        break;
    case 149:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(*(u8 **)(*(u8 **)(p + 8) + 208));
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 540, b);
        } else {
            r = fn_800F9788(x + 564, a, b);
        }
        *(void **)(p + 128) = r;
        break;
    default:
        fn_801F7518(p, q, c);
        break;
    }
}

} /* extern "C" */
