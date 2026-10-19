// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_80365298;

void fn_801E0CD4(u8 *p) {
    u8 *q;
    if (*(u32 *)(p + 0x24) & 2) {
        if (*(u32 *)(p + 0x24) & 2) {
            q = *(u8 **)(p + 0x28);
            (*(void (**)(void *, void *))(lbl_803286D0 + 0xC))(*(void **)(q + 0x10), p + 0x3C);
            *(u32 *)(q + 0x20) |= lbl_80365298;
        }
        if (*(u32 *)(p + 0x24) & 2) {
            if (*(s32 *)(p + 0x60) != 0) {
                q = *(u8 **)(p + 0x28);
                (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x30))(*(void **)(q + 0x10), p + 0x54, p + 0x48);
                *(u32 *)(q + 0x20) |= lbl_80365298;
            } else {
                q = *(u8 **)(p + 0x28);
                (*(void (**)(void *, void *))(lbl_803286D0 + 0x18))(*(void **)(q + 0x10), p + 0x2C);
                *(u32 *)(q + 0x20) |= lbl_80365298;
            }
        }
    }
}

} /* extern "C" */
