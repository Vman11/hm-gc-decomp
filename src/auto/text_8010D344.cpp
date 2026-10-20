// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O_8010D344 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual s32 m(void *); };
struct V_8010D344 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *g(u32); };
extern "C" O_8010D344 *fn_8010D0BC(void *, void *);

void *fn_8010D344(V_8010D344 *q, void *a, void *b) {
    u32 i;
    for (i = 0; i < *(u32 *)((u8 *)q + 32); i++) {
        if (fn_8010D0BC(q->g(i), a)->m(b) != 0) {
            return q->g(i);
        }
    }
    return 0;
}

} /* extern "C" */
