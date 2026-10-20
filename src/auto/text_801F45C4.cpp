// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A5684[];
void fn_80060568(const char *, s32, s32, s32);

void fn_801F45C4(u8 *p, u32 a) {
    if (a < 1 || a > 4) {
        fn_80060568(lbl_802A5684, 0, 0, 0);
    }
    *(u32 *)(p + 8) = a;
}

} /* extern "C" */
