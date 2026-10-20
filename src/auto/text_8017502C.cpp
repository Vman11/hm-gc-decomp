// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D8FB4(u8, s32, s32, s32, s32);

void fn_8017502C(u8 *p, s32 r, s32 g, s32 b, s32 a) {
    if (p[4] != r || p[5] != g || p[6] != b || p[7] != a) {
        p[4] = r;
        p[5] = g;
        p[6] = b;
        p[7] = a;
        fn_800D8FB4(p[33], r, g, b, a);
    }
}

} /* extern "C" */
