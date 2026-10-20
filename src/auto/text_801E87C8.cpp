// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDDA4[];
extern volatile f32 lbl_80365340;
void __ct__9C801EFA90Fv(void *);

void *fn_801E87C8(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802EDDA4;
    *(s32 *)(p + 4) = 18;
    *(s32 *)(p + 88) = 0;
    *(f32 *)(p + 96) = lbl_80365340;
    *(f32 *)(p + 100) = lbl_80365340;
    *(s32 *)(p + 92) = 0;
    return p;
}

} /* extern "C" */
