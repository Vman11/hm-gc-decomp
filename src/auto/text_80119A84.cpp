// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80119A84 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void a(); virtual void b(); };
struct S_80119A84 { u8 pad[0x1C]; virtual void p0(); virtual void p1(); virtual void m(); };
void fn_80119508(void *);

void fn_80119A84(V_80119A84 *p) {
    if (*(u32 *)((u8 *)p + 0x340) != 0) {
        p->a();
        ((S_80119A84 *)((u8 *)p + 0x32C))->m();
        p->b();
    }
    fn_80119508(p);
}

} /* extern "C" */
