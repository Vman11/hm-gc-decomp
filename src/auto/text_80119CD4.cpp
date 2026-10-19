// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80119CD4 { u8 pad[0x80]; virtual void p0(); virtual void m(void *, void *, void *); };
struct V_80119CD4 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void a(void *); virtual void b(); };
void *memset(void *, s32, u32);
void fn_8011AA10(void *);

void fn_80119CD4(V_80119CD4 *p) {
    u8 buf[48];
    memset(buf, 0, 48);
    if (*(u32 *)((u8 *)p + 0x45C) != 0) {
        p->q();
    }
    fn_8011AA10(p);
    p->a(buf);
    ((S_80119CD4 *)((u8 *)p + 0x3E0))->m(buf, (u8 *)p + 0x3D4, p);
    p->b();
}

} /* extern "C" */
