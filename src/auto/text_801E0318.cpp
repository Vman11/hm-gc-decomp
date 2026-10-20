// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365290;
extern f32 lbl_8036528C;
void fn_801EF83C(void *);

void fn_801E0318(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        fn_801EF83C(p);
    *(s32 *)(p + 4) = 7;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 64) = 0;
    *(f32 *)(p + 60) = lbl_80365290;
    *(f32 *)(p + 68) = lbl_8036528C;
    }
}

} /* extern "C" */
