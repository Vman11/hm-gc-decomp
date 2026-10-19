// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

s64 OSGetTime(void);

u32 fn_800FBB9C(void) {
    return OSGetTime() / ((*(u32 *)0x800000F8 / 4) / 1000);
}
