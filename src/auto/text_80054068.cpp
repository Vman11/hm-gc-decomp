// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035E008;
extern volatile f32 lbl_8035DF6C;
void fn_80241E0C(void *);

void fn_80054068(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 296) = 0;
    *(f32 *)(p + 304) = lbl_8035E008;
    *(s32 *)(p + 308) = 0;
    *(s32 *)(p + 316) = 0;
    *(f32 *)(p + 320) = lbl_8035DF6C;
    *(s32 *)(p + 324) = 0;
    *(s32 *)(p + 332) = 0;
    *(s32 *)(p + 356) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 404) = 0;
    *(s32 *)(p + 420) = 0;
    *(s32 *)(p + 408) = 0;
    *(s32 *)(p + 412) = 0;
    *(s32 *)(p + 416) = 0;
    *(s32 *)(p + 424) = 0;
    *(f32 *)(p + 428) = lbl_8035DF6C;
    *(s32 *)(p + 432) = 0;
    *(s32 *)(p + 436) = 0;
    *(s32 *)(p + 440) = 0;
    *(s32 *)(p + 444) = 0;
    *(s32 *)(p + 448) = 0;
    *(s32 *)(p + 336) = 0;
    *(s32 *)(p + 340) = 0;
    *(s32 *)(p + 452) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
