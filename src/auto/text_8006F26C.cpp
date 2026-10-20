// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F0C0;
extern f32 lbl_8035F2CC;
extern u8 *lbl_80359F2C;
extern char lbl_80297AF4[];
void fn_8007225C(void *, f32);
void fn_80241DD0(void *, const char *, void *, s32, s32, s32);
void fn_80072D94(void *, s32, f32);

void fn_8006F26C(u8 *p) {
    u8 *g;
    if (*(f32 *)(*(u8 **)(p + 280) + 1648) > lbl_8035F0C0) {
        return;
    }
    fn_8007225C(*(void **)(p + 280), **(f32 **)(p + 236));
    fn_80241DD0(p, lbl_80297AF4, *(void **)(p + 228), 0, 0, 0);
    g = lbl_80359F2C;
    *(s32 *)(g + 364) = 4;
    *(f32 *)(g + 360) = lbl_8035F2CC;
    fn_80072D94(*(void **)(p + 280), 1, **(f32 **)(p + 344));
}

} /* extern "C" */
