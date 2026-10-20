// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E9A70[];
extern f32 lbl_803596E0[];
extern f32 lbl_80364CF8;
void fn_80182CC4(void *);

void *__ct__9C8019E380Fv(u8 *p) {
    fn_80182CC4(p);
    *(void * *)(p + 80) = lbl_802E9A70;
    *(s32 *)(p + 84) = 0;
    *(s32 *)(p + 88) = 0;
    *(f32 *)(p + 92) = lbl_80364CF8;
    *(f32 *)(p + 96) = lbl_803596E0[0];
    return p;
}

} /* extern "C" */
