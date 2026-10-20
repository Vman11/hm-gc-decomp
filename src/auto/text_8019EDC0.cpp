// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364D60;
extern f32 lbl_80364D3C;
extern f32 lbl_80364D64;
extern volatile f32 lbl_80364D40;
extern volatile f32 lbl_80364D68;
void fn_80186910(void *);

void fn_8019EDC0(u8 *p) {
    fn_80186910(p + 184);
    fn_80186910(p + 164);
    fn_80186910(p + 144);
    *(s32 *)(p + 204) = 0;
    *(s32 *)(p + 208) = 0;
    *(f32 *)(p + 216) = lbl_80364D60;
    *(f32 *)(p + 220) = lbl_80364D3C;
    *(f32 *)(p + 224) = lbl_80364D64;
    *(s32 *)(p + 228) = 100;
    *(s32 *)(p + 232) = 100;
    *(f32 *)(p + 260) = lbl_80364D40;
    *(f32 *)(p + 236) = lbl_80364D40;
    *(f32 *)(p + 240) = lbl_80364D40;
    *(f32 *)(p + 244) = lbl_80364D68;
    *(f32 *)(p + 248) = lbl_80364D40;
    *(f32 *)(p + 252) = lbl_80364D40;
    *(f32 *)(p + 256) = lbl_80364D68;
}

} /* extern "C" */
