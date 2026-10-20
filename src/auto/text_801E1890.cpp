// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED76C[];
extern volatile f32 lbl_803652B0;
void __ct__9C801EFA90Fv(void *);

void *__ct__9C801E1890Fv(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802ED76C;
    *(s32 *)(p + 4) = 14;
    *(s32 *)(p + 40) = 0;
    *(f32 *)(p + 44) = lbl_803652B0;
    *(f32 *)(p + 48) = lbl_803652B0;
    *(f32 *)(p + 52) = lbl_803652B0;
    return p;
}

} /* extern "C" */
