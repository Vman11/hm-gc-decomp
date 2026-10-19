// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800E1F04(u8 *base, void (*dt)(void *, s32), u32 size, u32 n) {
    u8 *p = base + size * n;
    while (n != 0) {
        p -= size;
        dt(p, -1);
        n--;
    }
}

} /* extern "C" */
