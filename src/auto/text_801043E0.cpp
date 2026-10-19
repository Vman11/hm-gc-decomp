// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_80363870;
void fn_801040E0(void *, void *, void *, u32);

void fn_801043E0(u8 *p, void *a, void *b) {
    u8 *q;
    if ((*(u32 *)(p + 0x20) & 2) || b != *(void **)(p + 0x1C)) {
        *(void **)(p + 0x1C) = b;
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(void **)(p + 0x14), *(void **)(p + 0x10), a);
    }
    for (q = *(u8 **)(p + 8); q != NULL; q = *(u8 **)(q + 4)) {
        fn_801040E0(q, *(void **)(p + 0x14), b, *(u32 *)(p + 0x20));
    }
    *(u32 *)(p + 0x20) |= lbl_80363870;
    *(u32 *)(p + 0x20) &= ~2;
    if (*(void **)(p + 0xC) != NULL) {
        (*(void (**)(void *, void *, void *))(lbl_803286D0 + 0x16C))(*(void **)(p + 0x18), *(void **)(p + 0xC), *(void **)(p + 0x14));
    }
}

} /* extern "C" */
