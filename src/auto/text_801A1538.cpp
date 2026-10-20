// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

f32 fn_8010155C(void *, void *);
s32 fn_8017F43C(void *, void *);
u32 fn_8014CBEC(void *, void *);

u32 fn_801A1538(u8 *p, u8 *q) {
    u8 *x;
    if (!(*(u32 *)p & 0x800)) {
        return 64;
    }
    x = *(u8 **)(q + 8) + 56;
    if (fn_8010155C(p + 24, x + 96) > *(f32 *)(p + 40)) {
        return 64;
    }
    if (fn_8017F43C(q, p + 24) != 0) {
        return fn_8014CBEC(x, p + 24);
    }
    return 64;
}

} /* extern "C" */
