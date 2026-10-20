// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDF34[];
void __ct__9C801EFA90Fv(void *);

void *__ct__9C801EA320Fv(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802EDF34;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 4) = 27;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 108) = 0;
    return p;
}

} /* extern "C" */
