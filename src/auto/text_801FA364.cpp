// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80365558;
extern volatile f32 lbl_80365560;
extern f32 lbl_80365568;
extern f32 lbl_8036556C;
void fn_801FBE28(void *);

void fn_801FA364(u8 *p) {
    fn_801FBE28(p);
    *(f32 *)(p + 92) = lbl_80365558;
    *(f32 *)(p + 96) = lbl_80365558;
    *(f32 *)(p + 100) = lbl_80365558;
    *(f32 *)(p + 104) = lbl_80365558;
    *(f32 *)(p + 108) = lbl_80365558;
    *(f32 *)(p + 112) = lbl_80365558;
    *(f32 *)(p + 116) = lbl_80365560;
    *(f32 *)(p + 120) = lbl_80365558;
    *(f32 *)(p + 124) = lbl_80365558;
    *(f32 *)(p + 128) = *(f32 *)(p + 132) = lbl_80365568;
    *(f32 *)(p + 136) = lbl_80365560;
    *(f32 *)(p + 140) = lbl_80365560;
    *(f32 *)(p + 144) = lbl_8036556C;
    *(f32 *)(p + 148) = lbl_80365560;
}

} /* extern "C" */
