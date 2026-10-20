// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80113860 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(u32); };
extern "C" { void fn_8010C3BC(void *, void *, void *); void fn_800FB064(void *, void *); void *memcpy(void *, const void *, u32); }

s32 fn_80113860(V_80113860 *q, void *a, void *s) {
    u8 *p = (u8 *)q;
    u32 n;
    u32 off;
    u32 i;
    u8 buf[8];
    fn_8010C3BC(q, a, s);
    n = *(u32 *)(*(u8 **)p + 16);
    q->m(n);
    for (i = 0, off = 0; i < n; i++) {
        fn_800FB064(s, buf);
        memcpy(*(u8 **)(p + 12) + off, buf, 8);
        off += 8;
    }
    return 0;
}

} /* extern "C" */
