// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80365268;
u32 *fn_8019565C(void *);

void fn_801DE9E8(u8 *p) {
    u32 *r = fn_8019565C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40));
    if (*(u32 *)(p + 36) & 2) {
        *r |= lbl_80365268;
    }
}

} /* extern "C" */
