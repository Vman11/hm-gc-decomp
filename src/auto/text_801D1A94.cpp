// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80365180;
void fn_801A75B8(void *);

void fn_801D1A94(u8 *p) {
    fn_801A75B8(p);
    *(f32 *)(p + 460) = lbl_80365180;
    *(f32 *)(p + 464) = lbl_80365180;
    *(f32 *)(p + 448) = lbl_80365180;
    *(f32 *)(p + 452) = lbl_80365180;
    *(f32 *)(p + 456) = lbl_80365180;
    *(s32 *)(p + 484) = 1;
    *(s32 *)(p + 444) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 384) = 0;
    *(void * *)(p + 408) = p + 360;
    *(s32 *)(p + 380) = 0;
    *(s32 *)(p + 376) = 0;
    *(f32 *)(p + 372) = lbl_80365180;
    *(f32 *)(p + 368) = lbl_80365180;
    *(f32 *)(p + 364) = lbl_80365180;
    *(s32 *)(p + 404) = 0;
    *(s32 *)(p + 400) = 0;
    *(f32 *)(p + 396) = lbl_80365180;
    *(f32 *)(p + 392) = lbl_80365180;
    *(f32 *)(p + 388) = lbl_80365180;
    *(f32 *)(p + 468) = lbl_80365180;
    *(f32 *)(p + 472) = lbl_80365180;
    *(f32 *)(p + 476) = lbl_80365180;
    *(f32 *)(p + 480) = lbl_80365180;
    *(s32 *)(p + 324) = 2;
}

} /* extern "C" */
