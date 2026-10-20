// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A56BC[];
void fn_80060568(const char *, s32, s32, s32);

void fn_801F4624(u8 *p, u32 a) {
    if (a < 1 || a > 4) {
        fn_80060568(lbl_802A56BC, 0, 0, 0);
    }
    *(u32 *)(p + 4) = a;
}

} /* extern "C" */
