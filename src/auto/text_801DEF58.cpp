// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365270;
extern f32 lbl_80365274;
u8 *fn_801DFE74(void *);

void fn_801DEF58(u8 *p) {
    u8 *r;
    r = fn_801DFE74(*(void **)(p + 40));
    *(f32 *)(r + 40) = lbl_80365270;
    r = fn_801DFE74(*(void **)(p + 44));
    *(f32 *)(r + 40) = lbl_80365274;
    r = fn_801DFE74(*(void **)(p + 44));
    *(u32 *)(r + 48) &= ~1;
}

} /* extern "C" */
