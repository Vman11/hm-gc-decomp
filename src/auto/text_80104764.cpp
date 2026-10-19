// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80104764 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };
extern u8 lbl_803286D0[];
extern u32 lbl_8036387C;
extern u32 lbl_80363870;

s32 fn_80104764(u8 *p) {
    u8 *q;
    if (*(void **)p == NULL) {
        if (!(*(u32 *)(p + 0x20) & 0x20)) {
            return 0;
        }
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x14), *(void **)(p + 0x10));
    } else {
        (*(V_80104764 **)p)->m();
        if (!(*(u32 *)(p + 0x20) & 0x20)) {
            return 0;
        }
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x10C))(*(void **)(p + 0x14), *(void **)(p + 0x10));
        (*(void (**)(void *, void *))(lbl_803286D0 + 0x160))(*(void **)(p + 0x14), *(void **)(*(u8 **)p + 0x14));
    }
    for (q = *(u8 **)(p + 8); q != NULL; q = *(u8 **)(q + 4)) {
        *(u32 *)(q + 0x20) |= lbl_8036387C;
    }
    *(u32 *)(p + 0x20) |= lbl_80363870;
    *(u32 *)(p + 0x20) &= ~0x20;
    return 32;
}

} /* extern "C" */
