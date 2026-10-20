// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EDB60[];
void __ct__9C801EB864Fv(void *);

void *__ct__9C801E62E8Fv(u8 *p) {
    __ct__9C801EB864Fv(p);
    *(void * *)(p + 20) = lbl_802EDB60;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 696;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 0) = 8;
    return p;
}

} /* extern "C" */
