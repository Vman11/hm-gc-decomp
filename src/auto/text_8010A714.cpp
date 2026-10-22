// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F6E88(void *, void *);
s32 strncmp(void *, void *, s32);

bool fn_8010A714(u8 *a, u8 *b) {
    u8 x[8];
    u8 y[8];
    fn_800F6E88(x, a + 0xC);
    fn_800F6E88(y, b + 0xC);
    return strncmp(x, y, 8) == 0;
}

} /* extern "C" */
