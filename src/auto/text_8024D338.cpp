// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803663B8;
void fn_8024BA84(void *);

void fn_8024D338(u8 *p) {
    *(s32 *)(p + 112) = 0;
    *(u8 *)(p + 116) = 0;
    *(s32 *)(p + 156) = 0;
    *(s32 *)(p + 160) = 0;
    *(s32 *)(p + 124) = 0;
    *(s32 *)(p + 132) = 0;
    *(f32 *)(p + 128) = lbl_803663B8;
    *(f32 *)(p + 144) = lbl_803663B8;
    *(f32 *)(p + 148) = lbl_803663B8;
    *(s32 *)(p + 152) = 0;
    *(s32 *)(p + 164) = 0;
    fn_8024BA84(p);
}

} /* extern "C" */
