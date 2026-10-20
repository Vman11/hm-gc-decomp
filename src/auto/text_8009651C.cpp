// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80242210(void *);

void fn_8009651C(u8 *p) {
    **(f32 **)(p + 284) = *(f32 *)(p + 348);
    **(f32 **)(p + 288) = *(f32 *)(p + 352);
    **(f32 **)(p + 292) = *(f32 *)(p + 356);
    **(f32 **)(p + 296) = *(f32 *)(p + 360);
    **(f32 **)(p + 300) = *(f32 *)(p + 364);
    **(f32 **)(p + 304) = *(f32 *)(p + 368);
    fn_80242210(p);
}

} /* extern "C" */
