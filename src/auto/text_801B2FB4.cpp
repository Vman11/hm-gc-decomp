// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364F10;
void fn_801BD3DC(void *);

void fn_801B2FB4(u8 *p) {
    fn_801BD3DC(p);
    *(s32 *)(p + 4) = 0;
    *(f32 *)(p + 36) = lbl_80364F10;
    *(f32 *)(p + 40) = lbl_80364F10;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(f32 *)(p + 52) = lbl_80364F10;
}

} /* extern "C" */
