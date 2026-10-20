// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D90A4(u8, s32, s32, s32, u8, s32);

void fn_80174ED8(u8 *p, s32 r, s32 g, s32 b, u8 a, s32 x) {
    if (p[16] != r || p[17] != g || p[18] != b || p[19] != a || p[21] != x) {
        p[16] = r;
        p[17] = g;
        p[18] = b;
        p[19] = a;
        p[21] = x;
        fn_800D90A4(p[33], r, g, b, a, x);
    }
}

} /* extern "C" */
