// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C5CF8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual s32 m(void *, void *, f32, f32); };
s32 fn_801C5CF8(u8 *p, void *a, f32 x, f32 y) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if (*(s32 *)(q + 4) != 0 && (*(V_801C5CF8 **)q)->m(p, a, x, y) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return 0;
    }
    switch (*(s32 *)(p + 0x144)) {
    case 64:
        *(s32 *)(p + 0x144) = 16;
        break;
    }
    return 0;
}

} /* extern "C" */
