// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035C3DC;
void fn_80241E0C(void *);

void fn_800413B8(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(f32 *)(p + 296) = lbl_8035C3DC;
    *(f32 *)(p + 300) = lbl_8035C3DC;
    *(f32 *)(p + 304) = lbl_8035C3DC;
    fn_80241E0C(p);
}

} /* extern "C" */
