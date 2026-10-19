// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8019E7C8 { u8 pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void m(void *, void *, void *); };
struct V2_8019E7C8 { u8 pad[0xF4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void n(void *); };
void fn_80138E50(void *);

void fn_8019E7C8(V2_8019E7C8 **p, V1_8019E7C8 *a, void *b, void *c) {
    fn_80138E50(p[0]);
    a->m(p[0], *(void **)((u8 *)p[1] + 0x64), b);
    p[0]->n(c);
}

} /* extern "C" */
