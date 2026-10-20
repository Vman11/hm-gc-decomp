// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035E358;
void fn_80241E0C(void *);

void fn_8005B024(u8 *p) {
    *(s32 *)(p + 280) = 1;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(f32 *)(p + 312) = lbl_8035E358;
    *(s32 *)(p + 316) = 0;
    *(s32 *)(p + 320) = 0;
    *(s32 *)(p + 324) = 0;
    *(f32 *)(p + 328) = lbl_8035E358;
    *(f32 *)(p + 332) = lbl_8035E358;
    *(s32 *)(p + 336) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
