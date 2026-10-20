// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_803646E8;
void fn_800D99AC(u8);

void fn_8016B800(u8 *p) {
    *(u32 *)(p + 0x2C) |= lbl_803646E8;
    if (p[0x2401] != 0) {
        p[0x2401] = 0;
        fn_800D99AC(p[0x2401]);
    }
}

} /* extern "C" */
