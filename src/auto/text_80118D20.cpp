// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3968[];
extern f32 lbl_80363D80;
extern volatile f32 lbl_80363D7C;
void *memset(void *, s32, u32);

void *__ct__9C80118D20Fv(u8 *p) {
    *(void * *)(p + 60) = lbl_802E3968;
    memset(p, 0, 36);
    *(f32 *)(p + 32) = lbl_80363D80;
    *(f32 *)(p + 36) = lbl_80363D7C;
    *(f32 *)(p + 40) = lbl_80363D7C;
    *(f32 *)(p + 44) = lbl_80363D7C;
    *(f32 *)(p + 48) = lbl_80363D7C;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 52) = 0;
    return p;
}

} /* extern "C" */
