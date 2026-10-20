// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800D91FC(u8);

void fn_80174EA4(u8 *p, s32 v) {
    if (p[22] != v) {
        p[22] = v;
        fn_800D91FC(p[0x21]);
    }
}

} /* extern "C" */
