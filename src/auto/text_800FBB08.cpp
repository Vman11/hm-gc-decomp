// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 OSGetArenaLo(void);
u32 OSGetArenaHi(void);

u32 fn_800FBB08(void) {
    u32 lo = (OSGetArenaLo() + 31) & ~31;
    return (OSGetArenaHi() & ~31) - lo;
}

} /* extern "C" */
