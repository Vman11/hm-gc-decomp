// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036103C;
extern f32 lbl_80361010;
void fn_80241E0C(void *);

void fn_80095CD4(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 1;
    *(f32 *)(p + 296) = lbl_8036103C;
    *(f32 *)(p + 300) = lbl_80361010;
    *(s32 *)(p + 312) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
