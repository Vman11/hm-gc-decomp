// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80173CE4(void *, void *, void *, void *);

void fn_801745AC(void *p, u32 *a, s32 start, s32 n) {
    u8 *v0;
    u8 *v1;
    u8 *v2;
    u8 *end;
    s32 flip = 1;
    u8 *s0 = (u8 *)a[0] + a[1] * start;
    end = s0 + a[1] * (n + 2);
    v0 = s0;
    v1 = s0 + a[1] * 12;
    v2 = v1 + a[1] * 12;
    while (v2 < end) {
        if (flip != 0) {
            fn_80173CE4(p, v0, v1, v2);
            flip = 0;
        } else {
            fn_80173CE4(p, v0, v2, v1);
            flip = 1;
        }
        v0 += a[1] * 12;
        v1 += a[1] * 12;
        v2 += a[1] * 12;
    }
}

} /* extern "C" */
