// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801FF300 { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m17(void *, void *, void *); virtual void p17(); virtual void p18(); virtual void m19(void *, void *); };

void fn_801FF300(V_801FF300 *p, void *a, void *b, void *c, void *d) {
    p->m19(a, c);
    p->m17(b, c, d);
}

} /* extern "C" */
