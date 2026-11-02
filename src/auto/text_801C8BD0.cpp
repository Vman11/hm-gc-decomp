// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct AB { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual int hit(f32, f32); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void upd(); virtual void s26(); virtual int on2(void *, f32, f32); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual int on(void *, f32, f32); virtual void off(void *); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void sel(int); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void r79(); virtual void s80(); virtual void r81(); virtual void s82(); virtual void r83(); };
struct NB { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual int ev2(void *, void *, f32, f32); };
struct Nd { NB *o; int on; Nd *next; };
struct LB { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void ev(void *, int); };
struct Ln { LB *o; u32 x4; Ln *next; };
struct W { u8 pad[136]; Ln *x136; u8 pad140[324 - 140]; u32 x324; u32 x328; };
struct T124 { u8 pad[20]; W *x20; };
extern "C" {
extern f32 lbl_80365020;
void fn_801DAEE4(AB *);
int fn_801BDAD0(AB *, f32, f32);
static inline bool In1(AB *o, f32 x, f32 y) {
    bool r = false;
    if (x >= F(o,532,f32) && x <= F(o,540,f32) && y >= F(o,536,f32) && y <= F(o,544,f32)) r = true;
    return r;
}
static inline bool In2(AB *o, f32 x, f32 y) {
    bool r = false;
    if (x >= F(o,548,f32) && x <= F(o,556,f32) && y >= F(o,552,f32) && y <= F(o,560,f32)) r = true;
    return r;
}
int fn_801C8BD0(AB *o, void *p, f32 x, f32 y) {
    u32 i;
    Nd *n;
    int r;
    for (i = 0; i < F(o,496,u32); i++) {
        if (F(o,380,AB**)[i]->hit(x, y) && (In1(o, x, y) || In1(o, x, y))) {
            AB *c;
            F(F(o,380,AB**)[i],348,int) = 2;
            c = F(o,380,AB**)[i];
            F(c,332,f32) = F(c,88,f32);
            F(c,336,f32) = F(c,92,f32);
            F(c,340,f32) = F(c,96,f32);
            F(c,344,f32) = F(c,100,f32);
            c = F(o,380,AB**)[i];
            F(c,340,f32) -= x;
            r = 0;
            for (n = F(o,136,Nd*); n; n = n->next)
                if (n->on && !n->o->ev2(o, p, x, y)) r = 1;
            return r ? 1 : 1;
        }
    }
    if (In1(o, x, y)) {
        for (i = F(o,488,u32); i < F(o,496,u32); i++)
            if (fn_801BDAD0(F(o,380,AB**)[i], x, y)) return F(o,380,AB**)[i]->on2(p, x, y);
    } else if (In2(o, x, y)) {
        for (i = 0; i < F(o,488,u32); i++)
            if (fn_801BDAD0(F(o,380,AB**)[i], x, y)) return F(o,380,AB**)[i]->on2(p, x, y);
    }
    {
    int r2;
    r2 = 0;
    for (n = F(o,136,Nd*); n; n = n->next)
        if (n->on && !n->o->ev2(o, p, x, y)) r2 = 1;
    return r2 ? 0 : 0;
    }
}

} /* extern "C" */
