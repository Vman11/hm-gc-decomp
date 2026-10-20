// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F1CE8[];
extern f32 lbl_803662B8;
extern f32 lbl_803662BC;
void __ct__9C8023D2ACFv(void *);

void *__ct__9C80248E00Fv(u8 *p) {
    __ct__9C8023D2ACFv(p);
    *(void * *)(p + 0) = lbl_802F1CE8;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 20) = 0;
    *(f32 *)(p + 28) = lbl_803662B8;
    *(f32 *)(p + 32) = lbl_803662BC;
    *(s32 *)(p + 44) = 1;
    *(s32 *)(p + 48) = 0;
    return p;
}

} /* extern "C" */
