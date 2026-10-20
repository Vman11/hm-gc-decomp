// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80113C24 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(u32); };
extern "C" { void fn_8010C3BC(void *, void *, void *); f32 fn_800FB2E0(void *); }

s32 fn_80113C24(V_80113C24 *q, void *a, void *s) {
    u8 *p = (u8 *)q;
    u32 n;
    u32 off;
    u32 i;
    fn_8010C3BC(q, a, s);
    n = *(u32 *)(*(u8 **)p + 16);
    q->m(n);
    for (i = 0, off = 0; i < n; i++) {
        *(f32 *)(*(u8 **)(p + 12) + off) = fn_800FB2E0(s);
        off += 4;
    }
    return 0;
}

} /* extern "C" */
