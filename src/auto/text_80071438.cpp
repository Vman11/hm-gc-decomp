// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80071438 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void m(); };
extern f32 lbl_8035F33C;
void fn_80241E0C(void *);
void fn_80241588(void *, s32, s32, f32);

void fn_80071438(V_80071438 *p) {
    p->m();
    fn_80241E0C(p);
    fn_80241588(p, 5, 0, lbl_8035F33C);
}

} /* extern "C" */
