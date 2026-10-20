// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E45A0[];
extern volatile f32 lbl_80363E98;
void fn_80121E1C(void *);

void *fn_8012D530(u8 *p) {
    *(void * *)(p + 52) = lbl_802E45A0;
    fn_80121E1C(p + 36);
    *(u8 *)(p + 0) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(f32 *)(p + 28) = lbl_80363E98;
    *(f32 *)(p + 32) = lbl_80363E98;
    return p;
}

} /* extern "C" */
