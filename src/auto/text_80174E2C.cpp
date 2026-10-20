// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D92B4(u8);

void fn_80174E2C(u8 *p, s32 a, s32 b) {
    if (p[0x18] != a || p[0x19] != b) {
        p[0x18] = a;
        p[0x19] = b;
        fn_800D92B4(p[0x21]);
    }
}

} /* extern "C" */
