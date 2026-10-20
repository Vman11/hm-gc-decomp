// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80114390 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(u32); };
extern "C" { void fn_8010C3BC(void *, void *, void *); u8 fn_800FB33C(void *); }

s32 fn_80114390(V_80114390 *q, void *a, void *s) {
    u32 n;
    u32 i;
    fn_8010C3BC(q, a, s);
    n = *(u32 *)(*(u8 **)q + 16);
    q->m(n);
    for (i = 0; i < n; i++) {
        (*(u8 **)((u8 *)q + 12))[i] = fn_800FB33C(s);
    }
    return 0;
}

} /* extern "C" */
