// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80193A98 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(s32); };

void *fn_80193A98(u8 *p, V_80193A98 *q) {
    if (*(u32 *)(p + 100) >= *(u32 *)(p + 88)) {
        q->m(39);
    }
    return *(u8 **)(p + 76) + (*(u32 *)(p + 100))++ * 48;
}

} /* extern "C" */
