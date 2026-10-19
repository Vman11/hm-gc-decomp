// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80104F78 { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
extern u8 lbl_803286D0[];
void fn_80104F78(V_80104F78 *p, void *x, void *y) {
    if (*(void **)((u8 *)p + 0x10) != NULL) {
        p->m();
    }
    *(void **)((u8 *)p + 0x10) = x;
    (*(void (**)(void *))(lbl_803286D0 + 0x4))(*(void **)((u8 *)p + 0x10));
    *(void **)((u8 *)p + 0x14) = y;
    (*(void (**)(void *))(lbl_803286D0 + 0x4))(*(void **)((u8 *)p + 0x14));
    *(s32 *)((u8 *)p + 0x20) = 43;
}

} /* extern "C" */
