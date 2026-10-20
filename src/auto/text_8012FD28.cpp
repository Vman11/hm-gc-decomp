// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803596E0[];
void fn_80121658(void *);

void *fn_8012FD28(u8 *p) {
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    fn_80121658(p + 8);
    fn_80121658(p + 12);
    fn_80121658(p + 16);
    fn_80121658(p + 20);
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 60) = -1;
    *(s32 *)(p + 64) = 0;
    *(f32 *)(p + 68) = lbl_803596E0[0];
    *(s32 *)(p + 72) = 0;
    *(s32 *)(p + 76) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(s32 *)(p + 88) = 0;
    return p;
}

} /* extern "C" */
