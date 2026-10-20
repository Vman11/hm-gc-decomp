// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_8019565C(void *);

void fn_801E7918(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        u8 *r = fn_8019565C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40));
        *(u32 *)(*(u8 **)(r + 116) + *(s32 *)(p + 48) * 28 + 20) &= ~1;
    }
}

} /* extern "C" */
