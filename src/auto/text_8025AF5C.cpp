// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2768[];
extern f32 lbl_803667B4;
void __ct__9C80261CB0Fv(void *);

void *__ct__9C8025AF5CFv(u8 *p) {
    __ct__9C80261CB0Fv(p);
    *(void * *)(p + 0) = lbl_802F2768;
    *(s32 *)(p + 176) = 0;
    *(s32 *)(p + 180) = 0;
    *(s32 *)(p + 184) = 0;
    *(s32 *)(p + 188) = 0;
    *(s32 *)(p + 192) = 0;
    *(f32 *)(p + 196) = lbl_803667B4;
    return p;
}

} /* extern "C" */
