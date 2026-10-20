// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE5B8[];
void __ct__9C801EB864Fv(void *);

void *__ct__9C801EDD20Fv(u8 *p) {
    __ct__9C801EB864Fv(p);
    *(void **)(p + 0x14) = lbl_802EE5B8;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)p = 14;
    return p;
}

} /* extern "C" */
