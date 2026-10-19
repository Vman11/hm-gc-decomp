// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8026D0EC { u8 pad[0x1C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(s32); };
struct V2_8026D0EC { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void b(void *, s32, s32); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void a(f32, s32); };
void fn_8026D0EC(u8 *p, V2_8026D0EC *q, V1_8026D0EC *r, s32 flag) {
    if (flag != 0) {
        r->m(-1);
    } else {
        r->m(0);
    }
    q->a(**(f32 **)(p + 0x20), 0);
    q->b(r, 0, 0);
}

} /* extern "C" */
