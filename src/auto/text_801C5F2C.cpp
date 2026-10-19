// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801C5F2C { virtual void p0(); virtual void p1(); virtual s32 m(void *, void *, f32, f32); };
s32 fn_801C5F2C(u8 *p, void *a, f32 x, f32 y) {
    u8 *q;
    BOOL r = FALSE;
    for (q = *(u8 **)(p + 0x88); q != NULL; q = *(u8 **)(q + 8)) {
        if (*(s32 *)(q + 4) != 0 && (*(V_801C5F2C **)q)->m(p, a, x, y) == 0) {
            r = TRUE;
        }
    }
    if (r) {
        return 0;
    }
    *(f32 *)(p + 0x178) = x;
    *(f32 *)(p + 0x17C) = y;
    return 0;
}

} /* extern "C" */
