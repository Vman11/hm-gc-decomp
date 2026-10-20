// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C800A3008[];
extern f32 lbl_80361C38;
extern volatile f32 lbl_80361BD0;
void __ct__9C8024262CFv(void *);
void fn_800A29A4(void *);

void *__ct__9C800A3008Fv(u8 *p) {
    __ct__9C8024262CFv(p);
    *(void * *)(p + 0) = __vt__9C800A3008;
    *(f32 *)(p + 432) = lbl_80361C38;
    *(f32 *)(p + 472) = lbl_80361BD0;
    *(f32 *)(p + 476) = lbl_80361BD0;
    *(f32 *)(p + 480) = lbl_80361BD0;
    *(s32 *)(p + 508) = 0;
    *(s32 *)(p + 512) = 0;
    fn_800A29A4(p);
    return p;
}
