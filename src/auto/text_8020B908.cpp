// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800D0B94(void *, s32 *, s32 *);

s32 fn_8020B908(u8 *p) {
    s32 a;
    s32 b;
    if (*(u32 *)(p + 8) & 2) {
        if (fn_800D0B94(*(void **)p, &a, &b) == 0) {
            return (a << 17) / b;
        }
    }
    return 0;
}

} /* extern "C" */
