// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364ED0;
void fn_801BD3DC(void *);

void fn_801AE62C(u8 *p) {
    fn_801BD3DC(p);
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 36) = 1;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 188) = 0;
    *(s32 *)(p + 192) = 0;
    *(f32 *)(p + 196) = lbl_80364ED0;
    *(s32 *)(p + 200) = 0;
}

} /* extern "C" */
