// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800D0B94(void *, s32, u32 *);

u32 fn_8020BA7C(u8 *p) {
    if (*(u32 *)(p + 8) & 2) {
        u32 v;
        if (fn_800D0B94(*(void **)p, 0, &v) == 0) {
            return v;
        }
    }
    return 0;
}

} /* extern "C" */
