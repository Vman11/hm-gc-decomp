// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8011A10C { u32 x; u8 pad[0x70]; virtual void p0(); virtual void m(void *, void *, void *); };
struct V_8011A10C { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void a(void *); virtual void b(); u8 pad2[0xA8]; S_8011A10C sub; };
void *memset(void *, s32, u32);
void fn_80119AF8(void *);

void fn_8011A10C(V_8011A10C *p) {
    u8 buf[68];
    memset(buf, 0, 68);
    if (p->sub.x != 0) {
        p->q();
    }
    fn_80119AF8(p);
    p->a(buf);
    p->sub.m(buf, (u8 *)p + 0x32C, p);
    p->b();
}

} /* extern "C" */
