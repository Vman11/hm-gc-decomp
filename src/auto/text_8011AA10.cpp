// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8011AA10 { u32 x; u8 pad[0x4]; virtual void p0(); virtual void m(void *, void *, void *); };
struct V_8011AA10 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void a(void *); virtual void b(); u8 pad2[0x130]; S_8011AA10 sub; };
void *memset(void *, s32, u32);
void fn_8011A10C(void *);

void fn_8011AA10(V_8011AA10 *p) {
    u8 buf[16];
    memset(buf, 0, 16);
    if (p->sub.x != 0) {
        p->q();
    }
    fn_8011A10C(p);
    p->a(buf);
    p->sub.m(buf, (u8 *)p + 0x34C, p);
    p->b();
}

} /* extern "C" */
