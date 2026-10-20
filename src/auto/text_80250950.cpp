// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2120[];
extern f32 lbl_803664C0;
void __ct__9C8023D2ACFv(void *);

void *fn_80250950(u8 *p) {
    __ct__9C8023D2ACFv(p);
    *(void * *)(p + 0) = lbl_802F2120;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 1;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(f32 *)(p + 48) = lbl_803664C0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 60) = 0;
    *(s32 *)(p + 64) = 0;
    return p;
}

} /* extern "C" */
