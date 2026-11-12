// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2DE8[];
extern f32 lbl_80366C00;
void __ct__9C80267F2CFv(void *);

void *__ct__9C80266A14Fv(u8 *p) {
    __ct__9C80267F2CFv(p);
    *(void **)p = lbl_802F2DE8;
    *(s32 *)(p + 252) = 0;
    *(s32 *)(p + 256) = 0;
    *(f32 *)(p + 260) = lbl_80366C00;
    return p;
}

} /* extern "C" */
