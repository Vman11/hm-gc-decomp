// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EAE08[];
extern f32 lbl_8035AF58;
extern f32 lbl_8035AF5C;
extern volatile f32 lbl_80364F08;
void __ct__9C801BD4C8Fv(void *);

void *fn_801B2D30(u8 *p) {
    __ct__9C801BD4C8Fv(p);
    *(void * *)(p + 16) = lbl_802EAE08;
    *(s32 *)(p + 4) = 0;
    *(f32 *)(p + 40) = lbl_8035AF58;
    *(f32 *)(p + 44) = lbl_8035AF5C;
    *(f32 *)(p + 48) = lbl_80364F08;
    *(f32 *)(p + 52) = lbl_80364F08;
    *(s32 *)(p + 36) = 0;
    return p;
}

} /* extern "C" */
