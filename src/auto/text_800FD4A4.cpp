// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2290[];
extern volatile f32 lbl_80363714;
void fn_80100CF4(void *);

void *fn_800FD4A4(u8 *p) {
    *(void * *)(p + 48) = lbl_802E2290;
    fn_80100CF4(p + 32);
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(f32 *)(p + 32) = lbl_80363714;
    *(f32 *)(p + 36) = lbl_80363714;
    *(f32 *)(p + 40) = lbl_80363714;
    *(f32 *)(p + 44) = lbl_80363714;
    *(s32 *)(p + 28) = 0;
    return p;
}

} /* extern "C" */
