// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80365328;
void fn_801EF83C(void *);

void fn_801E77D8(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        fn_801EF83C(p);
    *(u8 *)(p + 40) = 0;
    *(s32 *)(p + 52) = 0;
    *(s32 *)(p + 48) = 0;
    *(f32 *)(p + 56) = lbl_80365328;
    *(f32 *)(p + 60) = lbl_80365328;
    *(f32 *)(p + 64) = lbl_80365328;
    }
}

} /* extern "C" */
