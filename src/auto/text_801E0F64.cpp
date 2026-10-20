// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8036529C;
void fn_801EF83C(void *);

void fn_801E0F64(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        fn_801EF83C(p);
    *(s32 *)(p + 4) = 12;
    *(s32 *)(p + 40) = 0;
    *(f32 *)(p + 60) = lbl_8036529C;
    *(f32 *)(p + 64) = lbl_8036529C;
    *(f32 *)(p + 68) = lbl_8036529C;
    *(s32 *)(p + 96) = 0;
    }
}

} /* extern "C" */
