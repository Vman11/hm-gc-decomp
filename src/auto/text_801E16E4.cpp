// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803652B0;
void fn_801EF83C(void *);

void fn_801E16E4(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        *(s32 *)(p + 4) = 14;
        *(s32 *)(p + 40) = 0;
        *(f32 *)(p + 44) = lbl_803652B0;
        *(f32 *)(p + 48) = lbl_803652B0;
        *(f32 *)(p + 52) = lbl_803652B0;
        fn_801EF83C(p);
    }
}

} /* extern "C" */
