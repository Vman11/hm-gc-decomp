// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ED720[];
extern volatile f32 lbl_803652A8;
void fn_801E78AC(void *);

void *__ct__9C801E156CFv(u8 *p) {
    fn_801E78AC(p);
    *(void * *)(p + 0) = lbl_802ED720;
    *(s32 *)(p + 4) = 13;
    *(f32 *)(p + 72) = lbl_803652A8;
    *(f32 *)(p + 76) = lbl_803652A8;
    *(f32 *)(p + 80) = lbl_803652A8;
    *(s32 *)(p + 68) = 0;
    return p;
}

} /* extern "C" */
