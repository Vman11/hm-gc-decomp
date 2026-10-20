// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EAB38[];
extern f32 lbl_80364ED0;
void __ct__9C801BD4C8Fv(void *);

void *__ct__9C801AE6F4Fv(u8 *p) {
    __ct__9C801BD4C8Fv(p);
    *(void * *)(p + 16) = lbl_802EAB38;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 36) = 1;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 188) = 0;
    *(s32 *)(p + 192) = 0;
    *(f32 *)(p + 196) = lbl_80364ED0;
    *(s32 *)(p + 200) = 0;
    return p;
}

} /* extern "C" */
