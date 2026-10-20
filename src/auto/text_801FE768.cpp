// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF5A8[];
extern f32 lbl_803656C8;
extern f32 lbl_803656CC;
void fn_801FB6E8(void *);

void *__ct__9C801FE768Fv(u8 *p) {
    fn_801FB6E8(p);
    *(void **)(p + 4) = lbl_802EF5A8;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 16) = 0;
    *(f32 *)(p + 24) = lbl_803656C8;
    *(f32 *)(p + 28) = lbl_803656CC;
    return p;
}

} /* extern "C" */
