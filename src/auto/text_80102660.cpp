// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80363854;
extern f32 lbl_803596E0[];
void fn_80100CF4(void *);

void *__ct__9C80102660Fv(u8 *p) {
    fn_80100CF4(p + 60);
    *(s32 *)(p + 0) = 0;
    *(u16 *)(p + 32) = 0;
    *(u16 *)(p + 34) = 0;
    *(u16 *)(p + 36) = 0;
    *(u16 *)(p + 38) = 0;
    *(u16 *)(p + 40) = 0;
    *(u16 *)(p + 42) = 0;
    *(u16 *)(p + 44) = 0;
    *(u16 *)(p + 46) = 0;
    *(u16 *)(p + 48) = 0;
    *(u16 *)(p + 50) = 0;
    *(f32 *)(p + 4) = lbl_80363854;
    *(f32 *)(p + 8) = lbl_80363854;
    *(f32 *)(p + 12) = lbl_80363854;
    *(f32 *)(p + 16) = lbl_80363854;
    *(f32 *)(p + 20) = lbl_80363854;
    *(f32 *)(p + 24) = lbl_80363854;
    *(f32 *)(p + 28) = lbl_80363854;
    *(u16 *)(p + 52) = 0;
    *(u16 *)(p + 54) = 0;
    *(f32 *)(p + 60) = lbl_80363854;
    *(f32 *)(p + 64) = lbl_80363854;
    *(f32 *)(p + 68) = lbl_80363854;
    *(f32 *)(p + 72) = lbl_803596E0[0];
    *(s32 *)(p + 56) = 0;
    return p;
}

} /* extern "C" */
