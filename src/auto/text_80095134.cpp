// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80360FB0;
extern volatile f32 lbl_80360F84;
extern f32 lbl_80360FA8;
void fn_80241E0C(void *);

void fn_80095134(u8 *p) {
    *(s32 *)(p + 288) = 1;
    *(f32 *)(p + 292) = lbl_80360FB0;
    *(f32 *)(p + 296) = lbl_80360F84;
    *(f32 *)(p + 324) = lbl_80360FA8;
    *(f32 *)(p + 328) = lbl_80360F84;
    *(s32 *)(p + 332) = 0;
    *(s32 *)(p + 336) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
