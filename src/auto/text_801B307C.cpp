// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EAE48[];
extern volatile f32 lbl_80364F10;
void __ct__9C801BD4C8Fv(void *);

void *__ct__9C801B307CFv(u8 *p) {
    __ct__9C801BD4C8Fv(p);
    *(void * *)(p + 16) = lbl_802EAE48;
    *(s32 *)(p + 4) = 0;
    *(f32 *)(p + 36) = lbl_80364F10;
    *(f32 *)(p + 40) = lbl_80364F10;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(f32 *)(p + 52) = lbl_80364F10;
    return p;
}

} /* extern "C" */
