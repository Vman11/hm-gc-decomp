// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035F3EC;
extern void *lbl_80359F2C;
extern u32 lbl_8035F3E8;
void fn_8022BF30(void *, s32, s32, f32);
void fn_8022BE28(void *, s32);
void fn_8002B42C(void *, s32);

void fn_80072BA8(u8 *p) {
    *(s32 *)(p + 1376) = 0;
    *(f32 *)(p + 1360) = lbl_8035F3EC;
    fn_8022BF30(p, 255, 1, lbl_8035F3EC);
    fn_8022BE28(p, 0);
    *(u32 *)(p + 552) |= 1;
    fn_8002B42C(lbl_80359F2C, 1);
    if (*(u32 **)(p + 1064) != NULL) {
        **(u32 **)(p + 1064) |= lbl_8035F3E8;
    }
    if (*(u32 **)(p + 1080) != NULL) {
        **(u32 **)(p + 1080) |= lbl_8035F3E8;
    }
    *(s32 *)(p + 1752) = 1;
}

} /* extern "C" */
