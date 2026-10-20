// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364E88;
void fn_801B3110(void *);

void fn_801AA5E0(u8 *p) {
    fn_801B3110(p);
    *(s32 *)(p + 356) = 1;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(f32 *)(p + 360) = lbl_80364E88;
    *(s32 *)(p + 364) = 0;
}

} /* extern "C" */
