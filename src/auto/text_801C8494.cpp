// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct W;
struct V { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void ev(W *, int); };
struct Node { V *obj; int on; Node *next; };
struct R { f32 x0, y0, x1, y1; };
struct W { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual int over(f32, f32); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void upd(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void down(u32); virtual void up(u32); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void sel(u32); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void lay(); virtual void s80(); virtual void lay2(); virtual void s82(); virtual void lay3(); };
extern f32 lbl_80365020;
void fn_801DAEE4(W *);
int fn_801BDAD0(W *, f32, f32);
struct G { u8 pad_[0x214]; R ra; R rb; };
static inline bool inRect(f32 x, f32 y, R *r) { bool b = false; if (x >= r->x0 && x <= r->x1 && y >= r->y0 && y <= r->y1) b = true; return b; }
static inline void startDrag(W *g) {
    W *w = F(F(g,0x7c,u8*),0x14,W*);
    Node *n;
    for (n = F(w,0x88,Node*); n; n = n->next) n->obj->ev(w, 8);
    F(w,0x148,u32) = F(w,0x144,u32);
    F(w,0x144,u32) = (F(w,0x144,u32) & ~0xffff) | 8;
}
int fn_801C8494(W *g, f32 x, f32 y, u32 key) {
    u32 i;
    fn_801DAEE4(g);
    F(g,0x1e0,f32) = x;
    F(g,0x1e4,f32) = y;
    for (i = 0; i < F(g,0x1f0,u32); i++) {
        if ((F(g,0x17c,W**)[i]->over(x, y) && (inRect(x, y, &((G *)g)->ra) || inRect(x, y, &((G *)g)->ra))) || F(F(g,0x17c,W**)[i],0x15c,u32)) {
            startDrag(g);
        }
        if (F(F(g,0x17c,W**)[i],0x15c,u32)) {
            W *c = F(g,0x17c,W**)[i];
            F(c,0x58,f32) = F(c,0x14c,f32);
            F(c,0x5c,f32) = F(c,0x150,f32);
            F(c,0x60,f32) = F(c,0x154,f32);
            F(c,0x64,f32) = F(c,0x158,f32);
            switch (F(F(g,0x17c,W**)[i],0x15c,s32)) {
            case 2:
                F(F(g,0x17c,W**)[i],0x60,f32) += x;
                if (F(F(g,0x17c,W**)[i],0x60,f32) < lbl_80365020 + F(F(g,0x17c,W**)[i],0x58,f32))
                    F(F(g,0x17c,W**)[i],0x60,f32) = lbl_80365020 + F(F(g,0x17c,W**)[i],0x58,f32);
                F(g,0x1c8,f32*)[i] = F(F(g,0x17c,W**)[i],0x60,f32) - F(F(g,0x17c,W**)[i],0x58,f32);
            }
            F(g,0x17c,W**)[i]->upd();
            g->lay2();
            g->lay();
            if (!F(g,0x238,int) || !F(g,0x1ac,u32)) g->lay3();
            g->upd();
            g->sel(F(g,0x170,u32));
        }
    }
    if (!fn_801BDAD0(g, x, y)) {
        for (i = 0; i < F(g,0x1f0,u32); i++) {
            if (i >= F(g,0x1e8,u32) && inRect(x, y, &((G *)g)->ra) && fn_801BDAD0(F(g,0x17c,W**)[i], x, y)) F(g,0x17c,W**)[i]->down(key);
            else if (i < F(g,0x1e8,u32) && inRect(x, y, &((G *)g)->rb) && fn_801BDAD0(F(g,0x17c,W**)[i], x, y)) F(g,0x17c,W**)[i]->down(key);
            else F(g,0x17c,W**)[i]->up(key);
        }
    }
    return 0;
}

} /* extern "C" */
