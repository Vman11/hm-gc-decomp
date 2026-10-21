// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F74F4(void *);

void fn_800F7D54(u8 *p, u32 a, u32 b) {
    if (*(u32 *)(p + 4) != 0) {
        u8 *end;
        u8 *e;
        e = p + 12;
        end = p + 652;
        for (; e < end; e += 40) {
            if (*(u32 *)(e + 8) != 0) {
                fn_800F74F4(e);
            }
        }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 652) = 0;
    }
    *(u32 *)p = (a + 63) & ~63;
    *(u32 *)(p + 4) = b - (*(u32 *)p - a);
    *(u32 *)(p + 8) = *(u32 *)p;
    **(u32 **)(p + 8) = b;
    (*(u32 **)(p + 8))[1] = 0;
    (*(u32 **)(p + 8))[2] = 0;
}

} /* extern "C" */
