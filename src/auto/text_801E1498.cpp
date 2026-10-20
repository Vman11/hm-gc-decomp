// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803652A8;
void fn_801E77D8(void *);

void fn_801E1498(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        fn_801E77D8(p);
    *(s32 *)(p + 4) = 13;
    *(f32 *)(p + 72) = lbl_803652A8;
    *(f32 *)(p + 76) = lbl_803652A8;
    *(f32 *)(p + 80) = lbl_803652A8;
    *(s32 *)(p + 68) = 0;
    }
}

} /* extern "C" */
