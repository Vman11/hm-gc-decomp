// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80148818 { u8 pad[0x53C]; virtual void m0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(); };
extern "C" s32 fn_80210BD4(void *, void *, void *, s32);

s32 fn_80148818(V_80148818 *q, void *a, void *b) {
    s32 r;
    if (*(u16 *)((u8 *)q + 28) != 0) {
        q->m4();
    }
    r = fn_80210BD4((u8 *)q + 48, a, b, 2);
    if (r != 0) {
        return r;
    }
    q->m0();
    return 0;
}

} /* extern "C" */
