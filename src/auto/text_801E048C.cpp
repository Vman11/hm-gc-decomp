// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED5D0[];
extern f32 lbl_80365290;
extern f32 lbl_8036528C;
void __ct__9C801EFA90Fv(void *);

void *fn_801E048C(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802ED5D0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 4) = 7;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 64) = 0;
    *(f32 *)(p + 60) = lbl_80365290;
    *(f32 *)(p + 68) = lbl_8036528C;
    return p;
}

} /* extern "C" */
