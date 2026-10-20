// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035E420;
void fn_80241E0C(void *);

void fn_8005BE14(u8 *p) {
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
    *(s32 *)(p + 324) = 0;
    *(s32 *)(p + 328) = 0;
    *(s32 *)(p + 332) = 0;
    *(s32 *)(p + 336) = 0;
    *(s32 *)(p + 340) = 0;
    *(f32 *)(p + 344) = lbl_8035E420;
    *(s32 *)(p + 348) = 0;
    *(s32 *)(p + 352) = 0;
    *(s32 *)(p + 356) = 1;
    *(s32 *)(p + 360) = 1;
    *(s32 *)(p + 364) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
