// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035BDD8;
extern void *lbl_8035A02C;
extern f32 lbl_8035BD80;
void fn_80039E80(void *, s32, f32);

void fn_80032C88(u8 *p) {
    *(s32 *)(p + 0x2B8) = 1;
    *(f32 *)(p + 0xC30) = lbl_8035BDD8;
    fn_80039E80(lbl_8035A02C, 1, lbl_8035BD80);
}

} /* extern "C" */
