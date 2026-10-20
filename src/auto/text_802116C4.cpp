// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EFE90[];
void __ct__9C800FB754Fv(void *);
void *memset(void *, s32, u32);

void *__ct__9C802116C4Fv(u8 *p) {
    *(void * *)(p + 96) = lbl_802EFE90;
    __ct__9C800FB754Fv(p + 76);
    *(s32 *)(p + 0) = -1;
    *(s32 *)(p + 4) = -1;
    *(s32 *)(p + 8) = 0;
    memset(p + 12, 0, 64);
    return p;
}

} /* extern "C" */
