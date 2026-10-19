// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_80119214 { u8 pad[0x2A0]; virtual void a(void *); virtual void b(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void q(); };
struct V2_80119214 { u8 pad[0x298]; virtual void p0(); virtual void p1(); virtual void c(void *); };
void *memset(void *, s32, u32);
void fn_8011B248(void);

void fn_80119214(V1_80119214 *p) {
    struct { u8 b[12]; void *f; } t;
    memset(&t, 0, 12);
    t.f = (void *)fn_8011B248;
    if (*(s32 *)p != 0) {
        p->q();
    }
    p->a(&t);
    ((V2_80119214 *)p)->c(&t);
    p->b();
}

} /* extern "C" */
