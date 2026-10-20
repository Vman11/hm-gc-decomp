// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035FD94;
void fn_80241E0C(void *);

void fn_80084D54(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(s32 *)(p + 312) = 0;
    *(f32 *)(p + 316) = lbl_8035FD94;
    *(s32 *)(p + 320) = 0;
    *(s32 *)(p + 324) = 1;
    *(f32 *)(p + 328) = lbl_8035FD94;
    *(s32 *)(p + 332) = 0;
    *(s32 *)(p + 336) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
