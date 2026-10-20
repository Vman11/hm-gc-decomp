// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED6C4[];
extern volatile f32 lbl_8036529C;
void __ct__9C801EFA90Fv(void *);

void *__ct__9C801E1138Fv(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802ED6C4;
    *(s32 *)(p + 4) = 12;
    *(s32 *)(p + 40) = 0;
    *(f32 *)(p + 60) = lbl_8036529C;
    *(f32 *)(p + 64) = lbl_8036529C;
    *(f32 *)(p + 68) = lbl_8036529C;
    *(s32 *)(p + 96) = 0;
    return p;
}

} /* extern "C" */
