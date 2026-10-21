// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C802449C4 {
    u8 b[0x40];
    C802449C4();
    ~C802449C4();
};

void fn_802448C8(C802449C4 *, void *);
void fn_80244750(C802449C4 *, s32);
s32 fn_80244584(C802449C4 *);
void *fn_8024457C(C802449C4 *);
void fn_80244594(C802449C4 *);

struct V_80242BC0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void m(void *, void *, void *, void *, void *); };

void fn_80242BC0(void *a, void *b, void *c, void *d, void *e, void *f) {
    C802449C4 it;
    fn_802448C8(&it, a);
    fn_80244750(&it, 0);
    while (fn_80244584(&it) == 0) {
        ((V_80242BC0 *)fn_8024457C(&it))->m(b, c, d, e, f);
        fn_80244594(&it);
    }
}

} /* extern "C" */
