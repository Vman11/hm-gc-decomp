// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE4DC[];
void __ct__9C801EFA90Fv(void *);

void *__ct__9C801ED250Fv(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void **)p = lbl_802EE4DC;
    *(s32 *)(p + 4) = 29;
    *(s32 *)(p + 40) = 0;
    return p;
}

} /* extern "C" */
