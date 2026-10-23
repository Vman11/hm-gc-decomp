// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern f64 lbl_80365160;
extern f32 lbl_80365180;
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x48]; f32 pos[2]; f32 end[2]; u8 pad1[0x168 - 0x58]; Sc sc[2]; u8 pad2[0x19c - 0x198]; f32 tmin[2]; f32 tmax[2]; f32 a[2]; f32 b[2]; };
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline f32 ratio(A *p, int i) {
    PP *q = (PP *)p;
    if (q->sc[i].on) {
        f32 range = (q->tmax[i] - q->tmin[i]) - (q->b[i] - q->a[i]);
        f32 t = q->pos[i] - q->tmin[i];
        if (lbl_80365160 != range) return q->sc[i].mn + (q->sc[i].mx - q->sc[i].mn) * (t / range);
        return lbl_80365180;
    }
    return lbl_80365180;
}
static inline f32 clamp2(f32 lo, f32 v, f32 hi) { if (v < lo) v = lo; if (v > hi) v = hi; return v; }
static inline void drag(A *p, int i, f32 d) {
    PP *q = (PP *)p;
    if (q->sc[i].on) {
        f32 v = clamp2(q->tmin[i], q->pos[i] + d, q->tmax[i] - (q->b[i] - q->a[i]));
        q->pos[i] = v;
        q->end[i] = v + (q->b[i] - q->a[i]);
        setv(p, i, ratio(p, i));
    }
}
void fn_801D0D78(A *p, f32 dx, f32 dy) {
    drag(p, 0, dx);
    drag(p, 1, dy);
}

} /* extern "C" */
