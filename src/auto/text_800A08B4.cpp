// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80361B2C;
extern f32 lbl_80361B74;
void fn_80241E0C(void *);

void fn_800A08B4(u8 *p) {
    *(s32 *)(p + 332) = 0;
    *(s32 *)(p + 336) = 0;
    *(s32 *)(p + 340) = 0;
    *(s32 *)(p + 344) = 0;
    *(s32 *)(p + 348) = 0;
    *(f32 *)(p + 352) = lbl_80361B2C;
    *(f32 *)(p + 356) = lbl_80361B74;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(s32 *)(p + 380) = 0;
    *(s32 *)(p + 384) = 0;
    *(s32 *)(p + 396) = 0;
    *(s32 *)(p + 400) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */
