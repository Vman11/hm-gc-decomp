// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364718;
void __dla__FPv(void *);
void fn_80137444(void *);

void fn_8017042C(u8 *p) {
    if (*(u32 *)(p + 12) & 0x10) {
        if (*(void **)(p + 76) != NULL) {
            __dla__FPv(*(void **)(p + 76));
        }
    }
    fn_80137444(p);
    *(s32 *)(p + 72) = 0;
    *(s32 *)(p + 76) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(f32 *)(p + 88) = lbl_80364718;
    *(f32 *)(p + 92) = lbl_80364718;
    *(f32 *)(p + 96) = lbl_80364718;
    *(f32 *)(p + 100) = lbl_80364718;
    *(f32 *)(p + 104) = lbl_80364718;
    *(f32 *)(p + 108) = lbl_80364718;
}

} /* extern "C" */
