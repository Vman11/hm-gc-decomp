// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80365368;
u8 *fn_8019547C(void *);

void fn_801EAF1C(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        *(u32 *)(fn_8019547C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40)) + 152) |= lbl_80365368;
    }
}

} /* extern "C" */
