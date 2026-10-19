// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8011A0A4 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void a(); virtual void b(); };
struct S_8011A0A4 { u8 pad[0x74]; virtual void p0(); virtual void p1(); virtual void m(); };
void fn_80119A84(void *);

void fn_8011A0A4(V_8011A0A4 *p) {
    p->a();
    ((S_8011A0A4 *)((u8 *)p + 0x34C))->m();
    p->b();
    fn_80119A84(p);
}

} /* extern "C" */
