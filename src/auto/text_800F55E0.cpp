// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800F55E0 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(void *); };
void fn_800F6E40(void *, void *);

void fn_800F55E0(V_800F55E0 *p, void *a) {
    u8 buf[12];
    fn_800F6E40(buf, a);
    buf[8] = 0;
    p->m(buf);
}

} /* extern "C" */
