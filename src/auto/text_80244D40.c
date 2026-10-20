// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

s32 fn_800F6CD0(void *, void *);

BOOL fn_80244D40(u8 *p, u32 a, void *b) {
    u32 off;
    BOOL found;
    s32 i;
    found = FALSE;
    for (i = 0, off = 0; i < *(s32 *)(p + 64); i++) {
        u8 *e = *(u8 **)(p + 68) + off;
        if (a == *(u32 *)(e + 8) && fn_800F6CD0(e, b) != 0) {
            found = TRUE;
            break;
        }
        off += 28;
    }
    return found;
}
