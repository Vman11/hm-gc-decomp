// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8023B3C4 { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void *m(); };
extern "C" { void fn_8014C8C8(void *, u32, s32, s32); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); }

void fn_8023B3C4(u8 *p, void *a, void *b, char *s) {
    void *r;
    u8 *o;
    *(void **)(p + 144) = a;
    *(void **)(p + 28) = (**(V_8023B3C4 ***)(p + 144))->m();
    fn_8014C8C8(p, 0x8880, 0, 1);
    o = **(u8 ***)(p + 144);
    if (s == NULL || *s == 0) {
        r = fn_800F9398(o + 120, b);
    } else {
        r = fn_800F9788(o + 144, s, b);
    }
    *(void **)(p + 152) = r;
}

} /* extern "C" */
