// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
extern f32 lbl_80364CF8;
void fn_80182BAC(void *);

void fn_8019E2B4(u8 *p) {
    if (*(void **)(p + 44) != NULL) {
        fn_80182BAC(p);
        *(s32 *)(p + 84) = 0;
        *(s32 *)(p + 88) = 0;
        *(f32 *)(p + 92) = lbl_80364CF8;
        *(f32 *)(p + 96) = lbl_803596E0[0];
    }
}

} /* extern "C" */
