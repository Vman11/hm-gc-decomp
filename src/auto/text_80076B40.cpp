// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_8035F3F0;
void fn_80190C98(void *);

void fn_80076B40(u8 *p, s32 a, s32 b, s32 c) {
    u8 *q = *(u8 **)(p + 0x30);
    if (q != NULL) {
        (*(void (**)(void *, s32, s32, s32))(lbl_803286D0 + 0x1C))(*(void **)(q + 0x10), a, b, c);
        *(u32 *)(q + 0x20) |= lbl_8035F3F0;
        fn_80190C98(p);
    }
}

} /* extern "C" */
