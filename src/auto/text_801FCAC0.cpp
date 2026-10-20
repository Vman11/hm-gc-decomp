// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80129A9C[];
extern u8 lbl_802EF340[];
extern volatile f32 lbl_80365614;
extern volatile f32 lbl_80365618;
void __ct__9C80105074Fv(void *);

void *fn_801FCAC0(u8 *p) {
    __ct__9C80105074Fv(p);
    *(void * *)(p + 36) = __vt__9C80129A9C;
    *(void * *)(p + 36) = lbl_802EF340;
    *(f32 *)(p + 48) = lbl_80365614;
    *(f32 *)(p + 40) = lbl_80365614;
    *(f32 *)(p + 44) = lbl_80365614;
    *(f32 *)(p + 52) = lbl_80365618;
    *(f32 *)(p + 56) = lbl_80365618;
    *(f32 *)(p + 60) = lbl_80365618;
    *(s32 *)(p + 64) = 0;
    return p;
}

} /* extern "C" */
