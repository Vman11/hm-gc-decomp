// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D903C(u8, s32, s32, s32, u8, s32);

void fn_80174FB4(u8 *p, s32 r, s32 g, s32 b, u8 a, s32 x) {
    if (p[8] != r || p[9] != g || p[10] != b || p[11] != a || p[20] != x) {
        p[8] = r;
        p[9] = g;
        p[10] = b;
        p[11] = a;
        p[20] = x;
        fn_800D903C(p[33], r, g, b, a, x);
    }
}

} /* extern "C" */
