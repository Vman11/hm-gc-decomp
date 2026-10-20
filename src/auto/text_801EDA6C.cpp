// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE510[];
extern f32 lbl_80365420;
void __ct__9C801EB864Fv(void *);

void *__ct__9C801EDA6CFv(u8 *p) {
    __ct__9C801EB864Fv(p);
    *(void * *)(p + 20) = lbl_802EE510;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(f32 *)(p + 36) = lbl_80365420;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 0) = 13;
    return p;
}

} /* extern "C" */
