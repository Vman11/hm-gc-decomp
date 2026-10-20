// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_80359F2C;
extern u32 lbl_8035F3E8;
void fn_8002B42C(void *, s32);

void fn_80071EE0(u8 *p) {
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
