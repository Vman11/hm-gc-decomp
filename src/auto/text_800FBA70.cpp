// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s64 OSGetTime(void);
void fn_800B9CD8(void);

void fn_800FBA70(u32 ms) {
    u32 end = ms + (u32)(OSGetTime() / ((*(u32 *)0x800000F8 / 4) / 1000));
    do {
        fn_800B9CD8();
    } while ((u32)(OSGetTime() / ((*(u32 *)0x800000F8 / 4) / 1000)) < end);
}

} /* extern "C" */
