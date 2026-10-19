// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_80365298;

void fn_801E0C74(u8 *p) {
    if (*(u32 *)(p + 0x24) & 2) {
        u8 *q = *(u8 **)(p + 0x28);
        (*(void (**)(void *, void *))(lbl_803286D0 + 0xC))(*(void **)(q + 0x10), p + 0x3C);
        *(u32 *)(q + 0x20) |= lbl_80365298;
    }
}

} /* extern "C" */
