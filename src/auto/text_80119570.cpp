// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80119570 { u8 pad[0x84]; virtual void p0(); virtual void m(void *, void *); };
struct V_80119570 { u8 pad[0x2A0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); virtual void a(void *); virtual void b(); };
void *memset(void *, s32, u32);
void fn_80119214(void *);

void fn_80119570(V_80119570 *p) {
    u8 buf[48];
    memset(buf, 0, 48);
    if (*(u32 *)((u8 *)p + 0x324) != 0) {
        p->q();
    }
    fn_80119214(p);
    p->a(buf);
    ((S_80119570 *)((u8 *)p + 0x2A4))->m(buf, p);
    p->b();
}

} /* extern "C" */
