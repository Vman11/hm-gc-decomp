// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FB064(void *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_801EF720(void *, void *, s32);

void fn_801ECFB0(u8 *p, void *q, s32 c) {
    char b[8];
    char a[8];
    void *r;
    u8 *x;
    switch (c) {
    case 91:
        fn_800FB064(q, b);
        fn_800FB064(q, a);
        x = *(u8 **)(p + 8);
        if (a == NULL || a[0] == 0) {
            r = fn_800F9398(x + 60, b);
        } else {
            r = fn_800F9788(x + 84, a, b);
        }
        *(void **)(p + 40) = r;
        break;
    case 89:
        fn_800FB064(q, p + 48);
        fn_800FB064(q, p + 56);
        break;
    case 189:
        *(s32 *)(p + 12) = 47;
        break;
    case 190:
        *(s32 *)(p + 12) = 48;
        break;
    case 187:
        *(s32 *)(p + 12) = 45;
        break;
    case 188:
        *(s32 *)(p + 12) = 46;
        break;
    default:
        fn_801EF720(p, q, c);
        break;
    }
}

} /* extern "C" */
