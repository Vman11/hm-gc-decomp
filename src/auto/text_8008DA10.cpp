// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80360590;
extern volatile f32 lbl_80360540;
extern f32 lbl_80360594;
void fn_80241E0C(void *);

void fn_8008DA10(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(f32 *)(p + 312) = lbl_80360590;
    *(f32 *)(p + 316) = lbl_80360540;
    *(s32 *)(p + 344) = 0;
    *(s32 *)(p + 348) = 0;
    *(f32 *)(p + 352) = lbl_80360594;
    *(s32 *)(p + 356) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(f32 *)(p + 380) = lbl_80360540;
    *(s32 *)(p + 384) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
