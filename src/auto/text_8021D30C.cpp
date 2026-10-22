// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct P8021D30C { u8 pad[40]; u16 *keys; } P8021D30C;
f64 fn_800EFE78(void);
s32 fn_8021D30C(P8021D30C *p, s32 lo, s32 n) {
    u16 *base;
    u16 *last;
    u16 *a;
    u16 *b;
    u16 *m;
    s32 v;
    f32 t = fn_800EFE78();
    base = p->keys + lo;
    last = base + n - 1;
    v = (s32)t;
    if (v < base[0] || v >= *last) {
        return n - 1;
    }
    a = base;
    b = last;
    while (a + 1 != b) {
        m = a + ((b - a) >> 1);
        if (*m > v) {
            b = m;
        } else {
            a = m;
        }
    }
    return a - base;
}

} /* extern "C" */
