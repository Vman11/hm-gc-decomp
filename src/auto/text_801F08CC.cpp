// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE890[];
extern volatile f32 lbl_80365458;
void __ct__9C801EB864Fv(void *);

void *fn_801F08CC(u8 *p) {
    __ct__9C801EB864Fv(p);
    *(void * *)(p + 20) = lbl_802EE890;
    *(s32 *)(p + 36) = 0;
    *(f32 *)(p + 24) = lbl_80365458;
    *(f32 *)(p + 32) = lbl_80365458;
    *(f32 *)(p + 28) = lbl_80365458;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 0) = 15;
    return p;
}

} /* extern "C" */
