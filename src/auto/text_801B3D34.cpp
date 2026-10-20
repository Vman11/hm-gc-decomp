// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364F30;
extern f32 lbl_80364F34;
extern f32 lbl_80364F38;
void fn_801A4B54(void *);

void fn_801B3D34(u8 *p) {
    fn_801A4B54(p);
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 112) = 0;
    *(s32 *)(p + 116) = 0;
    *(s32 *)(p + 120) = 0;
    *(f32 *)(p + 148) = lbl_80364F30;
    *(f32 *)(p + 152) = lbl_80364F30;
    *(f32 *)(p + 156) = lbl_80364F34;
    *(f32 *)(p + 160) = lbl_80364F38;
    *(s32 *)(p + 164) = 0;
    *(s32 *)(p + 100) = 0;
    *(s32 *)(p + 104) = 0;
    *(s32 *)(p + 108) = 0;
}

} /* extern "C" */
