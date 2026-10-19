// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80119AF8 { u8 pad[0x1C]; virtual void p0(); virtual void m(void *, void *); };
struct V_80119AF8 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void a(void *); virtual void b(); };
void *memset(void *, s32, u32);
void fn_80119570(void *);

void fn_80119AF8(V_80119AF8 *p) {
    u8 buf[108];
    memset(buf, 0, 108);
    if (*(u32 *)((u8 *)p + 0x340) != 0) {
        p->q();
    }
    fn_80119570(p);
    p->a(buf);
    ((S_80119AF8 *)((u8 *)p + 0x32C))->m(buf, (u8 *)p + 0x2A4);
    p->b();
}

} /* extern "C" */
