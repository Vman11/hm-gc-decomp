// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035FDB0;
void fn_8005F620(void *);

void fn_800857F8(u8 *p) {
    fn_8005F620(p);
    *(s32 *)(p + 888) = 0;
    *(f32 *)(p + 892) = lbl_8035FDB0;
    *(f32 *)(p + 896) = lbl_8035FDB0;
    *(f32 *)(p + 900) = lbl_8035FDB0;
    *(f32 *)(p + 904) = lbl_8035FDB0;
    *(s32 *)(p + 608) = 8;
    *(s32 *)(p + 920) = 0;
}

} /* extern "C" */
