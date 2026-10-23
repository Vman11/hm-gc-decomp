// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void v69(void*); };
struct N { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual int ok(void*,int); };
struct O { u8 pad_[52]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void f6(int,int); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
struct Sc { int on; f32 val; f32 mn; f32 mx; u8 *src; u8 *dst; };
struct PP { u8 pad[0x168]; Sc sc[2]; u8 pad2[0x1c8 - 0x198]; f32 step[2]; };
int fn_801D99B4(void *, int, int);
static inline void setv(A *p, int i, f32 v) {
    if (v > ((PP *)p)->sc[i].mx) v = ((PP *)p)->sc[i].mx;
    if (v < ((PP *)p)->sc[i].mn) v = ((PP *)p)->sc[i].mn;
    if (((PP *)p)->sc[i].src) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].src,0xc,f32) = v; }
    if (((PP *)p)->sc[i].dst) { ((PP *)p)->sc[i].val = v; F(((PP *)p)->sc[i].dst,0xc,int) = (int)v; }
    if (F(p,0x11c,A*)) F(p,0x11c,A*)->v69(p);
    p->v25();
}
static inline void scrollBy(A *p, int i, f32 d) {
    if (((PP *)p)->sc[i].src) ((PP *)p)->sc[i].val = F(((PP *)p)->sc[i].src,0xc,f32);
    setv(p, i, d + ((PP *)p)->sc[i].val);
}
static inline int anyNo(A *p, int a) { int f = 0; for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->on && !n->obj->ok(p, a)) f = 1; return f; }
int fn_801D03EC(A *p, int a, int b) {
    switch (F(p,0x144,s32)) {
    case 16:
        return fn_801D99B4(p, a, b);
    case 32:
        if (anyNo(p, a)) return 1;
        if (!(F(p,0x6c,u32) & 2)) return 1;
        scrollBy(p, 1, -((PP *)p)->step[0]);
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(1, F(p,0x68,int));
        break;
    default:
        if (anyNo(p, a)) return 1;
        if (b && F(p,0x70,O*)) F(p,0x70,O*)->f6(1, F(p,0x68,int));
        break;
    }
    return 1;
}

} /* extern "C" */
