// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80076AD8 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80076AD8(V_80076AD8 *q, f32 *out) {
    u8 *p = (u8 *)q;
    if (*(u32 *)p & 4) {
        q->m();
    }
    out[0] = *(f32 *)(p + 24);
    out[1] = *(f32 *)(p + 28);
    out[2] = *(f32 *)(p + 32);
}

} /* extern "C" */
