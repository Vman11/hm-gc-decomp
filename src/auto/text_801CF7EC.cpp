// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual int v22(void*,u32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1cc - 0x198]; f32 saved[2]; };
static inline f32 clampf(f32 v, f32 hi, f32 lo) { if (v > hi) v = hi; if (v < lo) v = lo; return v; }
static inline void setv(A *p, int i, f32 v) {
    v = clampf(v, ((PP *)p)->sc[i].mx, ((PP *)p)->sc[i].mn);
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
int fn_801CF7EC(A *p, u32 key) {
    {
        Node *n = F(p,0x88,Node*);
        int f = 0;
        for (; n; n = n->next) if (n->on && !n->obj->v22(p, key)) f = 1;
        if (f) return 0;
    }
    switch (F(p,0x144,s32)) {
    case 32:
        if (((PP *)p)->sc[0].on) setv(p, 0, ((PP *)p)->sc[0].mn);
        if (((PP *)p)->sc[1].on) setv(p, 1, ((PP *)p)->sc[1].mn);
        break;
    }
    return 0;
}

} /* extern "C" */
