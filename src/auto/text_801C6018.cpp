// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365000;
extern f32 lbl_80364FFC;
void fn_801B3110(void *);

void fn_801C6018(u8 *p) {
    fn_801B3110(p);
    *(s32 *)(p + 356) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 364) = 0;
    *(f32 *)(p + 372) = lbl_80365000;
    *(f32 *)(p + 368) = lbl_80364FFC;
}

} /* extern "C" */
