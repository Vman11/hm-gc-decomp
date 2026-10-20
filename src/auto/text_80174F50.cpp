// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D8FF8(u8, s32, s32, s32, s32);

void fn_80174F50(u8 *p, s32 r, s32 g, s32 b, s32 a) {
    if (p[12] != r || p[13] != g || p[14] != b || p[15] != a) {
        p[12] = r;
        p[13] = g;
        p[14] = b;
        p[15] = a;
        fn_800D8FF8(p[33], r, g, b, a);
    }
}

} /* extern "C" */
