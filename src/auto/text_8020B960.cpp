// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O { void *h; u32 f4; u32 fl; u8 p[96 - 12]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual u32 div(); };
int fn_800CDD24(void *, u32 *, u32 *);
u32 fn_8020B960(O *o) {
    u32 a, b;
    if (o->fl & 2) {
        if (fn_800CDD24(o->h, &a, &b) == 0) {
            u32 d = o->div();
            if (d) return a / d;
            return 0;
        }
        return 0;
    }
    return 0;
}

} /* extern "C" */
