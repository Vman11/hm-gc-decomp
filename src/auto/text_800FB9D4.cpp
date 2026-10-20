// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_800FA8F4(void *);

void fn_800FB9D4(u8 *p, u8 *a, s32 b) {
    *(u8 **)(p + 0x10) = a;
    *(s32 *)p = b;
    (*(u8 **)(p + 0x10))[*(s32 *)p - 1] = 0;
    *(s32 *)(p + 4) = 0;
    *(void **)(p + 8) = fn_800FA8F4(p);
}

} /* extern "C" */
