// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDF90[];
void __ct__9C801DFDC8Fv(void *);

void *__ct__9C801EA59CFv(u8 *p) {
    __ct__9C801DFDC8Fv(p);
    *(void * *)(p + 20) = lbl_802EDF90;
    *(void * *)(p + 28) = lbl_802EDF90 + 44;
    *(s32 *)(p + 92) = 0;
    *(u8 *)(p + 84) = 0;
    *(s32 *)(p + 80) = 4;
    *(s32 *)(p + 0) = 2;
    return p;
}

} /* extern "C" */
