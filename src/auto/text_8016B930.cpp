// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_803646F0;
void fn_800D9A04(u8, void *, u8);

void fn_8016B930(u8 *p) {
    *(u32 *)(p + 44) |= lbl_803646F0;
    if (p[9208] != 0) {
        p[9208] = 0;
        fn_800D9A04(p[9208], *(void **)(p + 9212), p[9216]);
    }
}

} /* extern "C" */
