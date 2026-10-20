// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035D184;
void fn_80241E0C(void *);

void fn_80048BC8(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(s32 *)(p + 312) = 0;
    *(s32 *)(p + 316) = 0;
    *(s32 *)(p + 320) = 0;
    *(f32 *)(p + 336) = lbl_8035D184;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 392) = 0;
    *(s32 *)(p + 396) = 0;
    *(s32 *)(p + 420) = 0;
    *(s32 *)(p + 424) = 0;
    *(s32 *)(p + 428) = 0;
    *(s32 *)(p + 432) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
