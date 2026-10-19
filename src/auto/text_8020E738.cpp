// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80365828;
s32 fn_800D0B94(s32, s32, s32);

void fn_8020E738(u8 *p) {
    u8 *q = p;
    u32 i;
    for (i = 0; i < 2; i++) {
        switch (fn_800D0B94(i, 0, 0)) {
        case -2:
        case 0:
            *(u32 *)(q + 0xC) |= lbl_80365828;
            break;
        case -1:
            break;
        default:
            *(u32 *)(q + 0xC) &= ~0x20;
            break;
        }
        q += 0xA944;
    }
}

} /* extern "C" */
