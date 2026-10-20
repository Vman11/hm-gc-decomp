// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDCD0[];
extern volatile f32 lbl_80365328;
void __ct__9C801EFA90Fv(void *);

void *fn_801E78AC(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802EDCD0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 48) = 0;
    *(u8 *)(p + 40) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 48) = 0;
    *(f32 *)(p + 56) = lbl_80365328;
    *(f32 *)(p + 60) = lbl_80365328;
    *(f32 *)(p + 64) = lbl_80365328;
    return p;
}

} /* extern "C" */
