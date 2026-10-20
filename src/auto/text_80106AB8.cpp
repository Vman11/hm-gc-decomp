// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E24A8[];
extern f32 lbl_803638C8;
extern volatile f32 lbl_803638CC;
void __ct__9C800F92E8Fv(void *);

void *__ct__9C80106AB8Fv(u8 *p) {
    __ct__9C800F92E8Fv(p);
    *(void * *)(p + 16) = lbl_802E24A8;
    *(f32 *)(p + 20) = lbl_803638C8;
    *(f32 *)(p + 24) = lbl_803638CC;
    *(f32 *)(p + 28) = lbl_803638CC;
    *(f32 *)(p + 32) = lbl_803638CC;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(f32 *)(p + 44) = lbl_803638CC;
    *(f32 *)(p + 48) = lbl_803638CC;
    *(f32 *)(p + 52) = lbl_803638CC;
    return p;
}

} /* extern "C" */
