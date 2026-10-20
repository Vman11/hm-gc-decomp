// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366250;
void fn_80264840(void *);

void *__ct__9C80247A00Fv(u8 *p) {
    *(s32 *)(p + 0) = 1;
    *(f32 *)(p + 8) = lbl_80366250;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 64) = 0;
    *(s32 *)(p + 68) = 0;
    *(s32 *)(p + 56) = 0;
    *(s32 *)(p + 60) = 0;
    fn_80264840(p + 72);
    *(s32 *)(p + 72) = 0;
    *(u16 *)(p + 4) = 0;
    *(s32 *)(p + 104) = 0;
    return p;
}

} /* extern "C" */
