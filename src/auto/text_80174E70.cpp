// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D9258(u8);

void fn_80174E70(u8 *p, s32 v) {
    if (p[23] != v) {
        p[23] = v;
        fn_800D9258(p[0x21]);
    }
}

} /* extern "C" */
