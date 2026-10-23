// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void v28(int,f32,f32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
inline A *fn_801C1758(A *p) { return F(p,0x138,A*); }
inline A *fn_801C176C(A *p) { return F(p,0x134,A*); }
void fn_801C2014(void *ctx, int a, A *c, f32 x, f32 y) {
    for (; c; c = fn_801C176C(c)) {
        c->v28(a, x, y);
        if (fn_801C1758(c)) fn_801C2014(ctx, a, fn_801C1758(c), x, y);
    }
}

} /* extern "C" */
