// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED920[];
void __ct__9C801EFA90Fv(void *);

void *__ct__9C801E3C20Fv(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void **)p = lbl_802ED920;
    *(s32 *)(p + 4) = 31;
    *(s32 *)(p + 40) = 0;
    return p;
}

} /* extern "C" */
