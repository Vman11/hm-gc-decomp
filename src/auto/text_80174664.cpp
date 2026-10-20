// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80173CE4(void *, void *, void *, void *);

void fn_80174664(void *p, u32 *a, s32 start, s32 n) {
    u8 *v2;
    u8 *end;
    u8 *v;
    u8 *s0 = (u8 *)a[0] + a[1] * start;
    end = s0 + a[1] * (n + n + n);
    v = s0;
    while (v < end) {
        u8 *v1 = v + a[1] * 12;
        v2 = v1 + a[1] * 12;
        fn_80173CE4(p, v, v1, v2);
        v = v2 + a[1] * 12;
    }
}

} /* extern "C" */
